#ifndef TESSERACT_SCENE_GRAPH_SRDF_TOOL_CENTER_POINTS_H
#define TESSERACT_SCENE_GRAPH_SRDF_TOOL_CENTER_POINTS_H

#include <tesseract_common/macros.h>
TESSERACT_COMMON_IGNORE_WARNINGS_PUSH
#include <array>
#include <console_bridge/console.h>
#include <tinyxml2.h>
#include <boost/algorithm/string/classification.hpp>
#include <boost/algorithm/string/split.hpp>
TESSERACT_COMMON_IGNORE_WARNINGS_POP

#include <tesseract_common/utils.h>
#include <tesseract_scene_graph/graph.h>
#include <tesseract_scene_graph/srdf/types.h>

namespace tesseract_scene_graph
{
/**
 * @brief Parse groups tool center points from srdf xml element
 * @param scene_graph The tesseract scene graph
 * @param srdf_xml The xml element to parse
 * @param version The srdf version number
 * @return Group Tool Center Points
 */
inline GroupTCPs parseGroupTCPs(const tesseract_scene_graph::SceneGraph& /*scene_graph*/,
                                const tinyxml2::XMLElement* srdf_xml,
                                const std::array<int, 3>& /*version*/)
{
  GroupTCPs group_tcps;
  for (const tinyxml2::XMLElement* xml_group_element = srdf_xml->FirstChildElement("group_tcps"); xml_group_element;
       xml_group_element = xml_group_element->NextSiblingElement("group_tcps"))
  {
    std::string group_name_string;
    tinyxml2::XMLError status =
        tesseract_common::QueryStringAttributeRequired(xml_group_element, "group", group_name_string);
    if (status != tinyxml2::XML_SUCCESS)
      continue;

    auto group_tcp = group_tcps.find(group_name_string);
    if (group_tcp == group_tcps.end())
    {
      group_tcps[group_name_string] = TCPs();
      group_tcp = group_tcps.find(group_name_string);
    }

    for (const tinyxml2::XMLElement* xml_element = xml_group_element->FirstChildElement("tcp"); xml_element;
         xml_element = xml_element->NextSiblingElement("tcp"))
    {
      Eigen::Isometry3d tcp = Eigen::Isometry3d::Identity();

      if (xml_element->Attribute("name") == nullptr && xml_element->Attribute("xyz") == nullptr &&
          xml_element->Attribute("rpy") == nullptr && xml_element->Attribute("wxyz") == nullptr)
      {
        CONSOLE_BRIDGE_logError("Invalid tcp definition");
        continue;
      }
      std::string tcp_name_string;
      tinyxml2::XMLError status = tesseract_common::QueryStringAttributeRequired(xml_element, "name", tcp_name_string);
      if (status != tinyxml2::XML_SUCCESS)
        continue;

      std::string xyz_string, rpy_string, wxyz_string;
      status = tesseract_common::QueryStringAttribute(xml_element, "xyz", xyz_string);
      if (status != tinyxml2::XML_NO_ATTRIBUTE && status != tinyxml2::XML_SUCCESS)
      {
        CONSOLE_BRIDGE_logError("Invalid tcp attribute 'xyz'");
        continue;
      }

      if (status != tinyxml2::XML_NO_ATTRIBUTE)
      {
        std::vector<std::string> tokens;
        boost::split(tokens, xyz_string, boost::is_any_of(" "), boost::token_compress_on);
        if (tokens.size() != 3 || !tesseract_common::isNumeric(tokens))
        {
          CONSOLE_BRIDGE_logError("Error parsing tcp attribute 'xyz'");
          continue;
        }

        double x, y, z;
        // No need to check return values because the tokens are verified above
        tesseract_common::toNumeric<double>(tokens[0], x);
        tesseract_common::toNumeric<double>(tokens[1], y);
        tesseract_common::toNumeric<double>(tokens[2], z);

        tcp.translation() = Eigen::Vector3d(x, y, z);
      }

      if (xml_element->Attribute("wxyz") == nullptr)
      {
        status = tesseract_common::QueryStringAttribute(xml_element, "rpy", rpy_string);
        if (status != tinyxml2::XML_NO_ATTRIBUTE && status != tinyxml2::XML_SUCCESS)
        {
          CONSOLE_BRIDGE_logError("Invalid tcp attribute 'rpy'");
          continue;
        }

        if (status != tinyxml2::XML_NO_ATTRIBUTE)
        {
          std::vector<std::string> tokens;
          boost::split(tokens, rpy_string, boost::is_any_of(" "), boost::token_compress_on);
          if (tokens.size() != 3 || !tesseract_common::isNumeric(tokens))
          {
            CONSOLE_BRIDGE_logError("Error parsing tcp attribute 'rpy'");
            continue;
          }

          double r, p, y;
          // No need to check return values because the tokens are verified above
          tesseract_common::toNumeric<double>(tokens[0], r);
          tesseract_common::toNumeric<double>(tokens[1], p);
          tesseract_common::toNumeric<double>(tokens[2], y);

          Eigen::AngleAxisd rollAngle(r, Eigen::Vector3d::UnitX());
          Eigen::AngleAxisd pitchAngle(p, Eigen::Vector3d::UnitY());
          Eigen::AngleAxisd yawAngle(y, Eigen::Vector3d::UnitZ());

          Eigen::Quaterniond rpy = yawAngle * pitchAngle * rollAngle;

          tcp.linear() = rpy.toRotationMatrix();
        }
      }
      else
      {
        status = tesseract_common::QueryStringAttribute(xml_element, "wxyz", wxyz_string);
        if (status != tinyxml2::XML_NO_ATTRIBUTE && status != tinyxml2::XML_SUCCESS)
        {
          CONSOLE_BRIDGE_logError("Invalid tcp attribute 'wxyz'");
          continue;
        }

        if (status != tinyxml2::XML_NO_ATTRIBUTE)
        {
          std::vector<std::string> tokens;
          boost::split(tokens, wxyz_string, boost::is_any_of(" "), boost::token_compress_on);
          if (tokens.size() != 4 || !tesseract_common::isNumeric(tokens))
          {
            CONSOLE_BRIDGE_logError("Error parsing tcp attribute 'wxyz'");
            continue;
          }

          double qw, qx, qy, qz;
          // No need to check return values because the tokens are verified above
          tesseract_common::toNumeric<double>(tokens[0], qw);
          tesseract_common::toNumeric<double>(tokens[1], qx);
          tesseract_common::toNumeric<double>(tokens[2], qy);
          tesseract_common::toNumeric<double>(tokens[3], qz);

          Eigen::Quaterniond q(qw, qx, qy, qz);
          q.normalize();

          tcp.linear() = q.toRotationMatrix();
        }
      }

      group_tcp->second[tcp_name_string] = tcp;
    }
  }

  return group_tcps;
}

}  // namespace tesseract_scene_graph

#endif  // TESSERACT_SCENE_GRAPH_SRDF_TOOL_CENTER_POINTS_H
