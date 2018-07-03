/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionHelp;
    QAction *actionReset_camera;
    QAction *actionToggle_coloring;
    QAction *actionMesh_representation;
    QAction *actionSaveAs;
    QWidget *centralWidget;
    QGridLayout *gridLayout_7;
    QHBoxLayout *horizontalLayout_main_controls;
    QToolButton *toolButton_1;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QToolButton *toolButton_4;
    QToolButton *toolButton_5;
    QToolButton *toolButton_6;
    QSpacerItem *horizontalSpacer_main_controls;
    QToolButton *toolButton_0;
    QWidget *placeholder_in_hand_scanner;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QToolBox *toolBox;
    QWidget *page_input_data_processing;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_crop_xyz;
    QGridLayout *gridLayout_3;
    QSpinBox *spinBox_y_max;
    QLabel *label_z_min;
    QSpinBox *spinBox_x_max;
    QSpinBox *spinBox_y_min;
    QLabel *label_x_min;
    QSpinBox *spinBox_z_max;
    QSpinBox *spinBox_x_min;
    QLabel *label_xyz_erode_size;
    QLabel *label_y_min;
    QLabel *label_x_max;
    QSpinBox *spinBox_z_min;
    QLabel *label_y_max;
    QLabel *label_z_max;
    QSpinBox *spinBox_xyz_erode_size;
    QGroupBox *groupBox_segment_hsv;
    QGridLayout *gridLayout;
    QSpinBox *spinBox_h_max;
    QLabel *label_s_max;
    QSpinBox *spinBox_s_min;
    QLabel *label_h_min;
    QLabel *label_h_max;
    QLabel *label_s_min;
    QSpinBox *spinBox_v_min;
    QLabel *label_v_min;
    QSpinBox *spinBox_v_max;
    QSpinBox *spinBox_h_min;
    QLabel *label_v_max;
    QSpinBox *spinBox_s_max;
    QLabel *label_hsv_dilate_size;
    QSpinBox *spinBox_hsv_dilate_size;
    QCheckBox *checkBox_color_segmentation_inverted;
    QCheckBox *checkBox_color_segmentation_enabled;
    QSpacerItem *verticalSpacer_input_data_processing;
    QWidget *page_registration;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_convergence;
    QGridLayout *gridLayout_4;
    QLabel *label_epsilon;
    QLabel *label_max_iterations;
    QLabel *label_min_overlap;
    QLabel *label_max_fitness;
    QSpinBox *spinBox_max_iterations;
    QSpinBox *spinBox_min_overlap;
    QLineEdit *lineEdit_epsilon;
    QLineEdit *lineEdit_max_fitness;
    QGroupBox *groupBox_correspondence_rejection;
    QGridLayout *gridLayout_2;
    QLabel *label_correspondence_rejection_factor;
    QDoubleSpinBox *doubleSpinBox_correspondence_rejection_factor;
    QLabel *label_correspondence_rejection_max_angle;
    QSpinBox *spinBox_correspondence_rejection_max_angle;
    QSpacerItem *verticalSpacer_registration;
    QWidget *page_integration;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_averaging;
    QGridLayout *gridLayout_5;
    QLabel *label_max_squared_distance;
    QLineEdit *lineEdit_max_squared_distance;
    QLabel *label_averaging_max_angle;
    QSpinBox *spinBox_averaging_max_angle;
    QGroupBox *groupBox_outlier_removal;
    QGridLayout *gridLayout_6;
    QLabel *label_max_age;
    QSpinBox *spinBox_max_age;
    QLabel *label_min_directions;
    QSpinBox *spinBox_min_directions;
    QSpacerItem *verticalSpacer_integration;
    QToolBar *toolBar;
    QMenuBar *menuBar;
    QMenu *menuFile;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1008, 600);
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName(QStringLiteral("actionHelp"));
        actionReset_camera = new QAction(MainWindow);
        actionReset_camera->setObjectName(QStringLiteral("actionReset_camera"));
        actionToggle_coloring = new QAction(MainWindow);
        actionToggle_coloring->setObjectName(QStringLiteral("actionToggle_coloring"));
        actionMesh_representation = new QAction(MainWindow);
        actionMesh_representation->setObjectName(QStringLiteral("actionMesh_representation"));
        actionSaveAs = new QAction(MainWindow);
        actionSaveAs->setObjectName(QStringLiteral("actionSaveAs"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_7 = new QGridLayout(centralWidget);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        horizontalLayout_main_controls = new QHBoxLayout();
        horizontalLayout_main_controls->setSpacing(6);
        horizontalLayout_main_controls->setObjectName(QStringLiteral("horizontalLayout_main_controls"));
        toolButton_1 = new QToolButton(centralWidget);
        toolButton_1->setObjectName(QStringLiteral("toolButton_1"));
        toolButton_1->setCheckable(true);
        toolButton_1->setChecked(true);
        toolButton_1->setAutoExclusive(true);

        horizontalLayout_main_controls->addWidget(toolButton_1);

        toolButton_2 = new QToolButton(centralWidget);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        toolButton_2->setCheckable(true);
        toolButton_2->setChecked(false);
        toolButton_2->setAutoExclusive(true);

        horizontalLayout_main_controls->addWidget(toolButton_2);

        toolButton_3 = new QToolButton(centralWidget);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));
        toolButton_3->setCheckable(true);
        toolButton_3->setAutoExclusive(true);

        horizontalLayout_main_controls->addWidget(toolButton_3);

        toolButton_4 = new QToolButton(centralWidget);
        toolButton_4->setObjectName(QStringLiteral("toolButton_4"));
        toolButton_4->setCheckable(true);
        toolButton_4->setAutoExclusive(true);

        horizontalLayout_main_controls->addWidget(toolButton_4);

        toolButton_5 = new QToolButton(centralWidget);
        toolButton_5->setObjectName(QStringLiteral("toolButton_5"));
        toolButton_5->setCheckable(true);
        toolButton_5->setAutoExclusive(true);

        horizontalLayout_main_controls->addWidget(toolButton_5);

        toolButton_6 = new QToolButton(centralWidget);
        toolButton_6->setObjectName(QStringLiteral("toolButton_6"));
        toolButton_6->setCheckable(false);
        toolButton_6->setAutoExclusive(false);

        horizontalLayout_main_controls->addWidget(toolButton_6);

        horizontalSpacer_main_controls = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_main_controls->addItem(horizontalSpacer_main_controls);

        toolButton_0 = new QToolButton(centralWidget);
        toolButton_0->setObjectName(QStringLiteral("toolButton_0"));
        toolButton_0->setCheckable(false);
        toolButton_0->setAutoExclusive(false);

        horizontalLayout_main_controls->addWidget(toolButton_0);


        gridLayout_7->addLayout(horizontalLayout_main_controls, 0, 0, 1, 1);

        placeholder_in_hand_scanner = new QWidget(centralWidget);
        placeholder_in_hand_scanner->setObjectName(QStringLiteral("placeholder_in_hand_scanner"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(placeholder_in_hand_scanner->sizePolicy().hasHeightForWidth());
        placeholder_in_hand_scanner->setSizePolicy(sizePolicy);

        gridLayout_7->addWidget(placeholder_in_hand_scanner, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        dockWidget = new QDockWidget(MainWindow);
        dockWidget->setObjectName(QStringLiteral("dockWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(dockWidget->sizePolicy().hasHeightForWidth());
        dockWidget->setSizePolicy(sizePolicy1);
        dockWidget->setMinimumSize(QSize(324, 228));
        dockWidget->setFeatures(QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        toolBox = new QToolBox(dockWidgetContents);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setMinimumSize(QSize(0, 0));
        page_input_data_processing = new QWidget();
        page_input_data_processing->setObjectName(QStringLiteral("page_input_data_processing"));
        page_input_data_processing->setGeometry(QRect(0, 0, 300, 408));
        verticalLayout_2 = new QVBoxLayout(page_input_data_processing);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox_crop_xyz = new QGroupBox(page_input_data_processing);
        groupBox_crop_xyz->setObjectName(QStringLiteral("groupBox_crop_xyz"));
        gridLayout_3 = new QGridLayout(groupBox_crop_xyz);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        spinBox_y_max = new QSpinBox(groupBox_crop_xyz);
        spinBox_y_max->setObjectName(QStringLiteral("spinBox_y_max"));
        spinBox_y_max->setMinimum(-100);
        spinBox_y_max->setMaximum(100);
        spinBox_y_max->setSingleStep(5);

        gridLayout_3->addWidget(spinBox_y_max, 1, 3, 1, 1);

        label_z_min = new QLabel(groupBox_crop_xyz);
        label_z_min->setObjectName(QStringLiteral("label_z_min"));

        gridLayout_3->addWidget(label_z_min, 2, 0, 1, 1);

        spinBox_x_max = new QSpinBox(groupBox_crop_xyz);
        spinBox_x_max->setObjectName(QStringLiteral("spinBox_x_max"));
        spinBox_x_max->setMinimum(-100);
        spinBox_x_max->setMaximum(100);
        spinBox_x_max->setSingleStep(5);

        gridLayout_3->addWidget(spinBox_x_max, 0, 3, 1, 1);

        spinBox_y_min = new QSpinBox(groupBox_crop_xyz);
        spinBox_y_min->setObjectName(QStringLiteral("spinBox_y_min"));
        spinBox_y_min->setMinimum(-100);
        spinBox_y_min->setMaximum(100);
        spinBox_y_min->setSingleStep(5);

        gridLayout_3->addWidget(spinBox_y_min, 1, 1, 1, 1);

        label_x_min = new QLabel(groupBox_crop_xyz);
        label_x_min->setObjectName(QStringLiteral("label_x_min"));

        gridLayout_3->addWidget(label_x_min, 0, 0, 1, 1);

        spinBox_z_max = new QSpinBox(groupBox_crop_xyz);
        spinBox_z_max->setObjectName(QStringLiteral("spinBox_z_max"));
        spinBox_z_max->setMinimum(0);
        spinBox_z_max->setMaximum(1000);
        spinBox_z_max->setSingleStep(5);

        gridLayout_3->addWidget(spinBox_z_max, 2, 3, 1, 1);

        spinBox_x_min = new QSpinBox(groupBox_crop_xyz);
        spinBox_x_min->setObjectName(QStringLiteral("spinBox_x_min"));
        spinBox_x_min->setMinimum(-100);
        spinBox_x_min->setMaximum(100);
        spinBox_x_min->setSingleStep(5);

        gridLayout_3->addWidget(spinBox_x_min, 0, 1, 1, 1);

        label_xyz_erode_size = new QLabel(groupBox_crop_xyz);
        label_xyz_erode_size->setObjectName(QStringLiteral("label_xyz_erode_size"));

        gridLayout_3->addWidget(label_xyz_erode_size, 3, 0, 1, 2);

        label_y_min = new QLabel(groupBox_crop_xyz);
        label_y_min->setObjectName(QStringLiteral("label_y_min"));

        gridLayout_3->addWidget(label_y_min, 1, 0, 1, 1);

        label_x_max = new QLabel(groupBox_crop_xyz);
        label_x_max->setObjectName(QStringLiteral("label_x_max"));

        gridLayout_3->addWidget(label_x_max, 0, 2, 1, 1);

        spinBox_z_min = new QSpinBox(groupBox_crop_xyz);
        spinBox_z_min->setObjectName(QStringLiteral("spinBox_z_min"));
        spinBox_z_min->setMinimum(0);
        spinBox_z_min->setMaximum(1000);
        spinBox_z_min->setSingleStep(5);

        gridLayout_3->addWidget(spinBox_z_min, 2, 1, 1, 1);

        label_y_max = new QLabel(groupBox_crop_xyz);
        label_y_max->setObjectName(QStringLiteral("label_y_max"));

        gridLayout_3->addWidget(label_y_max, 1, 2, 1, 1);

        label_z_max = new QLabel(groupBox_crop_xyz);
        label_z_max->setObjectName(QStringLiteral("label_z_max"));

        gridLayout_3->addWidget(label_z_max, 2, 2, 1, 1);

        spinBox_xyz_erode_size = new QSpinBox(groupBox_crop_xyz);
        spinBox_xyz_erode_size->setObjectName(QStringLiteral("spinBox_xyz_erode_size"));
        spinBox_xyz_erode_size->setMaximum(50);

        gridLayout_3->addWidget(spinBox_xyz_erode_size, 3, 2, 1, 2);


        verticalLayout_2->addWidget(groupBox_crop_xyz);

        groupBox_segment_hsv = new QGroupBox(page_input_data_processing);
        groupBox_segment_hsv->setObjectName(QStringLiteral("groupBox_segment_hsv"));
        gridLayout = new QGridLayout(groupBox_segment_hsv);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        spinBox_h_max = new QSpinBox(groupBox_segment_hsv);
        spinBox_h_max->setObjectName(QStringLiteral("spinBox_h_max"));
        spinBox_h_max->setMaximum(360);
        spinBox_h_max->setSingleStep(5);

        gridLayout->addWidget(spinBox_h_max, 0, 3, 1, 1);

        label_s_max = new QLabel(groupBox_segment_hsv);
        label_s_max->setObjectName(QStringLiteral("label_s_max"));

        gridLayout->addWidget(label_s_max, 1, 2, 1, 1);

        spinBox_s_min = new QSpinBox(groupBox_segment_hsv);
        spinBox_s_min->setObjectName(QStringLiteral("spinBox_s_min"));
        spinBox_s_min->setMaximum(100);
        spinBox_s_min->setSingleStep(5);

        gridLayout->addWidget(spinBox_s_min, 1, 1, 1, 1);

        label_h_min = new QLabel(groupBox_segment_hsv);
        label_h_min->setObjectName(QStringLiteral("label_h_min"));

        gridLayout->addWidget(label_h_min, 0, 0, 1, 1);

        label_h_max = new QLabel(groupBox_segment_hsv);
        label_h_max->setObjectName(QStringLiteral("label_h_max"));

        gridLayout->addWidget(label_h_max, 0, 2, 1, 1);

        label_s_min = new QLabel(groupBox_segment_hsv);
        label_s_min->setObjectName(QStringLiteral("label_s_min"));

        gridLayout->addWidget(label_s_min, 1, 0, 1, 1);

        spinBox_v_min = new QSpinBox(groupBox_segment_hsv);
        spinBox_v_min->setObjectName(QStringLiteral("spinBox_v_min"));
        spinBox_v_min->setMaximum(100);
        spinBox_v_min->setSingleStep(5);

        gridLayout->addWidget(spinBox_v_min, 2, 1, 1, 1);

        label_v_min = new QLabel(groupBox_segment_hsv);
        label_v_min->setObjectName(QStringLiteral("label_v_min"));

        gridLayout->addWidget(label_v_min, 2, 0, 1, 1);

        spinBox_v_max = new QSpinBox(groupBox_segment_hsv);
        spinBox_v_max->setObjectName(QStringLiteral("spinBox_v_max"));
        spinBox_v_max->setMaximum(100);
        spinBox_v_max->setSingleStep(5);

        gridLayout->addWidget(spinBox_v_max, 2, 3, 1, 1);

        spinBox_h_min = new QSpinBox(groupBox_segment_hsv);
        spinBox_h_min->setObjectName(QStringLiteral("spinBox_h_min"));
        spinBox_h_min->setMaximum(360);
        spinBox_h_min->setSingleStep(5);

        gridLayout->addWidget(spinBox_h_min, 0, 1, 1, 1);

        label_v_max = new QLabel(groupBox_segment_hsv);
        label_v_max->setObjectName(QStringLiteral("label_v_max"));

        gridLayout->addWidget(label_v_max, 2, 2, 1, 1);

        spinBox_s_max = new QSpinBox(groupBox_segment_hsv);
        spinBox_s_max->setObjectName(QStringLiteral("spinBox_s_max"));
        spinBox_s_max->setMaximum(100);
        spinBox_s_max->setSingleStep(5);

        gridLayout->addWidget(spinBox_s_max, 1, 3, 1, 1);

        label_hsv_dilate_size = new QLabel(groupBox_segment_hsv);
        label_hsv_dilate_size->setObjectName(QStringLiteral("label_hsv_dilate_size"));

        gridLayout->addWidget(label_hsv_dilate_size, 3, 0, 1, 2);

        spinBox_hsv_dilate_size = new QSpinBox(groupBox_segment_hsv);
        spinBox_hsv_dilate_size->setObjectName(QStringLiteral("spinBox_hsv_dilate_size"));
        spinBox_hsv_dilate_size->setMaximum(50);

        gridLayout->addWidget(spinBox_hsv_dilate_size, 3, 2, 1, 2);

        checkBox_color_segmentation_inverted = new QCheckBox(groupBox_segment_hsv);
        checkBox_color_segmentation_inverted->setObjectName(QStringLiteral("checkBox_color_segmentation_inverted"));

        gridLayout->addWidget(checkBox_color_segmentation_inverted, 4, 0, 1, 2);

        checkBox_color_segmentation_enabled = new QCheckBox(groupBox_segment_hsv);
        checkBox_color_segmentation_enabled->setObjectName(QStringLiteral("checkBox_color_segmentation_enabled"));

        gridLayout->addWidget(checkBox_color_segmentation_enabled, 4, 2, 1, 1);

        spinBox_h_min->raise();
        label_s_min->raise();
        spinBox_v_min->raise();
        spinBox_v_max->raise();
        label_s_max->raise();
        label_v_max->raise();
        spinBox_h_max->raise();
        label_h_min->raise();
        label_h_max->raise();
        label_v_min->raise();
        spinBox_s_max->raise();
        spinBox_s_min->raise();
        checkBox_color_segmentation_inverted->raise();
        label_hsv_dilate_size->raise();
        spinBox_hsv_dilate_size->raise();
        checkBox_color_segmentation_enabled->raise();

        verticalLayout_2->addWidget(groupBox_segment_hsv);

        verticalSpacer_input_data_processing = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_input_data_processing);

        toolBox->addItem(page_input_data_processing, QStringLiteral("Input data processing"));
        page_registration = new QWidget();
        page_registration->setObjectName(QStringLiteral("page_registration"));
        page_registration->setGeometry(QRect(0, 0, 300, 401));
        verticalLayout_3 = new QVBoxLayout(page_registration);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox_convergence = new QGroupBox(page_registration);
        groupBox_convergence->setObjectName(QStringLiteral("groupBox_convergence"));
        gridLayout_4 = new QGridLayout(groupBox_convergence);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_epsilon = new QLabel(groupBox_convergence);
        label_epsilon->setObjectName(QStringLiteral("label_epsilon"));

        gridLayout_4->addWidget(label_epsilon, 0, 0, 1, 1);

        label_max_iterations = new QLabel(groupBox_convergence);
        label_max_iterations->setObjectName(QStringLiteral("label_max_iterations"));

        gridLayout_4->addWidget(label_max_iterations, 1, 0, 1, 1);

        label_min_overlap = new QLabel(groupBox_convergence);
        label_min_overlap->setObjectName(QStringLiteral("label_min_overlap"));

        gridLayout_4->addWidget(label_min_overlap, 2, 0, 1, 1);

        label_max_fitness = new QLabel(groupBox_convergence);
        label_max_fitness->setObjectName(QStringLiteral("label_max_fitness"));

        gridLayout_4->addWidget(label_max_fitness, 3, 0, 1, 1);

        spinBox_max_iterations = new QSpinBox(groupBox_convergence);
        spinBox_max_iterations->setObjectName(QStringLiteral("spinBox_max_iterations"));
        spinBox_max_iterations->setMinimum(1);
        spinBox_max_iterations->setMaximum(500);

        gridLayout_4->addWidget(spinBox_max_iterations, 1, 1, 1, 1);

        spinBox_min_overlap = new QSpinBox(groupBox_convergence);
        spinBox_min_overlap->setObjectName(QStringLiteral("spinBox_min_overlap"));
        spinBox_min_overlap->setMaximum(100);

        gridLayout_4->addWidget(spinBox_min_overlap, 2, 1, 1, 1);

        lineEdit_epsilon = new QLineEdit(groupBox_convergence);
        lineEdit_epsilon->setObjectName(QStringLiteral("lineEdit_epsilon"));

        gridLayout_4->addWidget(lineEdit_epsilon, 0, 1, 1, 1);

        lineEdit_max_fitness = new QLineEdit(groupBox_convergence);
        lineEdit_max_fitness->setObjectName(QStringLiteral("lineEdit_max_fitness"));

        gridLayout_4->addWidget(lineEdit_max_fitness, 3, 1, 1, 1);


        verticalLayout_3->addWidget(groupBox_convergence);

        groupBox_correspondence_rejection = new QGroupBox(page_registration);
        groupBox_correspondence_rejection->setObjectName(QStringLiteral("groupBox_correspondence_rejection"));
        gridLayout_2 = new QGridLayout(groupBox_correspondence_rejection);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_correspondence_rejection_factor = new QLabel(groupBox_correspondence_rejection);
        label_correspondence_rejection_factor->setObjectName(QStringLiteral("label_correspondence_rejection_factor"));

        gridLayout_2->addWidget(label_correspondence_rejection_factor, 0, 0, 1, 1);

        doubleSpinBox_correspondence_rejection_factor = new QDoubleSpinBox(groupBox_correspondence_rejection);
        doubleSpinBox_correspondence_rejection_factor->setObjectName(QStringLiteral("doubleSpinBox_correspondence_rejection_factor"));
        doubleSpinBox_correspondence_rejection_factor->setMinimum(1);
        doubleSpinBox_correspondence_rejection_factor->setMaximum(100);

        gridLayout_2->addWidget(doubleSpinBox_correspondence_rejection_factor, 0, 1, 1, 1);

        label_correspondence_rejection_max_angle = new QLabel(groupBox_correspondence_rejection);
        label_correspondence_rejection_max_angle->setObjectName(QStringLiteral("label_correspondence_rejection_max_angle"));

        gridLayout_2->addWidget(label_correspondence_rejection_max_angle, 1, 0, 1, 1);

        spinBox_correspondence_rejection_max_angle = new QSpinBox(groupBox_correspondence_rejection);
        spinBox_correspondence_rejection_max_angle->setObjectName(QStringLiteral("spinBox_correspondence_rejection_max_angle"));
        spinBox_correspondence_rejection_max_angle->setMaximum(180);

        gridLayout_2->addWidget(spinBox_correspondence_rejection_max_angle, 1, 1, 1, 1);


        verticalLayout_3->addWidget(groupBox_correspondence_rejection);

        verticalSpacer_registration = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_registration);

        toolBox->addItem(page_registration, QStringLiteral("Registration"));
        page_integration = new QWidget();
        page_integration->setObjectName(QStringLiteral("page_integration"));
        page_integration->setGeometry(QRect(0, 0, 300, 401));
        verticalLayout_4 = new QVBoxLayout(page_integration);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        groupBox_averaging = new QGroupBox(page_integration);
        groupBox_averaging->setObjectName(QStringLiteral("groupBox_averaging"));
        gridLayout_5 = new QGridLayout(groupBox_averaging);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_max_squared_distance = new QLabel(groupBox_averaging);
        label_max_squared_distance->setObjectName(QStringLiteral("label_max_squared_distance"));

        gridLayout_5->addWidget(label_max_squared_distance, 0, 0, 1, 1);

        lineEdit_max_squared_distance = new QLineEdit(groupBox_averaging);
        lineEdit_max_squared_distance->setObjectName(QStringLiteral("lineEdit_max_squared_distance"));

        gridLayout_5->addWidget(lineEdit_max_squared_distance, 0, 1, 1, 1);

        label_averaging_max_angle = new QLabel(groupBox_averaging);
        label_averaging_max_angle->setObjectName(QStringLiteral("label_averaging_max_angle"));

        gridLayout_5->addWidget(label_averaging_max_angle, 1, 0, 1, 1);

        spinBox_averaging_max_angle = new QSpinBox(groupBox_averaging);
        spinBox_averaging_max_angle->setObjectName(QStringLiteral("spinBox_averaging_max_angle"));
        spinBox_averaging_max_angle->setMaximum(180);

        gridLayout_5->addWidget(spinBox_averaging_max_angle, 1, 1, 1, 1);


        verticalLayout_4->addWidget(groupBox_averaging);

        groupBox_outlier_removal = new QGroupBox(page_integration);
        groupBox_outlier_removal->setObjectName(QStringLiteral("groupBox_outlier_removal"));
        gridLayout_6 = new QGridLayout(groupBox_outlier_removal);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        label_max_age = new QLabel(groupBox_outlier_removal);
        label_max_age->setObjectName(QStringLiteral("label_max_age"));

        gridLayout_6->addWidget(label_max_age, 0, 0, 1, 1);

        spinBox_max_age = new QSpinBox(groupBox_outlier_removal);
        spinBox_max_age->setObjectName(QStringLiteral("spinBox_max_age"));
        spinBox_max_age->setMinimum(1);
        spinBox_max_age->setMaximum(100);

        gridLayout_6->addWidget(spinBox_max_age, 0, 1, 1, 1);

        label_min_directions = new QLabel(groupBox_outlier_removal);
        label_min_directions->setObjectName(QStringLiteral("label_min_directions"));

        gridLayout_6->addWidget(label_min_directions, 1, 0, 1, 1);

        spinBox_min_directions = new QSpinBox(groupBox_outlier_removal);
        spinBox_min_directions->setObjectName(QStringLiteral("spinBox_min_directions"));
        spinBox_min_directions->setMinimum(1);
        spinBox_min_directions->setMaximum(100);

        gridLayout_6->addWidget(spinBox_min_directions, 1, 1, 1, 1);


        verticalLayout_4->addWidget(groupBox_outlier_removal);

        verticalSpacer_integration = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_integration);

        toolBox->addItem(page_integration, QStringLiteral("Integration"));

        verticalLayout->addWidget(toolBox);

        dockWidget->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dockWidget);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1008, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        MainWindow->setMenuBar(menuBar);
#ifndef QT_NO_SHORTCUT
        label_z_min->setBuddy(spinBox_z_min);
        label_x_min->setBuddy(spinBox_x_min);
        label_xyz_erode_size->setBuddy(spinBox_xyz_erode_size);
        label_y_min->setBuddy(spinBox_y_min);
        label_x_max->setBuddy(spinBox_x_max);
        label_y_max->setBuddy(spinBox_y_max);
        label_z_max->setBuddy(spinBox_z_max);
        label_s_max->setBuddy(spinBox_s_max);
        label_h_min->setBuddy(spinBox_h_min);
        label_h_max->setBuddy(spinBox_h_max);
        label_s_min->setBuddy(spinBox_s_min);
        label_v_min->setBuddy(spinBox_v_min);
        label_v_max->setBuddy(spinBox_v_max);
        label_hsv_dilate_size->setBuddy(spinBox_hsv_dilate_size);
        label_max_iterations->setBuddy(spinBox_max_iterations);
        label_min_overlap->setBuddy(spinBox_min_overlap);
        label_correspondence_rejection_factor->setBuddy(doubleSpinBox_correspondence_rejection_factor);
        label_correspondence_rejection_max_angle->setBuddy(spinBox_correspondence_rejection_max_angle);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(toolButton_1, toolButton_2);
        QWidget::setTabOrder(toolButton_2, toolButton_3);
        QWidget::setTabOrder(toolButton_3, toolButton_4);
        QWidget::setTabOrder(toolButton_4, toolButton_5);
        QWidget::setTabOrder(toolButton_5, toolButton_0);
        QWidget::setTabOrder(toolButton_0, spinBox_x_min);
        QWidget::setTabOrder(spinBox_x_min, spinBox_x_max);
        QWidget::setTabOrder(spinBox_x_max, spinBox_y_min);
        QWidget::setTabOrder(spinBox_y_min, spinBox_y_max);
        QWidget::setTabOrder(spinBox_y_max, spinBox_z_min);
        QWidget::setTabOrder(spinBox_z_min, spinBox_z_max);
        QWidget::setTabOrder(spinBox_z_max, spinBox_xyz_erode_size);
        QWidget::setTabOrder(spinBox_xyz_erode_size, spinBox_h_min);
        QWidget::setTabOrder(spinBox_h_min, spinBox_h_max);
        QWidget::setTabOrder(spinBox_h_max, spinBox_s_min);
        QWidget::setTabOrder(spinBox_s_min, spinBox_s_max);
        QWidget::setTabOrder(spinBox_s_max, spinBox_v_min);
        QWidget::setTabOrder(spinBox_v_min, spinBox_v_max);
        QWidget::setTabOrder(spinBox_v_max, spinBox_hsv_dilate_size);
        QWidget::setTabOrder(spinBox_hsv_dilate_size, checkBox_color_segmentation_inverted);
        QWidget::setTabOrder(checkBox_color_segmentation_inverted, checkBox_color_segmentation_enabled);
        QWidget::setTabOrder(checkBox_color_segmentation_enabled, lineEdit_epsilon);
        QWidget::setTabOrder(lineEdit_epsilon, spinBox_max_iterations);
        QWidget::setTabOrder(spinBox_max_iterations, spinBox_min_overlap);
        QWidget::setTabOrder(spinBox_min_overlap, lineEdit_max_fitness);
        QWidget::setTabOrder(lineEdit_max_fitness, doubleSpinBox_correspondence_rejection_factor);
        QWidget::setTabOrder(doubleSpinBox_correspondence_rejection_factor, spinBox_correspondence_rejection_max_angle);
        QWidget::setTabOrder(spinBox_correspondence_rejection_max_angle, lineEdit_max_squared_distance);
        QWidget::setTabOrder(lineEdit_max_squared_distance, spinBox_averaging_max_angle);
        QWidget::setTabOrder(spinBox_averaging_max_angle, spinBox_max_age);
        QWidget::setTabOrder(spinBox_max_age, spinBox_min_directions);

        toolBar->addAction(actionReset_camera);
        toolBar->addAction(actionToggle_coloring);
        toolBar->addAction(actionMesh_representation);
        toolBar->addAction(actionHelp);
        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionSaveAs);

        retranslateUi(MainWindow);
        QObject::connect(spinBox_x_min, SIGNAL(valueChanged(int)), MainWindow, SLOT(setXMin(int)));
        QObject::connect(spinBox_x_max, SIGNAL(valueChanged(int)), MainWindow, SLOT(setXMax(int)));
        QObject::connect(spinBox_y_min, SIGNAL(valueChanged(int)), MainWindow, SLOT(setYMin(int)));
        QObject::connect(spinBox_y_max, SIGNAL(valueChanged(int)), MainWindow, SLOT(setYMax(int)));
        QObject::connect(spinBox_z_min, SIGNAL(valueChanged(int)), MainWindow, SLOT(setZMin(int)));
        QObject::connect(spinBox_z_max, SIGNAL(valueChanged(int)), MainWindow, SLOT(setZMax(int)));
        QObject::connect(spinBox_h_min, SIGNAL(valueChanged(int)), MainWindow, SLOT(setHMin(int)));
        QObject::connect(spinBox_h_max, SIGNAL(valueChanged(int)), MainWindow, SLOT(setHMax(int)));
        QObject::connect(spinBox_s_min, SIGNAL(valueChanged(int)), MainWindow, SLOT(setSMin(int)));
        QObject::connect(spinBox_s_max, SIGNAL(valueChanged(int)), MainWindow, SLOT(setSMax(int)));
        QObject::connect(spinBox_v_min, SIGNAL(valueChanged(int)), MainWindow, SLOT(setVMin(int)));
        QObject::connect(spinBox_v_max, SIGNAL(valueChanged(int)), MainWindow, SLOT(setVMax(int)));
        QObject::connect(checkBox_color_segmentation_inverted, SIGNAL(toggled(bool)), MainWindow, SLOT(setColorSegmentationInverted(bool)));
        QObject::connect(spinBox_xyz_erode_size, SIGNAL(valueChanged(int)), MainWindow, SLOT(setXYZErodeSize(int)));
        QObject::connect(spinBox_hsv_dilate_size, SIGNAL(valueChanged(int)), MainWindow, SLOT(setHSVDilateSize(int)));
        QObject::connect(lineEdit_epsilon, SIGNAL(editingFinished()), MainWindow, SLOT(setEpsilon()));
        QObject::connect(spinBox_max_iterations, SIGNAL(valueChanged(int)), MainWindow, SLOT(setMaxIterations(int)));
        QObject::connect(spinBox_min_overlap, SIGNAL(valueChanged(int)), MainWindow, SLOT(setMinOverlap(int)));
        QObject::connect(lineEdit_max_fitness, SIGNAL(editingFinished()), MainWindow, SLOT(setMaxFitness()));
        QObject::connect(doubleSpinBox_correspondence_rejection_factor, SIGNAL(valueChanged(double)), MainWindow, SLOT(setCorrespondenceRejectionFactor(double)));
        QObject::connect(spinBox_correspondence_rejection_max_angle, SIGNAL(valueChanged(int)), MainWindow, SLOT(setCorrespondenceRejectionMaxAngle(int)));
        QObject::connect(lineEdit_max_squared_distance, SIGNAL(editingFinished()), MainWindow, SLOT(setMaxSquaredDistance()));
        QObject::connect(spinBox_averaging_max_angle, SIGNAL(valueChanged(int)), MainWindow, SLOT(setAveragingMaxAngle(int)));
        QObject::connect(spinBox_max_age, SIGNAL(valueChanged(int)), MainWindow, SLOT(setMaxAge(int)));
        QObject::connect(spinBox_min_directions, SIGNAL(valueChanged(int)), MainWindow, SLOT(setMinDirections(int)));
        QObject::connect(checkBox_color_segmentation_enabled, SIGNAL(toggled(bool)), MainWindow, SLOT(setColorSegmentationEnabled(bool)));

        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionHelp->setText(QApplication::translate("MainWindow", "Help", Q_NULLPTR));
        actionReset_camera->setText(QApplication::translate("MainWindow", "Reset camera", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionReset_camera->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Reset the camera (Shortcut: c)</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionToggle_coloring->setText(QApplication::translate("MainWindow", "Coloring", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionToggle_coloring->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Toggle the coloring (Shortcut: k):</p><p>- RGB</p><p>- One color</p><p>- Visibility-confidence</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionMesh_representation->setText(QApplication::translate("MainWindow", "Mesh representation", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionMesh_representation->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Toggle the display of the mesh (Shortcut: s):</p><p>- Points</p><p>- Wireframe</p><p>- Closed surface</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionSaveAs->setText(QApplication::translate("MainWindow", "Save As ...", Q_NULLPTR));
        actionSaveAs->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        toolButton_1->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Shows the unprocessed input data (Shortcut: 1).</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        toolButton_1->setText(QApplication::translate("MainWindow", "Input", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        toolButton_2->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Shows the processed input data (Shortcut: 2).</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        toolButton_2->setText(QApplication::translate("MainWindow", "Processed", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        toolButton_3->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Continuous registration (Shortcut: 3).</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        toolButton_3->setText(QApplication::translate("MainWindow", "Continuous registration", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        toolButton_4->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Registers new data once and returns to showing the processed input data (Shortcut: 4).</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        toolButton_4->setText(QApplication::translate("MainWindow", "Single registration", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        toolButton_5->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Shows the acquired model (Shortcut: 5).</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        toolButton_5->setText(QApplication::translate("MainWindow", "Show model", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        toolButton_6->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Removes all unfit points (Shortcut: 6)</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        toolButton_6->setText(QApplication::translate("MainWindow", "Clean", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        toolButton_0->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Reset the scanning pipeline (Shortcut: 0).</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        toolButton_0->setText(QApplication::translate("MainWindow", "Reset", Q_NULLPTR));
        dockWidget->setWindowTitle(QApplication::translate("MainWindow", "Settings", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        toolBox->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        groupBox_crop_xyz->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        groupBox_crop_xyz->setTitle(QApplication::translate("MainWindow", "Crop coordinates", Q_NULLPTR));
        label_z_min->setText(QApplication::translate("MainWindow", "z min", Q_NULLPTR));
        label_x_min->setText(QApplication::translate("MainWindow", "x min", Q_NULLPTR));
        label_xyz_erode_size->setText(QApplication::translate("MainWindow", "Erode size", Q_NULLPTR));
        label_y_min->setText(QApplication::translate("MainWindow", "y min", Q_NULLPTR));
        label_x_max->setText(QApplication::translate("MainWindow", "x max", Q_NULLPTR));
        label_y_max->setText(QApplication::translate("MainWindow", "y max", Q_NULLPTR));
        label_z_max->setText(QApplication::translate("MainWindow", "z max", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        groupBox_segment_hsv->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        groupBox_segment_hsv->setTitle(QApplication::translate("MainWindow", "Color segmentation", Q_NULLPTR));
        label_s_max->setText(QApplication::translate("MainWindow", "S max", Q_NULLPTR));
        label_h_min->setText(QApplication::translate("MainWindow", "H min", Q_NULLPTR));
        label_h_max->setText(QApplication::translate("MainWindow", "H max", Q_NULLPTR));
        label_s_min->setText(QApplication::translate("MainWindow", "S min", Q_NULLPTR));
        label_v_min->setText(QApplication::translate("MainWindow", "V min", Q_NULLPTR));
        label_v_max->setText(QApplication::translate("MainWindow", "V max", Q_NULLPTR));
        label_hsv_dilate_size->setText(QApplication::translate("MainWindow", "Dilate size", Q_NULLPTR));
        checkBox_color_segmentation_inverted->setText(QApplication::translate("MainWindow", "Inverted", Q_NULLPTR));
        checkBox_color_segmentation_enabled->setText(QApplication::translate("MainWindow", "Enabled", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_input_data_processing), QApplication::translate("MainWindow", "Input data processing", Q_NULLPTR));
        groupBox_convergence->setTitle(QApplication::translate("MainWindow", "Convergence and failure criteria", Q_NULLPTR));
        label_epsilon->setText(QApplication::translate("MainWindow", "Epsilon", Q_NULLPTR));
        label_max_iterations->setText(QApplication::translate("MainWindow", "Max iterations", Q_NULLPTR));
        label_min_overlap->setText(QApplication::translate("MainWindow", "Min overlap", Q_NULLPTR));
        label_max_fitness->setText(QApplication::translate("MainWindow", "Max fitness", Q_NULLPTR));
        groupBox_correspondence_rejection->setTitle(QApplication::translate("MainWindow", "Correspondence rejection", Q_NULLPTR));
        label_correspondence_rejection_factor->setText(QApplication::translate("MainWindow", "Factor", Q_NULLPTR));
        label_correspondence_rejection_max_angle->setText(QApplication::translate("MainWindow", "Max angle", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_registration), QApplication::translate("MainWindow", "Registration", Q_NULLPTR));
        groupBox_averaging->setTitle(QApplication::translate("MainWindow", "Averaging", Q_NULLPTR));
        label_max_squared_distance->setText(QApplication::translate("MainWindow", "Max squared distance", Q_NULLPTR));
        label_averaging_max_angle->setText(QApplication::translate("MainWindow", "Max angle", Q_NULLPTR));
        groupBox_outlier_removal->setTitle(QApplication::translate("MainWindow", "Outlier removal", Q_NULLPTR));
        label_max_age->setText(QApplication::translate("MainWindow", "Max age", Q_NULLPTR));
        label_min_directions->setText(QApplication::translate("MainWindow", "Min directions", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_integration), QApplication::translate("MainWindow", "Integration", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
