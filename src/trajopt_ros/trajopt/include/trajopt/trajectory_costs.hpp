#pragma once

/**
Simple quadratic costs on trajectory
*/

#include <trajopt/common.hpp>
#include <trajopt_sco/modeling.hpp>
#include <trajopt_utils/macros.h>

namespace trajopt
{
class TRAJOPT_API JointPosEqCost : public sco::Cost
{
public:
  /** @brief Forms error in QuadExpr - independent of penalty type */
  JointPosEqCost(VarArray vars,
                 const Eigen::Ref<const Eigen::VectorXd>& coeffs,
                 const Eigen::Ref<const Eigen::VectorXd>& targets,
                 int first_step,
                 int last_step);
  /** @brief Convexifies cost expression - In this case, it is already quadratic so there's nothing to do */
  sco::ConvexObjective::Ptr convex(const DblVec& x, sco::Model* model) override;
  /** @brief Numerically evaluate cost given the vector of values */
  double value(const DblVec&) override;
  sco::VarVector getVars() override { return vars_.flatten(); }

private:
  /** @brief The variables being optimized. Used to properly index the vector being optimized */
  VarArray vars_;
  /** @brief The coefficients used to weight the cost */
  Eigen::VectorXd coeffs_;
  /** @brief Stores the cost as an expression */
  sco::QuadExpr expr_;
  /** @brief Vector of velocity targets */
  Eigen::VectorXd targets_;
  /** @brief First time step to which the term is applied */
  int first_step_;
  /** @brief Last time step to which the term is applied */
  int last_step_;
};

/**
 * @brief The JointVelIneqCost class
 * Assumes that the target is ...
 */
class TRAJOPT_API JointPosIneqCost : public sco::Cost
{
public:
  /** @brief Forms error in QuadExpr - independent of penalty type */
  JointPosIneqCost(VarArray vars,
                   const Eigen::Ref<const Eigen::VectorXd>& coeffs,
                   const Eigen::Ref<const Eigen::VectorXd>& targets,
                   const Eigen::Ref<const Eigen::VectorXd>& upper_limits,
                   const Eigen::Ref<const Eigen::VectorXd>& lower_limits,
                   int first_step,
                   int last_step);
  /** @brief Convexifies cost expression - In this case, it is already quadratic so there's nothing to do */
  sco::ConvexObjective::Ptr convex(const DblVec& x, sco::Model* model) override;
  /** @brief Numerically evaluate cost given the vector of values */
  double value(const DblVec&) override;
  sco::VarVector getVars() override { return vars_.flatten(); }

private:
  /** @brief The variables being optimized. Used to properly index the vector being optimized */
  VarArray vars_;
  /** @brief The coefficients used to weight the cost */
  Eigen::VectorXd coeffs_;
  /** @brief Vector of upper tolerances */
  Eigen::VectorXd upper_tols_;
  /** @brief Vector of lower tolerances */
  Eigen::VectorXd lower_tols_;
  /** @brief Vector of velocity targets */
  Eigen::VectorXd targets_;
  /** @brief First time step to which the term is applied */
  int first_step_;
  /** @brief Last time step to which the term is applied */
  int last_step_;
  /** @brief Stores the costs as an expression. Will be length num_jnts*num_timesteps*2 */
  std::vector<sco::AffExpr> expr_vec_;
};

class TRAJOPT_API JointPosEqConstraint : public sco::EqConstraint
{
public:
  /** @brief Forms error in QuadExpr - independent of penalty type */
  JointPosEqConstraint(VarArray vars,
                       const Eigen::Ref<const Eigen::VectorXd>& coeffs,
                       const Eigen::Ref<const Eigen::VectorXd>& targets,
                       int first_step,
                       int last_step);
  /** @brief Convexifies cost expression - In this case, it is already quadratic so there's nothing to do */
  sco::ConvexConstraints::Ptr convex(const DblVec& x, sco::Model* model) override;
  /** @brief Numerically evaluate cost given the vector of values */
  DblVec value(const DblVec&) override;

