/**
 * @file ifopt_utils.h
 * @brief Contains utilities for converting IFOPT types to other types
 *
 * @author Matthew Powelson
 * @date May 18, 2020
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
#ifndef TRAJOPT_IFOPT_IFOPT_UTILS_H
#define TRAJOPT_IFOPT_IFOPT_UTILS_H

#include <trajopt_utils/macros.h>
TRAJOPT_IGNORE_WARNINGS_PUSH
#include <Eigen/Eigen>
#include <ifopt/cost_term.h>
TRAJOPT_IGNORE_WARNINGS_POP

namespace trajopt
{
/**
 * @brief Converts a MatrixX2d (e.g. from forward_kinematics->getLimits()) to a vector of ifopt Boounds
 * @param limits MatrixX2d of bounds. Column 0 will be lower bound. Column 1 will be upper bound
 * @return Vector of ifopt::Bounds
 */
inline std::vector<ifopt::Bounds> toBounds(const Eigen::Ref<Eigen::MatrixX2d>& limits)
{
  std::vector<ifopt::Bounds> bounds;
  for (Eigen::Index i = 0; i < limits.rows(); i++)
    bounds.emplace_back(limits(i, 0), limits(i, 1));
  return bounds;
}

/**
 * @brief Interpolates between two Eigen::VectorXds
 * @param start Start vector. This will be the first vector in the results
 * @param end End vector. This will be the last vector in the results
 * @param steps Length of the returned vector
 * @return A vector of Eigen vectors interpolated from start to end
 */
inline std::vector<Eigen::VectorXd> interpolate(const Eigen::Ref<Eigen::VectorXd>& start,
                                                const Eigen::Ref<Eigen::VectorXd>& end,
                                                Eigen::Index steps)
{
  assert(start.size() == end.size());
  Eigen::VectorXd delta = (end - start) / static_cast<double>(steps - 1);
  Eigen::VectorXd running = start;
  std::vector<Eigen::VectorXd> results;
  for (Eigen::Index i = 0; i < steps; i++)
  {
    results.push_back(running);
    running += delta;
  }
  return results;
}

/**
 * @brief Gets the closes vector to the input given the bounds
 * @param input Input vector
 * @param bounds Bounds on that vector
 * @return Output vector. If input is outside a bound, force it to the boundary
 */
inline Eigen::VectorXd getClosestValidPoint(const Eigen::Ref<Eigen::VectorXd>& input, std::vector<ifopt::Bounds> bounds)
{
  // Convert Bounds to VectorXds
  Eigen::VectorXd bound_lower(static_cast<Eigen::Index>(bounds.size()));
  Eigen::VectorXd bound_upper(static_cast<Eigen::Index>(bounds.size()));
  for (std::size_t i = 0; i < bounds.size(); i++)
  {
    bound_lower[static_cast<Eigen::Index>(i)] = bounds[i].lower_;
    bound_upper[static_cast<Eigen::Index>(i)] = bounds[i].upper_;
  }

  // If input is outside a bound, force it to the boundary
  Eigen::VectorXd valid_point(static_cast<Eigen::Index>(bounds.size()));
  valid_point = input.cwiseMax(bound_lower);
  valid_point = valid_point.cwiseMin(bound_upper);
  return valid_point;
}

}  // namespace trajopt
#endif
