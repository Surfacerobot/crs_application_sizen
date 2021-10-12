/*
 * Software License Agreement (Apache License)
 *
 * Copyright (c) 2016, Southwest Research Institute
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include <descartes_ikfast/impl/ikfast_kinematics.hpp>
//#include "ur10e_ikfast_solver.cpp"  // generated from ikfast for this robot
#include <ur_ikfast_kinematics/descartes_ikfast_ur10e.h>
#include "fanuc_r2000ic_r2000ic_manipulator_ikfast_solver.cpp"

namespace ur_ikfast_kinematics
{
// Explicit template instantiation
//template class UR10eKinematics<float>;
//template class UR10eKinematics<double>;

template class Fanucr2000icKinematics<float>;
template class Fanucr2000icKinematics<double>;


}  // namespace ur_ikfast_kinematics