  sco::VarVector getVars() override { return vars_.flatten(); }

private:
  /** @brief The variables being optimized. Used to properly index the vector being optimized */
  VarArray vars_;
  /** @brief The coefficients used to weight the cost */
  Eigen::VectorXd coeffs_;
  /** @brief Stores the costs as an expression. Will be length num_jnts*num_timesteps */
  std::vector<sco::AffExpr> expr_vec_;
  /** @brief Vector of velocity targets */
  Eigen::VectorXd targets_;
  /** @brief First time step to which the term is applied */
  int first_step_;
  /** @brief Last time step to which the term is applied */
  int last_step_;
};

class TRAJOPT_API JointPosIneqConstraint : public sco::IneqConstraint
{
public:
  /** @brief Forms error in QuadExpr - independent of penalty type */
  JointPosIneqConstraint(VarArray vars,
                         const Eigen::Ref<const Eigen::VectorXd>& coeffs,
                         const Eigen::Ref<const Eigen::VectorXd>& targets,
                         const Eigen::Ref<const Eigen::VectorXd>& upper_limits,
                         const Eigen::Ref<const Eigen::VectorXd>& lower_limits,
                         int first_step,
                         int last_step);
  /** @brief Convexifies cost expression - In this case, it is already quadratic so there's nothing to do */
  sco::ConvexConstraints::Ptr convex(const DblVec& x, sco::Model* model) override;
  /** @brief Numerically evaluate cost given the vector of values */
  DblVec value(const DblVec&) override;
  sco::VarVector getVars() override { return vars_.flatten(); }

private:
  /** @brief The variables being optimized. Used to properly index the vector being optimized */
  VarArray vars_;
  /** @brief The coefficients used to weight the cost */
  Eigen::VectorXd coeffs_;
  /** @brief Vector of upper tolerances */
  Eigen::VectorXd upper_tols_;
  /** @brief Vector of lower tolerances */
  Eigen::VectorXd lower_tols_;
  /** @brief Vector of targets */
  Eigen::VectorXd targets_;
  /** @brief First time step to which the term is applied */
  int first_step_;
  /** @brief Last time step to which the term is applied */
  int last_step_;
  /** @brief Stores the costs as an expression. Will be length num_jnts*num_timesteps*2 */
  std::vector<sco::AffExpr> expr_vec_;
};

class TRAJOPT_API JointVelEqCost : public sco::Cost
{
public:
  /** @brief Forms error in QuadExpr - independent of penalty type */
  JointVelEqCost(VarArray vars,
                 const Eigen::Ref<const Eigen::VectorXd>& coeffs,
                 const Eigen::Ref<const Eigen::VectorXd>& targets,
                 int first_step,
                 int last_step);
  /** @brief Convexifies cost expression - In this case, it is already quadratic so there's nothing to do */
  sco::ConvexObjective::Ptr convex(const DblVec& x, sco::Model* model) override;
  /** @brief Numerically evaluate cost given the vector of values using Eigen*/
  double value(const DblVec&) override;
  sco::VarVector getVars() override { return vars_.flatten(); }

private:
  /** @brief The variables being optimized. Used to properly index the vector being optimized */
  VarArray vars_;
  /** @brief The coefficients used to weight the cost */
  Eigen::VectorXd coeffs_;
  /** @brief Stores the cost as an expression */
  sco::QuadExpr expr_;
  /** @brief Vector of velocity targets */
  Eigen::VectorXd targets_;
  /** @brief First time step to which the term is applied */
  int first_step_;
  /** @brief Last time step to which the term is applied */
  int last_step_;
};

class TRAJOPT_API JointVelIneqCost : public sco::Cost
{
public:
  /** @brief Forms error in QuadExpr - independent of penalty type */
  JointVelIneqCost(VarArray vars,
                   const Eigen::Ref<const Eigen::VectorXd>& coeffs,
                   const Eigen::Ref<const Eigen::VectorXd>& targets,
                   const Eigen::Ref<const Eigen::VectorXd>& upper_limits,
                   const Eigen::Ref<const Eigen::VectorXd>& lower_limits,
                   int first_step,
                   int last_step);
  /** @brief Convexifies cost expression - In this case, it is already quadratic so there's nothing to do */
  sco::ConvexObjective::Ptr convex(const DblVec& x, sco::Model* model) override;
  /** @brief Numerically evaluate cost given the vector of values */
  double value(const DblVec&) override;
  sco::VarVector getVars() override { return vars_.flatten(); }

private:
  /** @brief The variables being optimized. Used to properly index the vector being optimized */
  VarArray vars_;
  /** @brief The coefficients used to weight the cost */
  Eigen::VectorXd coeffs_;
  /** @brief Vector of upper tolerances */
  Eigen::VectorXd upper_tols_;
  /** @brief Vector of lower tolerances */
  Eigen::VectorXd lower_tols_;
  /** @brief Vector of velocity targets */
  Eigen::VectorXd targets_;
  /** @brief First time step to which the term is applied */
  int first_step_;
  /** @brief Last time step to which the term is applied */
  int last_step_;
  /** @brief Stores the costs as an expression. Will be length num_jnts*num_timesteps*2 */
  std::vector<sco::AffExpr> expr_vec_;
};

class TRAJOPT_API JointVelEqConstraint : public sco::EqConstraint
{
public:
  /** @brief Forms error in QuadExpr - independent of penalty type */
  JointVelEqConstraint(VarArray vars,
                       const Eigen::Ref<const Eigen::VectorXd>& coeffs,
                       const Eigen::Ref<const Eigen::VectorXd>& targets,
                       int first_step,
                       int last_step);
  /** @brief Convexifies cost expression - In this case, it is already quadratic so there's nothing to do */
  sco::ConvexConstraints::Ptr convex(const DblVec& x, sco::Model* model) override;
  /** @brief Numerically evaluate cost given the vector of values */
  DblVec value(const DblVec&) override;

