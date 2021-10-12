#ifndef DESCARTES_IKFAST_UR10E_H
#define DESCARTES_IKFAST_UR10E_H

#include <descartes_ikfast/ikfast_kinematics.h>
#include <descartes_ikfast/impl/ikfast_kinematics.hpp>

namespace ur_ikfast_kinematics
{
template <typename FloatType>
class UR10eKinematics : public descartes_light::IKFastKinematics<FloatType>
{
public:
  UR10eKinematics(const Eigen::Transform<FloatType, 3, Eigen::Isometry>& world_to_robot_base,
                  const Eigen::Transform<FloatType, 3, Eigen::Isometry>& tool0_to_tip,
                  const descartes_light::IsValidFn<FloatType>& is_valid_fn,
                  const descartes_light::GetRedundantSolutionsFn<FloatType>& redundant_sol_fn)
    : descartes_light::IKFastKinematics<FloatType>(world_to_robot_base, tool0_to_tip, is_valid_fn, redundant_sol_fn)
  {
  }
};

using UR10eKinematicsD = UR10eKinematics<double>;
using UR10eKinematicsF = UR10eKinematics<float>;

//}  // namespace ur_ikfast_kinematics
//#endif // DESCARTES_IKFAST_UR10E_H

template <typename FloatType>
class Fanucr2000icKinematics : public descartes_light::IKFastKinematics<FloatType>
{
public:
  Fanucr2000icKinematics(const Eigen::Transform<FloatType, 3, Eigen::Isometry>& world_to_robot_base,
                  const Eigen::Transform<FloatType, 3, Eigen::Isometry>& tool0_to_tip,
                  const descartes_light::IsValidFn<FloatType>& is_valid_fn,
                  const descartes_light::GetRedundantSolutionsFn<FloatType>& redundant_sol_fn)
    : descartes_light::IKFastKinematics<FloatType>(world_to_robot_base, tool0_to_tip, is_valid_fn, redundant_sol_fn)
  {
  }
};

using Fanucr2000icKinematicsD = Fanucr2000icKinematics<double>;
using Fanucr2000icKinematicsF = Fanucr2000icKinematics<float>;


//m20ia
template <typename FloatType>
class Fanucm20iaKinematics : public descartes_light::IKFastKinematics<FloatType>
{
public:
  Fanucm20iaKinematics(const Eigen::Transform<FloatType, 3, Eigen::Isometry>& world_to_robot_base,
                  const Eigen::Transform<FloatType, 3, Eigen::Isometry>& tool0_to_tip,
                  const descartes_light::IsValidFn<FloatType>& is_valid_fn,
                  const descartes_light::GetRedundantSolutionsFn<FloatType>& redundant_sol_fn)
    : descartes_light::IKFastKinematics<FloatType>(world_to_robot_base, tool0_to_tip, is_valid_fn, redundant_sol_fn)
  {
  }
};

using Fanucm20iaKinematicsD = Fanucm20iaKinematics<double>;
using Fanucm20iaKinematicsF = Fanucm20iaKinematics<float>;

//abb6700
template <typename FloatType>
class Irb6700_200_260Kinematics : public descartes_light::IKFastKinematics<FloatType>
{
public:
  Irb6700_200_260Kinematics(const Eigen::Transform<FloatType, 3, Eigen::Isometry>& world_to_robot_base,
                  const Eigen::Transform<FloatType, 3, Eigen::Isometry>& tool0_to_tip,
                  const descartes_light::IsValidFn<FloatType>& is_valid_fn,
                  const descartes_light::GetRedundantSolutionsFn<FloatType>& redundant_sol_fn)
    : descartes_light::IKFastKinematics<FloatType>(world_to_robot_base, tool0_to_tip, is_valid_fn, redundant_sol_fn)
  {
  }
};

using Irb6700_200_260KinematicsD = Irb6700_200_260Kinematics<double>;
using Irb6700_200_260KinematicsF = Irb6700_200_260Kinematics<float>;

}  // namespace ur_ikfast_kinematics
#endif // DESCARTES_IKFAST_UR10E_H

