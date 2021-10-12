#include <tesseract_common/macros.h>
TESSERACT_COMMON_IGNORE_WARNINGS_PUSH
#include <gtest/gtest.h>
#include <Eigen/Geometry>
TESSERACT_COMMON_IGNORE_WARNINGS_POP

#include <tesseract_urdf/mesh.h>
#include "tesseract_urdf_common_unit.h"

TEST(TesseractURDFUnit, parse_mesh)  // NOLINT
{
  std::shared_ptr<tesseract_scene_graph::SimpleResourceLocator> resource_locator =
      std::make_shared<tesseract_scene_graph::SimpleResourceLocator>(locateResource);
  {
    std::string str =
        R"(<mesh filename="package://tesseract_support/meshes/sphere_p25m.stl" scale="1 2 1" extra="0 0 0"/>)";
    std::vector<tesseract_geometry::Mesh::Ptr> geom;
    auto status = runTest<std::vector<tesseract_geometry::Mesh::Ptr>>(geom, str, "mesh", resource_locator, 2, true);
    EXPECT_TRUE(*status);
    EXPECT_EQ(status->category()->name(), "MeshStatusCategory");
    EXPECT_FALSE(status->category()->message(999).empty());  // Test invalid error code
    EXPECT_FALSE(status->message().empty());
    EXPECT_TRUE(geom.size() == 1);
    EXPECT_TRUE(geom[0]->getTriangleCount() == 80);
    EXPECT_TRUE(geom[0]->getVerticeCount() == 42);
    EXPECT_NEAR(geom[0]->getScale()[0], 1, 1e-5);
    EXPECT_NEAR(geom[0]->getScale()[1], 2, 1e-5);
    EXPECT_NEAR(geom[0]->getScale()[2], 1, 1e-5);
  }

  {
    std::string str = R"(<mesh filename="package://tesseract_support/meshes/sphere_p25m.stl"/>)";
    std::vector<tesseract_geometry::Mesh::Ptr> geom;
    auto status = runTest<std::vector<tesseract_geometry::Mesh::Ptr>>(geom, str, "mesh", resource_locator, 2, true);
    EXPECT_TRUE(*status);
    EXPECT_FALSE(status->message().empty());
    EXPECT_TRUE(geom.size() == 1);
    EXPECT_TRUE(geom[0]->getTriangleCount() == 80);
    EXPECT_TRUE(geom[0]->getVerticeCount() == 42);
    EXPECT_NEAR(geom[0]->getScale()[0], 1, 1e-5);
    EXPECT_NEAR(geom[0]->getScale()[1], 1, 1e-5);
    EXPECT_NEAR(geom[0]->getScale()[2], 1, 1e-5);
  }

  {
    std::string str = R"(<mesh filename="abc" scale="1 2 1"/>)";
    std::vector<tesseract_geometry::Mesh::Ptr> geom;
    auto status = runTest<std::vector<tesseract_geometry::Mesh::Ptr>>(geom, str, "mesh", resource_locator, 2, true);
    EXPECT_FALSE(*status);
    EXPECT_FALSE(status->message().empty());
  }

  {
    std::string str = R"(<mesh filename="package://tesseract_support/meshes/sphere_p25m.stl" scale="1 a 1"/>)";
    std::vector<tesseract_geometry::Mesh::Ptr> geom;
    auto status = runTest<std::vector<tesseract_geometry::Mesh::Ptr>>(geom, str, "mesh", resource_locator, 2, true);
    EXPECT_FALSE(*status);
    EXPECT_FALSE(status->message().empty());
  }

  {
    std::string str = R"(<mesh filename="package://tesseract_support/meshes/sphere_p25m.stl" scale="a 1 1"/>)";
    std::vector<tesseract_geometry::Mesh::Ptr> geom;
    auto status = runTest<std::vector<tesseract_geometry::Mesh::Ptr>>(geom, str, "mesh", resource_locator, 2, true);
    EXPECT_FALSE(*status);
    EXPECT_FALSE(status->message().empty());
  }

  {
    std::string str = R"(<mesh filename="package://tesseract_support/meshes/sphere_p25m.stl" scale="1 1 a"/>)";
    std::vector<tesseract_geometry::Mesh::Ptr> geom;
    auto status = runTest<std::vector<tesseract_geometry::Mesh::Ptr>>(geom, str, "mesh", resource_locator, 2, true);
    EXPECT_FALSE(*status);
    EXPECT_FALSE(status->message().empty());
  }

  {
    std::string str = R"(<mesh filename="package://tesseract_support/meshes/sphere_p25m.stl" scale="1 2 1 3"/>)";
    std::vector<tesseract_geometry::Mesh::Ptr> geom;
    auto status = runTest<std::vector<tesseract_geometry::Mesh::Ptr>>(geom, str, "mesh", resource_locator, 2, true);
    EXPECT_FALSE(*status);
    EXPECT_FALSE(status->message().empty());
  }

  {
    std::string str = R"(<mesh scale="1 2 1"/>)";
    std::vector<tesseract_geometry::Mesh::Ptr> geom;
    auto status = runTest<std::vector<tesseract_geometry::Mesh::Ptr>>(geom, str, "mesh", resource_locator, 2, true);
    EXPECT_FALSE(*status);
    EXPECT_FALSE(status->message().empty());
  }

  {
    std::string str = "<mesh />";
    std::vector<tesseract_geometry::Mesh::Ptr> geom;
    auto status = runTest<std::vector<tesseract_geometry::Mesh::Ptr>>(geom, str, "mesh", resource_locator, 2, true);
    EXPECT_FALSE(*status);
    EXPECT_FALSE(status->message().empty());
  }
}