  sco::VarVector getVars() override { return vars_.flatten(); }

private:
  /** @brief The variables being optimized. Used to properly index the vector being optimized */
  VarArray vars_;
  /** @brief The coefficients used to weight the cost */
  Eigen::VectorXd coeffs_;
  /** @brief Stores the costs as an expression. Will be length num_jnts*(num_timesteps-1) */
  std::vector<sco::AffExpr> expr_vec_;
  /** @brief Vector of velocity targets */
  Eigen::VectorXd targets_;
  /** @brief First time step to which the term is applied */
  int first_step_;
  /** @brief Last time step to which the term is applied */
  int last_step_;
};

class TRAJOPT_API JointVelIneqConstraint : public sco::IneqConstraint
{
public:
  /** @brief Forms error in QuadExpr - independent of penalty type */
  JointVelIneqConstraint(VarArray vars,
                         const Eigen::Ref<const Eigen::VectorXd>& coeffs,
                         const Eigen::Ref<const Eigen::VectorXd>& targets,
                         const Eigen::Ref<const Eigen::VectorXd>& upper_limits,
                         const Eigen::Ref<const Eigen::VectorXd>& lower_limits,
                         int first_step,
                         int last_step);
  /** @brief Convexifies cost expression - In this case, it is already quadratic so there's nothing to do */
  sco::ConvexConstraints::Ptr convex(const DblVec& x, sco::Model* model) override;
  /** @brief Numerically evaluate cost given the vector of values */
  DblVec value(const DblVec&) override;
  sco::VarVector getVars() override { return vars_.flatten(); }

private:
  /** @brief The variables being optimized. Used to properly index the vector being optimized */
  VarArray vars_;
  /** @brief The coefficients used to weight the cost */
  Eigen::VectorXd coeffs_;
  /** @brief Vector of upper tolerances */
  Eigen::VectorXd upper_tols_;
  /** @brief Vector of lower tolerances */
  Eigen::VectorXd lower_tols_;
  /** @brief Vector of velocity targets */
  Eigen::VectorXd targets_;
  /** @brief First time step to which the term is applied */
  int first_step_;
  /** @brief Last time step to which the term is applied */
  int last_step_;
  /** @brief Stores the costs as an expression. Will be length num_jnts*(num_timesteps-1)*2 */
  std::vector<sco::AffExpr> expr_vec_;
};

class TRAJOPT_API JointAccEqCost : public sco::Cost
{
public:
  /** @brief Forms error in QuadExpr - independent of penalty type */
  JointAccEqCost(VarArray vars,
                 const Eigen::Ref<const Eigen::VectorXd>& coeffs,
                 const Eigen::Ref<const Eigen::VectorXd>& targets,
                 int first_step,
                 int last_step);
  /** @brief Convexifies cost expression - In this case, it is already quadratic so there's nothing to do */
  sco::ConvexObjective::Ptr convex(const DblVec& x, sco::Model* model) override;
  /** @brief Numerically evaluate cost given the vector of values */
  double value(const DblVec&) override;
  sco::VarVector getVars() override { return vars_.flatten(); }

private:
  /** @brief The variables being optimized. Used to properly index the vector being optimized */
  VarArray vars_;
  /** @brief The coefficients used to weight the cost */
  Eigen::VectorXd coeffs_;
  /** @brief Stores the cost as an expression */
  sco::QuadExpr expr_;
  /** @brief Vector of velocity targets */
  Eigen::VectorXd targets_;
  /** @brief First time step to which the term is applied */
  int first_step_;
  /** @brief Last time step to which the term is applied */
  int last_step_;
};

class TRAJOPT_API JointAccIneqCost : public sco::Cost
{
public:
  /** @brief Forms error in a vector of AffExpr - independent of penalty type */
  JointAccIneqCost(VarArray vars,
                   const Eigen::Ref<const Eigen::VectorXd>& coeffs,
                   const Eigen::Ref<const Eigen::VectorXd>& targets,
                   const Eigen::Ref<const Eigen::VectorXd>& upper_limits,
                   const Eigen::Ref<const Eigen::VectorXd>& lower_limits,
                   int first_step,
                   int last_step);
  /** @brief Convexifies cost expression - In this case, it is already quadratic so there's nothing to do */
  sco::ConvexObjective::Ptr convex(const DblVec& x, sco::Model* model) override;
  /** @brief Numerically evaluate cost given the vector of values */
  double value(const DblVec&) override;
  sco::VarVector getVars() override { return vars_.flatten(); }

private:
  /** @brief The variables being optimized. Used to properly index the vector being optimized */
  VarArray vars_;
  /** @brief The coefficients used to weight the cost */
  Eigen::VectorXd coeffs_;
  /** @brief Vector of upper tolerances */
  Eigen::VectorXd upper_tols_;
  /** @brief Vector of lower tolerances */
  Eigen::VectorXd lower_tols_;
  /** @brief Vector of acceleration targets */
  Eigen::VectorXd targets_;
  /** @brief First time step to which the term is applied */
  int first_step_;
  /** @brief Last time step to which the term is applied */
  int last_step_;
  /** @brief Stores the costs as an expression. Will be length num_jnts*(num_timesteps-2)*2 */
  std::vector<sco::AffExpr> expr_vec_;
};

class TRAJOPT_API JointAccEqConstraint : public sco::EqConstraint
{
public:
  /** @brief Forms error in a vector of AffExpr - independent of penalty type */
  JointAccEqConstraint(VarArray vars,
                       const Eigen::Ref<const Eigen::VectorXd>& coeffs,
                       const Eigen::Ref<const Eigen::VectorXd>& targets,
                       int first_step,
                       int last_step);
  /** @brief Convexifies cost expression - In this case, it is already quadratic so there's nothing to do */
  sco::ConvexConstraints::Ptr convex(const DblVec& x, sco::Model* model) override;
  /** @brief Numerically evaluate cost given the vector of values */
  DblVec value(const DblVec&) override;

