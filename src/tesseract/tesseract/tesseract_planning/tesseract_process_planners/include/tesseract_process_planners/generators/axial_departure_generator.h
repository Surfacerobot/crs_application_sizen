/**
 * @file axial_departure_generator.h
 * @brief generator for a departure along the tool z direction
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

#ifndef TESSERACT_PLANNING_AXIAL_DEPARTURE_GENERATOR_H
#define TESSERACT_PLANNING_AXIAL_DEPARTURE_GENERATOR_H

#include <tesseract_process_planners/process_definition.h>
#include <Eigen/Core>

namespace tesseract_process_planners
{
class AxialDepartureGenerator : public ProcessStepGenerator
{
public:
  AxialDepartureGenerator(const Eigen::Isometry3d& departure, int step_count)
    : departure_(departure), step_count_(step_count)
  {
  }
  ~AxialDepartureGenerator() override = default;
  AxialDepartureGenerator(const AxialDepartureGenerator&) = default;
  AxialDepartureGenerator& operator=(const AxialDepartureGenerator&) = default;
  AxialDepartureGenerator(AxialDepartureGenerator&&) = default;
  AxialDepartureGenerator& operator=(AxialDepartureGenerator&&) = default;

  std::vector<tesseract_motion_planners::Waypoint::Ptr>
  generate(const std::vector<tesseract_motion_planners::Waypoint::Ptr>& waypoints,
           const ProcessDefinitionConfig& config) const override
  {
    assert(waypoints.back()->getType() == tesseract_motion_planners::WaypointType::CARTESIAN_WAYPOINT);

    std::vector<tesseract_motion_planners::Waypoint::Ptr> departure;
    departure.reserve(static_cast<size_t>(step_count_) + 1);

    const tesseract_motion_planners::CartesianWaypoint::Ptr& cur_waypoint =
        std::static_pointer_cast<tesseract_motion_planners::CartesianWaypoint>(waypoints.back());
    for (int i = 0; i < step_count_; i++)
    {
      Eigen::Isometry3d scaled = departure_;

      // Interpolate the transform
      double progress = static_cast<double>(i + 1) / static_cast<double>(step_count_);
      scaled.translation() = progress * departure_.translation();
      scaled.linear() = Eigen::Quaterniond(1.0, 0.0, 0.0, 0.0)
                            .slerp(progress, Eigen::Quaterniond(departure_.rotation()))
                            .toRotationMatrix();

      tesseract_motion_planners::CartesianWaypoint::Ptr new_waypoint =
          std::make_shared<tesseract_motion_planners::CartesianWaypoint>(
              config.world_offset_direction * cur_waypoint->getTransform() * config.local_offset_direction * scaled,
              cur_waypoint->getParentLinkName());
      new_waypoint->setCoefficients(cur_waypoint->getCoefficients());
      new_waypoint->setIsCritical(cur_waypoint->isCritical());
      departure.push_back(new_waypoint);
    }
    return departure;
  }

private:
  Eigen::Isometry3d departure_;
  int step_count_;
};

}  // namespace tesseract_process_planners

#endif  // TESSERACT_PLANNING_AXIAL_DEPARTURE_GENERATOR_H
