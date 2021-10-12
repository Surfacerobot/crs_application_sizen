# tesseract_ext
This contains external dependencies for Tesseract.

## Required Dependencies
* Bullet3
* FCL
* GTest
* libcdd
* SWIG

## Optional Dependencies
These are optional and not required for typical operation
* Eigen3 - Bug fixes that are not available in release version are useful in some cases
  * Enable with -DINSTALL_EIGEN=ON
  * Select custom git tag with -DINSTALL_EIGEN_TAG=tag_name
* Orocos_kdl - Must be built from source when using a custom Eigen version
  * Enable with -DINSTALL_OROCOS_KDL=ON
  * Select custom git tag with -DINSTALL_OROCOS_KDL_TAG=tag_name
