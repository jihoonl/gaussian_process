/*
  Gaussian Process Regression
 */
/** \author Jihoon Lee, Kyungjae Lee, Sungjoon Choi */

#ifndef _GAUSSIAN_PROCESS_REGRESSION_H_
#define _GAUSSIAN_PROCESS_REGRESSION_H_ 

#include <Eigen/Dense>

namespace gaussian_process {
class GPRegression {
public:
  GPRegression();
  ~GPRegression();

  Eigen::MatrixXd regreassionMean(MatrixXd x_star);
  Eigen::MatrixXd regreassionVar(MatrixXd x_star);

private:
  Eigen::MatrixXd x_, y_;
  Eigen::MatrixXd y_mean_, y_mean_zero;
  Eigen::MatrixXd k_, k_star_;
  Eigen::MatrixXd kvec_inv_k_;
  unsigned int x_dim_;
  unsigned int y_dim_;
  unsigned int data_size_;
  double hyp_[3];

};

#endif
