/*
 * Copyright 2020 Southwest Research Institute
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "crs_gui/widgets/part_selection_widget.h"

// TODO: Cull these includes
#include <map>
#include <regex>
#include <string>
#include <iostream>

#include <QFileDialog>
#include <QMessageBox>
#include <QTableView>
#include <QString>

#include <boost/filesystem.hpp>

#include "ui_part_selection.h"

static const std::string CONFIG_FILE_NAME = "crs.yaml";
static const std::vector<std::string> MESH_EXTENSIONS = { "stl", "obj", "dae" };

namespace crs_gui
{
static const std::string TOP_LEVEL = "part_registration";
static const std::string SIMULATION_POSE = "simulation_pose";
static const std::string SEED_POSE = "seed_pose";
static const std::string TARGET_FRAME_ID = "target_frame_id";
static const std::string PART_FILE = "part_file";
static const std::string TOOLPATH_FILE = "toolpath_file";
static const std::string TOOLPATH_EDGE_BUFFER = "toolpath_edge_buffer";
static const std::string REACHABLE_RADIUS = "reachable_radius";
static const std::string SINGULARITY_RADIUS = "singularity_radius";

PartSelectionWidget::PartSelectionWidget(QWidget* parent, std::string database_directory)
  : QWidget(parent), ui_(new Ui::PartSelection), database_directory_(database_directory)
{
  ui_->setupUi(this);

  // Connect the signals and slots
  connect(ui_->push_button_refresh_parts_list, &QPushButton::clicked, this, &PartSelectionWidget::refreshPartsList);
  refreshPartsList();
  connect(ui_->list_widget_parts, &QListWidget::currentItemChanged, this, &PartSelectionWidget::onPartSelectionChanged);
  connect(ui_->push_button_load_selected_part, &QPushButton::clicked, this, &PartSelectionWidget::onPartSelected);
  connect(ui_->  partupdatebutton, &QPushButton::clicked, this, &PartSelectionWidget::saveConfig);

}

PartSelectionWidget::~PartSelectionWidget() = default;

void PartSelectionWidget::refreshPartsList()
{
  using namespace boost::filesystem;
  path p;
  std::vector<path> part_dirs;

  for (directory_iterator itr(database_directory_); itr != directory_iterator(); itr++)
  {
    if (!is_directory(itr->path()))
    {
      continue;
    }

    // check for mesh existence
    std::string part_name = itr->path().stem().string();
    if (!std::any_of(MESH_EXTENSIONS.begin(), MESH_EXTENSIONS.end(), [&](const std::string& ext) -> bool {
          return exists(itr->path() / path(part_name + "." + ext));
        }))
    {
      continue;
    }

    part_dirs.push_back(itr->path());
  }

  // Retrieve part info from the database
  if (!part_dirs.size())
  {
    // If the function failed, create a warning pop-up box.
    std::string message = "Found no parts in " + database_directory_;
    QMessageBox::warning(this, "Database Communication Error", QString::fromStdString(message));
  }
  else
  {
    ui_->list_widget_parts->clear();
    for (auto& part : part_dirs)
    {
      // Gui display listing parts to user
      QListWidgetItem* item = new QListWidgetItem(QString::fromStdString(part.stem().string()));
      item->setData(Qt::ItemDataRole::UserRole, QVariant(QString::fromStdString(part.stem().string())));
      ui_->list_widget_parts->addItem(item);
    }
  }
  return;
}

void PartSelectionWidget::onPartSelectionChanged(QListWidgetItem* current, QListWidgetItem*)
{
  // Change the description display based on which part is selected
  if (current != nullptr)
  {
    // Get selected part path
    using namespace boost::filesystem;
    path part(ui_->list_widget_parts->currentItem()->data(Qt::ItemDataRole::UserRole).toString().toUtf8());
    path part_paths_dir(database_directory_);
    part_paths_dir += "/" + part.string();

    // Get all yaml files in that directory
    std::vector<path> part_paths;
    for (directory_iterator itr(part_paths_dir); itr != directory_iterator(); itr++)
    {
      if (itr->path().extension() == ".yaml")
        part_paths.push_back(itr->path());
    }

    // Display all yaml files
    ui_->list_widget_part_paths->clear();
    for (auto& paths : part_paths)
    {
      if (CONFIG_FILE_NAME == paths.filename().string())
      {
        // do not add config file
        continue;
      }

      // Gui display listing parts to user
      QListWidgetItem* item = new QListWidgetItem(QString::fromStdString(paths.stem().string()));
      item->setData(Qt::ItemDataRole::UserRole, QVariant(QString::fromStdString(paths.stem().string())));
      ui_->list_widget_part_paths->addItem(item);
    }
  }
}


//2021-4-12 xiaopeng add set configuration
void PartSelectionWidget::loadconfig(std::string current_part)
{
  try {
     namespace fs = boost::filesystem;
    fs::path config_file =
        fs::path(database_directory_) / fs::path(current_part) / fs::path("crs.yaml");

   std::string filename= config_file.string();
     config = YAML::LoadFile(filename);
    config_file_=filename;
    YAML::Node crs = config["crs"];
    YAML::Node root_node = crs[TOP_LEVEL];


      // seed pose
      std::vector<double> pose_vals = root_node[SEED_POSE].as<std::vector<double>>();
     ui_->l_x->setText(QString::number( pose_vals[0]));
     ui_->l_y->setText(QString::number( pose_vals[1]));
     ui_->l_z->setText(QString::number( pose_vals[2]));
     ui_->l_w->setText(QString::number( (pose_vals[3] / 3.14) * 180 ));
     ui_->l_p->setText(QString::number( (pose_vals[4] / 3.14) * 180));
     ui_->l_r->setText(QString::number( (pose_vals[5] / 3.14) * 180));

  } catch (std::exception& e) {

  }

}

void PartSelectionWidget::saveConfig()
{

  try {

    namespace fs = boost::filesystem;
      config = YAML::LoadFile(config_file_);

   YAML::Node crs = config["crs"];
   YAML::Node root_node = crs[TOP_LEVEL];

    root_node[SEED_POSE][0] = ui_->l_x->text().toDouble();
    root_node[SEED_POSE][1] = ui_->l_y->text().toDouble();
    root_node[SEED_POSE][2] = ui_->l_z->text().toDouble();
    root_node[SEED_POSE][3] = (ui_->l_w->text().toDouble()) / 180 * 3.14;
    root_node[SEED_POSE][4] = (ui_->l_p->text().toDouble()) / 180 * 3.14;
    root_node[SEED_POSE][5] = (ui_->l_r->text().toDouble()) / 180 * 3.14;

    root_node[SIMULATION_POSE][0] = ui_->l_x->text().toDouble();
    root_node[SIMULATION_POSE][1] = ui_->l_y->text().toDouble();
    root_node[SIMULATION_POSE][2] = ui_->l_z->text().toDouble();
    root_node[SIMULATION_POSE][3] = (ui_->l_w->text().toDouble()) / 180 * 3.14;
    root_node[SIMULATION_POSE][4] = (ui_->l_p->text().toDouble()) / 180 * 3.14;
    root_node[SIMULATION_POSE][5] = (ui_->l_r->text().toDouble()) / 180 * 3.14;

    std::ofstream config_out(config_file_);
    config_out << config;
    config_out.close();

    onPartSelected();

  } catch (std::exception& e) {

  }


}


void PartSelectionWidget::onPartSelected()
{

  namespace fs = boost::filesystem;
  if (ui_->list_widget_parts && ui_->list_widget_parts->currentItem() && ui_->list_widget_part_paths &&
      ui_->list_widget_part_paths->currentItem())
  {
    std::string current_part =
        ui_->list_widget_parts->currentItem()->data(Qt::ItemDataRole::UserRole).toString().toUtf8().constData();
    std::string part_mesh;
    std::for_each(MESH_EXTENSIONS.begin(), MESH_EXTENSIONS.end(), [&](const std::string& ext) {
      fs::path mesh_full_path =
          fs::path(database_directory_) / fs::path(current_part) / fs::path(current_part + "." + ext);
      if (fs::exists(mesh_full_path))
      {
        part_mesh = mesh_full_path.filename().string();
      }
    });
    std::string current_path =
        ui_->list_widget_part_paths->currentItem()->data(Qt::ItemDataRole::UserRole).toString().toUtf8().constData();

    //2021-4-12 xiaopeng
    loadconfig(current_part);

    emit partSelected(QString::fromStdString(current_part), QString::fromStdString(part_mesh));
    emit partPathSelected(QString::fromStdString(current_part), QString::fromStdString(current_path));
  }
}

}  // namespace crs_gui
