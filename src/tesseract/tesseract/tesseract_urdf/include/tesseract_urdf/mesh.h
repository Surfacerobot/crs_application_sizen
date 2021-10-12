/**
 * @file mesh.h
 * @brief Parse mesh from xml string
 *
 * @author Levi Armstrong
 * @date September 1, 2019
 * @version TODO
 * @bug No known bugs
 *
 * @copyright Copyright (c) 2019, Southwest Research Institute
 *
 * @par License
 * Software License Agreement (Apache License)
 * @par
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * http://www.apache.org/licenses/LICENSE-2.0
 * @par
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef TESSERACT_URDF_MESH_H
#define TESSERACT_URDF_MESH_H

#include <tesseract_common/macros.h>
TESSERACT_COMMON_IGNORE_WARNINGS_PUSH
#include <tesseract_common/status_code.h>
#include <tesseract_common/utils.h>
#include <Eigen/Geometry>
#include <tinyxml2.h>
#include <boost/algorithm/string/classification.hpp>
#include <boost/algorithm/string/split.hpp>
TESSERACT_COMMON_IGNORE_WARNINGS_POP

#include <tesseract_geometry/impl/mesh.h>
#include <tesseract_scene_graph/utils.h>
#include <tesseract_scene_graph/resource_locator.h>
#include <tesseract_geometry/mesh_parser.h>

namespace tesseract_urdf
{
class MeshStatusCategory : public tesseract_common::StatusCategory
{
public:
  MeshStatusCategory() : name_("MeshStatusCategory") {}
  const std::string& name() const noexcept override { return name_; }
  std::string message(int code) const override
  {
    switch (code)
    {
      case Success:
        return "Sucessfully parsed mesh element";
      case ErrorAttributeFileName:
        return "Missing or failed parsing mesh attribute 'filename'!";
      case ErrorParsingAttributeScale:
        return "Failed parsing mesh attribute 'scale'!";
      case ErrorImportingMeshes:
        return "Error importing meshes from filename!";
      default:
        return "Invalid error code for " + name_ + "!";
    }
  }

  enum
  {
    Success = 0,
    ErrorAttributeFileName = -1,
    ErrorParsingAttributeScale = -2,
    ErrorImportingMeshes = -3
  };

private:
  std::string name_;
};

inline tesseract_common::StatusCode::Ptr parse(std::vector<tesseract_geometry::Mesh::Ptr>& meshes,
                                               const tinyxml2::XMLElement* xml_element,
                                               const tesseract_scene_graph::ResourceLocator::Ptr& locator,
                                               const bool visual,
                                               const int /*version*/)
{
  meshes.clear();
  auto status_cat = std::make_shared<MeshStatusCategory>();

  std::string filename;
  if (tesseract_common::QueryStringAttribute(xml_element, "filename", filename) != tinyxml2::XML_SUCCESS)
    return std::make_shared<tesseract_common::StatusCode>(MeshStatusCategory::ErrorAttributeFileName, status_cat);

  std::string scale_string;
  Eigen::Vector3d scale(1, 1, 1);
  if (tesseract_common::QueryStringAttribute(xml_element, "scale", scale_string) == tinyxml2::XML_SUCCESS)
  {
    std::vector<std::string> tokens;
    boost::split(tokens, scale_string, boost::is_any_of(" "), boost::token_compress_on);
    if (tokens.size() != 3 || !tesseract_common::isNumeric(tokens))
      return std::make_shared<tesseract_common::StatusCode>(MeshStatusCategory::ErrorParsingAttributeScale, status_cat);

    double sx, sy, sz;
    // No need to check return values because the tokens are verified above
    tesseract_common::toNumeric<double>(tokens[0], sx);
    tesseract_common::toNumeric<double>(tokens[1], sy);
    tesseract_common::toNumeric<double>(tokens[2], sz);

    scale = Eigen::Vector3d(sx, sy, sz);
  }

  if (visual)
    meshes = tesseract_geometry::createMeshFromResource<tesseract_geometry::Mesh>(
        locator->locateResource(filename), scale, true, true);
  else
    meshes = tesseract_geometry::createMeshFromResource<tesseract_geometry::Mesh>(
        locator->locateResource(filename), scale, true, false);

  if (meshes.empty())
    return std::make_shared<tesseract_common::StatusCode>(MeshStatusCategory::ErrorImportingMeshes, status_cat);

  return std::make_shared<tesseract_common::StatusCode>(MeshStatusCategory::Success, status_cat);
  ;
}

}  // namespace tesseract_urdf

#endif  // TESSERACT_URDF_MESH_H
