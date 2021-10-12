/**
 * @file axial_approach_generator.h
 * @brief generator for an approach along the tool z direction
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

#ifndef TESSERACT_PLANNING_AXIAL_APPROACH_GENERATOR_H
#define TESSERACT_PLANNING_AXIAL_APPROACH_GENERATOR_H

#include <tesseract_process_planners/process_definition.h>
#include <Eigen/Core>

namespace tesseract_process_planners
{
class AxialApproachGenerator : public ProcessStepGenerator
{
public:
  AxialApproachGenerator(const Eigen::Isometry3d& approach, int step_count)
    : approach_(approach), step_count_(step_count)
  {
  }
  ~AxialApproachGenerator() override = default;
  AxialApproachGenerator(const AxialApproachGenerator&) = default;
  AxialApproachGenerator& operator=(const AxialApproachGenerator&) = default;
  AxialApproachGenerator(AxialApproachGenerator&&) = default;
  AxialApproachGenerator& operator=(AxialApproachGenerator&&) = default;

  std::vector<tesseract_motion_planners::Waypoint::Ptr>
  generate(const std::vector<tesseract_motion_planners::Waypoint::Ptr>& waypoints,
           const ProcessDefinitionConfig& config) const override
  {
    assert(waypoints.front()->getType() == tesseract_motion_planners::WaypointType::CARTESIAN_WAYPOINT);

    std::vector<tesseract_motion_planners::Waypoint::Ptr> approach;
    approach.reserve(static_cast<size_t>(step_count_) + 1);

    const tesseract_motion_planners::CartesianWaypoint::Ptr& cur_waypoint =
        std::static_pointer_cast<tesseract_motion_planners::CartesianWaypoint>(waypoints.front());
    for (int i = step_count_; i-- > 0;)
    {
      Eigen::Isometry3d scaled = approach_;

      // Interpolate the transform
      const double progress = static_cast<double>(i + 1) / static_cast<double>(step_count_);
      scaled.translation() = progress * approach_.translation();
      scaled.linear() = Eigen::Quaterniond(1.0, 0.0, 0.0, 0.0)
                            .slerp(progress, Eigen::Quaterniond(approach_.rotation()))
                            .toRotationMatrix();

      tesseract_motion_planners::CartesianWaypoint::Ptr new_waypoint =
          std::make_shared<tesseract_motion_planners::CartesianWaypoint>(
              config.world_offset_direction * cur_waypoint->getTransform() * config.local_offset_direction * scaled,
              cur_waypoint->getParentLinkName());
      new_waypoint->setCoefficients(cur_waypoint->getCoefficients());
      new_waypoint->setIsCritical(cur_waypoint->isCritical());
      approach.push_back(new_waypoint);
    }

    return approach;
  }

private:
  Eigen::Isometry3d approach_;
  int step_count_;
};
}  // namespace tesseract_process_planners

#endif  // TESSERACT_PLANNING_AXIAL_APPROACH_GENERATOR_H
