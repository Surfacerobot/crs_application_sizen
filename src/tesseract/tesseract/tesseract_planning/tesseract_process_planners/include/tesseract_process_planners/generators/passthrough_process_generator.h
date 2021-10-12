/**
 * @file passthrough_process_generator.h
 * @brief generator for processing strokes that pass through each of a
 * list of supplied points
 *
 * @author Levi Armstrong
 * @version TODO
 * @bug No known bugs
 *
 * @copyright Copyright (c) 2020, Southwest Research Institute
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

#ifndef TESSERACT_PLANNING_PASSTHROUGH_PROCESS_GENERATOR_H
#define TESSERACT_PLANNING_PASSTHROUGH_PROCESS_GENERATOR_H

#include <tesseract_process_planners/process_definition.h>

namespace tesseract_process_planners
{
class PassthroughProcessGenerator : public ProcessStepGenerator
{
public:
  PassthroughProcessGenerator() = default;
  ~PassthroughProcessGenerator() override = default;
  PassthroughProcessGenerator(const PassthroughProcessGenerator&) = default;
  PassthroughProcessGenerator& operator=(const PassthroughProcessGenerator&) = default;
  PassthroughProcessGenerator(PassthroughProcessGenerator&&) = default;
  PassthroughProcessGenerator& operator=(PassthroughProcessGenerator&&) = default;

  std::vector<tesseract_motion_planners::Waypoint::Ptr>
  generate(const std::vector<tesseract_motion_planners::Waypoint::Ptr>& waypoints,
           const ProcessDefinitionConfig& config) const override
  {
    std::vector<tesseract_motion_planners::Waypoint::Ptr> new_waypoints;
    new_waypoints.reserve(waypoints.size());
    for (const auto& waypoint : waypoints)
    {
      assert(waypoint->getType() == tesseract_motion_planners::WaypointType::CARTESIAN_WAYPOINT);
      const tesseract_motion_planners::CartesianWaypoint::Ptr& cur_waypoint =
          std::static_pointer_cast<tesseract_motion_planners::CartesianWaypoint>(waypoint);
      tesseract_motion_planners::CartesianWaypoint::Ptr new_waypoint =
          std::make_shared<tesseract_motion_planners::CartesianWaypoint>(
              config.world_offset_direction * cur_waypoint->getTransform() * config.local_offset_direction,
              cur_waypoint->getParentLinkName());
      new_waypoint->setCoefficients(cur_waypoint->getCoefficients());
      new_waypoint->setIsCritical(cur_waypoint->isCritical());
      new_waypoints.push_back(new_waypoint);
    }
    return new_waypoints;
  }
};

}  // namespace tesseract_process_planners
#endif  // TESSERACT_PLANNING_PASSTHROUGH_PROCESS_GENERATOR_H