  sco::VarVector getVars() override { return vars_.flatten(); }

private:
  /** @brief The variables being optimized. Used to properly index the vector being optimized */
  VarArray vars_;
  /** @brief The coefficients used to weight the cost */
  Eigen::VectorXd coeffs_;
  /** @brief Stores the costs as an expression. Will be length num_jnts*(num_timesteps-2) */
  std::vector<sco::AffExpr> expr_vec_;
  /** @brief Vector of acceleration targets */
  Eigen::VectorXd targets_;
  /** @brief First time step to which the term is applied */
  int first_step_;
  /** @brief Last time step to which the term is applied */
  int last_step_;
};

class TRAJOPT_API JointAccIneqConstraint : public sco::IneqConstraint
{
public:
  /** @brief Forms error in a vector of AffExpr - independent of penalty type */
  JointAccIneqConstraint(VarArray vars,
                         const Eigen::Ref<const Eigen::VectorXd>& coeffs,
                         const Eigen::Ref<const Eigen::VectorXd>& targets,
                         const Eigen::Ref<const Eigen::VectorXd>& upper_limits,
                         const Eigen::Ref<const Eigen::VectorXd>& lower_limits,
                         int first_step,
                         int last_step);
  /** @brief Convexifies cost expression - In this case, it is already quadratic so there's nothing to do */
  sco::ConvexConstraints::Ptr convex(const DblVec& x, sco::Model* model) override;
  /** @brief Numerically evaluate cost given the vector of values */
  DblVec value(const DblVec&) override;
  sco::VarVector getVars() override { return vars_.flatten(); }

private:
  /** @brief The variables being optimized. Used to properly index the vector being optimized */
  VarArray vars_;
  /** @brief The coefficients used to weight the cost */
  Eigen::VectorXd coeffs_;
  /** @brief Vector of upper tolerances */
  Eigen::VectorXd upper_tols_;
  /** @brief Vector of lower tolerances */
  Eigen::VectorXd lower_tols_;
  /** @brief Vector of acceleration targets */
  Eigen::VectorXd targets_;
  /** @brief First time step to which the term is applied */
  int first_step_;
  /** @brief Last time step to which the term is applied */
  int last_step_;
  /** @brief Stores the costs as an expression. Will be length num_jnts*(num_timesteps-2)*2 */
  std::vector<sco::AffExpr> expr_vec_;
};

class TRAJOPT_API JointJerkEqCost : public sco::Cost
{
public:
  /** @brief Forms error in QuadExpr - independent of penalty type */
  JointJerkEqCost(VarArray vars,
                  const Eigen::Ref<const Eigen::VectorXd>& coeffs,
                  const Eigen::Ref<const Eigen::VectorXd>& targets,
                  int first_step,
                  int last_step);
  /** @brief Convexifies cost expression - In this case, it is already quadratic so there's nothing to do */
  sco::ConvexObjective::Ptr convex(const DblVec& x, sco::Model* model) override;
  /** @brief Numerically evaluate cost given the vector of values */
  double value(const DblVec&) override;
  sco::VarVector getVars() override { return vars_.flatten(); }

private:
  /** @brief The variables being optimized. Used to properly index the vector being optimized */
  VarArray vars_;
  /** @brief The coefficients used to weight the cost */
  Eigen::VectorXd coeffs_;
  /** @brief Stores the cost as an expression */
  sco::QuadExpr expr_;
  /** @brief Vector of jerk targets */
  Eigen::VectorXd targets_;
  /** @brief First time step to which the term is applied */
  int first_step_;
  /** @brief Last time step to which the term is applied */
  int last_step_;
};

class TRAJOPT_API JointJerkIneqCost : public sco::Cost
{
public:
  /** @brief Forms error in a vector of AffExpr - independent of penalty type */
  JointJerkIneqCost(VarArray vars,
                    const Eigen::Ref<const Eigen::VectorXd>& coeffs,
                    const Eigen::Ref<const Eigen::VectorXd>& targets,
                    const Eigen::Ref<const Eigen::VectorXd>& upper_limits,
                    const Eigen::Ref<const Eigen::VectorXd>& lower_limits,
                    int first_step,
                    int last_step);
  /** @brief Convexifies cost expression - In this case, it is already quadratic so there's nothing to do */
  sco::ConvexObjective::Ptr convex(const DblVec& x, sco::Model* model) override;
  /** @brief Numerically evaluate cost given the vector of values */
  double value(const DblVec&) override;
  sco::VarVector getVars() override { return vars_.flatten(); }

private:
  /** @brief The variables being optimized. Used to properly index the vector being optimized */
  VarArray vars_;
  /** @brief The coefficients used to weight the cost */
  Eigen::VectorXd coeffs_;
  /** @brief Vector of upper tolerances */
  Eigen::VectorXd upper_tols_;
  /** @brief Vector of lower tolerances */
  Eigen::VectorXd lower_tols_;
  /** @brief Vector of jerk targets */
  Eigen::VectorXd targets_;
  /** @brief First time step to which the term is applied */
  int first_step_;
  /** @brief Last time step to which the term is applied */
  int last_step_;
  /** @brief Stores the costs as an expression. Will be length num_jnts*(num_timesteps-4)*2 */
  std::vector<sco::AffExpr> expr_vec_;
};

class TRAJOPT_API JointJerkEqConstraint : public sco::EqConstraint
{
public:
  /** @brief Forms error in a vector of AffExpr - independent of penalty type */
  JointJerkEqConstraint(VarArray vars,
                        const Eigen::Ref<const Eigen::VectorXd>& coeffs,
                        const Eigen::Ref<const Eigen::VectorXd>& targets,
                        int first_step,
                        int last_step);
  /** @brief Convexifies cost expression - In this case, it is already quadratic so there's nothing to do */
  sco::ConvexConstraints::Ptr convex(const DblVec& x, sco::Model* model) override;
  /** @brief Numerically evaluate cost given the vector of values */
  DblVec value(const DblVec&) override;

  sco::VarVector getVars() override { return vars_.flatten(); }

private:
  /** @brief The variables being optimized. Used to properly index the vector being optimized */
  VarArray vars_;
  /** @brief The coefficients used to weight the cost */
  Eigen::VectorXd coeffs_;
  /** @brief Stores the costs as an expression. Will be length num_jnts*(num_timesteps-4) */
  std::vector<sco::AffExpr> expr_vec_;
  /** @brief Vector of velocity targets */
  Eigen::VectorXd targets_;
  /** @brief First time step to which the term is applied */
  int first_step_;
  /** @brief Last time step to which the term is applied */
  int last_step_;
};

class TRAJOPT_API JointJerkIneqConstraint : public sco::IneqConstraint
{
public:
  /** @brief Forms error in a vector of AffExpr - independent of penalty type */
  JointJerkIneqConstraint(VarArray vars,
                          const Eigen::Ref<const Eigen::VectorXd>& coeffs,
                          const Eigen::Ref<const Eigen::VectorXd>& targets,
                          const Eigen::Ref<const Eigen::VectorXd>& upper_limits,
                          const Eigen::Ref<const Eigen::VectorXd>& lower_limits,
                          int first_step,
                          int last_step);
  /** @brief Convexifies cost expression - In this case, it is already quadratic so there's nothing to do */
  sco::ConvexConstraints::Ptr convex(const DblVec& x, sco::Model* model) override;
  /** @brief Numerically evaluate cost given the vector of values */
  DblVec value(const DblVec&) override;
  sco::VarVector getVars() override { return vars_.flatten(); }

private:
  /** @brief The variables being optimized. Used to properly index the vector being optimized */
  VarArray vars_;
  /** @brief The coefficients used to weight the cost */
  Eigen::VectorXd coeffs_;
  /** @brief Vector of upper tolerances */
  Eigen::VectorXd upper_tols_;
  /** @brief Vector of lower tolerances */
  Eigen::VectorXd lower_tols_;
  /** @brief Vector of velocity targets */
  Eigen::VectorXd targets_;
  /** @brief First time step to which the term is applied */
  int first_step_;
  /** @brief Last time step to which the term is applied */
  int last_step_;
  /** @brief Stores the costs as an expression. Will be length num_jnts*(num_timesteps-4)*2 */
  std::vector<sco::AffExpr> expr_vec_;
};
}  // namespace trajopt
