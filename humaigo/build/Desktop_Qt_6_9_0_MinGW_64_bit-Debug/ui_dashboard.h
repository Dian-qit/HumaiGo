/********************************************************************************
** Form generated from reading UI file 'dashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD_H
#define UI_DASHBOARD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dashboard
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QFrame *frame;
    QPushButton *showRecordsPushButton;
    QLabel *remarksLabel;
    QLabel *suggestionLabel;
    QFrame *frame_5;
    QPushButton *dashboardPushButton;
    QPushButton *settingsPushButton;
    QPushButton *notificationPushButton;
    QPushButton *profilePushButton;
    QLabel *remarksLabel_2;
    QLabel *remarksLabel_3;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QFrame *frame_2;
    QLabel *moistureLabel;
    QLabel *label_5;
    QFrame *frame_3;
    QFrame *frame_4;
    QWidget *page_2;
    QPushButton *pushButton_7;
    QLabel *label_3;
    QLabel *label_4;
    QFrame *frame_7;
    QPushButton *showRecordsPushButton_2;
    QFrame *frame_8;
    QPushButton *dashboardPushButton_2;
    QPushButton *settingsPushButton_2;
    QPushButton *notificationPushButton_2;
    QPushButton *profilePushButton_2;
    QFrame *frame_9;
    QPushButton *addDataPushButton;
    QFrame *frame_10;
    QPushButton *editDataPushButton;
    QFrame *frame_11;
    QPushButton *deletePushButton;
    QFrame *frame_6;
    QLabel *moistureLabel_3;
    QLabel *label_7;
    QWidget *page_3;
    QFrame *frame_12;
    QFrame *frame_13;
    QPushButton *dashboardPushButton_3;
    QPushButton *settingsPushButton_3;
    QPushButton *notificationPushButton_3;
    QPushButton *profilePushButton_3;
    QTableWidget *tableWidget;
    QPushButton *addDataPushButton_2;
    QLineEdit *addDataMoistureLineEdit;
    QPushButton *pushButton_12;
    QLabel *label_8;
    QLabel *label_9;
    QWidget *page_4;
    QFrame *frame_14;
    QFrame *frame_15;
    QPushButton *dashboardPushButton_4;
    QPushButton *settingsPushButton_4;
    QPushButton *notificationPushButton_4;
    QPushButton *profilePushButton_4;
    QTableWidget *tableWidget_2;
    QPushButton *editPushButton;
    QLineEdit *editMoistureLineEdit;
    QLineEdit *editIDLineEdit;
    QPushButton *pushButton_26;
    QLabel *label_10;
    QLabel *label_11;
    QWidget *page_5;
    QFrame *frame_16;
    QFrame *frame_17;
    QPushButton *dashboardPushButton_5;
    QPushButton *settingsPushButton_5;
    QPushButton *notificationPushButton_5;
    QPushButton *profilePushButton_5;
    QTableWidget *tableWidget_3;
    QPushButton *editPushButton_2;
    QLineEdit *deleteIDLineEdit;
    QLabel *label_12;
    QLabel *label_13;
    QPushButton *pushButton_32;
    QWidget *page_6;
    QFrame *frame_18;
    QFrame *frame_19;
    QPushButton *dashboardPushButton_6;
    QPushButton *settingsPushButton_6;
    QPushButton *notificationPushButton_6;
    QPushButton *profilePushButton_7;
    QFrame *notificationLabel;
    QPushButton *notif1PushButton;
    QFrame *notificationLabel_2;
    QPushButton *notif2PushButton;
    QFrame *notificationLabel_3;
    QPushButton *notif3PushButton;
    QFrame *notificationLabel_4;
    QPushButton *notif4PushButton;
    QPushButton *pushButton_36;
    QLabel *label_14;
    QLabel *label_15;
    QWidget *page_7;
    QFrame *frame_20;
    QFrame *frame_21;
    QPushButton *dashboardPushButton_7;
    QPushButton *settingsPushButton_7;
    QPushButton *notificationPushButton_7;
    QPushButton *profilePushButton_6;
    QFrame *frame_22;
    QPushButton *pushButton_38;
    QPushButton *pushButton_39;
    QLabel *label_6;
    QFrame *frame_23;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QFrame *frame_24;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;

    void setupUi(QMainWindow *dashboard)
    {
        if (dashboard->objectName().isEmpty())
            dashboard->setObjectName("dashboard");
        dashboard->resize(301, 651);
        dashboard->setStyleSheet(QString::fromUtf8("background-color: #e5c341;"));
        centralwidget = new QWidget(dashboard);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 301, 671));
        page = new QWidget();
        page->setObjectName("page");
        frame = new QFrame(page);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 310, 301, 751));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 40px;"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        showRecordsPushButton = new QPushButton(frame);
        showRecordsPushButton->setObjectName("showRecordsPushButton");
        showRecordsPushButton->setGeometry(QRect(130, 450, 83, 29));
        showRecordsPushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        remarksLabel = new QLabel(frame);
        remarksLabel->setObjectName("remarksLabel");
        remarksLabel->setGeometry(QRect(100, 50, 211, 21));
        QFont font;
        font.setFamilies({QString::fromUtf8("Tahoma")});
        font.setPointSize(8);
        font.setWeight(QFont::ExtraBold);
        remarksLabel->setFont(font);
        remarksLabel->setStyleSheet(QString::fromUtf8("color:#000;\n"
"font-weight:800;"));
        remarksLabel->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        suggestionLabel = new QLabel(frame);
        suggestionLabel->setObjectName("suggestionLabel");
        suggestionLabel->setGeometry(QRect(100, 90, 211, 41));
        suggestionLabel->setFont(font);
        suggestionLabel->setStyleSheet(QString::fromUtf8("color:#000;\n"
"font-weight:800;\n"
"text-align: left;"));
        suggestionLabel->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        frame_5 = new QFrame(frame);
        frame_5->setObjectName("frame_5");
        frame_5->setGeometry(QRect(0, 260, 301, 231));
        frame_5->setStyleSheet(QString::fromUtf8("background-color:#f4e7c2;\n"
"border-radius:20px;"));
        frame_5->setFrameShape(QFrame::Shape::StyledPanel);
        frame_5->setFrameShadow(QFrame::Shadow::Raised);
        dashboardPushButton = new QPushButton(frame_5);
        dashboardPushButton->setObjectName("dashboardPushButton");
        dashboardPushButton->setGeometry(QRect(20, 10, 51, 51));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/dashboard.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        dashboardPushButton->setIcon(icon);
        dashboardPushButton->setIconSize(QSize(43, 43));
        settingsPushButton = new QPushButton(frame_5);
        settingsPushButton->setObjectName("settingsPushButton");
        settingsPushButton->setGeometry(QRect(90, 10, 51, 51));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/settings.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        settingsPushButton->setIcon(icon1);
        settingsPushButton->setIconSize(QSize(40, 40));
        notificationPushButton = new QPushButton(frame_5);
        notificationPushButton->setObjectName("notificationPushButton");
        notificationPushButton->setGeometry(QRect(160, 10, 51, 51));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/image/notification.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        notificationPushButton->setIcon(icon2);
        notificationPushButton->setIconSize(QSize(40, 40));
        profilePushButton = new QPushButton(frame_5);
        profilePushButton->setObjectName("profilePushButton");
        profilePushButton->setGeometry(QRect(230, 10, 51, 51));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/image/profile.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        profilePushButton->setIcon(icon3);
        profilePushButton->setIconSize(QSize(30, 30));
        remarksLabel_2 = new QLabel(frame);
        remarksLabel_2->setObjectName("remarksLabel_2");
        remarksLabel_2->setGeometry(QRect(10, 50, 71, 21));
        remarksLabel_2->setFont(font);
        remarksLabel_2->setStyleSheet(QString::fromUtf8("color:#000;\n"
"font-weight:800;"));
        remarksLabel_2->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        remarksLabel_3 = new QLabel(frame);
        remarksLabel_3->setObjectName("remarksLabel_3");
        remarksLabel_3->setGeometry(QRect(10, 100, 91, 21));
        remarksLabel_3->setFont(font);
        remarksLabel_3->setStyleSheet(QString::fromUtf8("color:#000;\n"
"font-weight:800;"));
        remarksLabel_3->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label = new QLabel(page);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 30, 201, 20));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Tahoma")});
        font1.setPointSize(10);
        font1.setBold(true);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color:#000;\n"
"border:none;"));
        label->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label_2 = new QLabel(page);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 50, 141, 20));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Tahoma")});
        font2.setPointSize(8);
        font2.setBold(false);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color:#000;\n"
"border:none;"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        pushButton = new QPushButton(page);
        pushButton->setObjectName("pushButton");
        pushButton->setEnabled(true);
        pushButton->setGeometry(QRect(240, 30, 41, 51));
        pushButton->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgb(229, 195, 65);"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/image/humaigoLogo-removebg-preview.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton->setIcon(icon4);
        pushButton->setIconSize(QSize(50, 50));
        frame_2 = new QFrame(page);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(20, 90, 231, 91));
        frame_2->setStyleSheet(QString::fromUtf8("border-radius:25px;\n"
"background-color:#fff;\n"
"color:#000;"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        moistureLabel = new QLabel(frame_2);
        moistureLabel->setObjectName("moistureLabel");
        moistureLabel->setGeometry(QRect(20, 20, 91, 61));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Tahoma")});
        font3.setPointSize(18);
        font3.setWeight(QFont::ExtraBold);
        moistureLabel->setFont(font3);
        moistureLabel->setStyleSheet(QString::fromUtf8("color:#000;\n"
"font-weight:800;"));
        moistureLabel->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label_5 = new QLabel(frame_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 10, 101, 21));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Tahoma")});
        font4.setPointSize(7);
        font4.setWeight(QFont::ExtraBold);
        label_5->setFont(font4);
        label_5->setStyleSheet(QString::fromUtf8("color:#000;\n"
"font-weight:800;"));
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);
        frame_3 = new QFrame(page);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(20, 190, 111, 91));
        frame_3->setStyleSheet(QString::fromUtf8("border-radius:25px;\n"
"background-color:#fff;\n"
"color:#000;"));
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        frame_4 = new QFrame(page);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(140, 190, 111, 91));
        frame_4->setStyleSheet(QString::fromUtf8("border-radius:25px;\n"
"background-color:#fff;\n"
"color:#000;"));
        frame_4->setFrameShape(QFrame::Shape::StyledPanel);
        frame_4->setFrameShadow(QFrame::Shadow::Raised);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        pushButton_7 = new QPushButton(page_2);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setEnabled(true);
        pushButton_7->setGeometry(QRect(240, 30, 41, 51));
        pushButton_7->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgb(229, 195, 65);"));
        pushButton_7->setIcon(icon4);
        pushButton_7->setIconSize(QSize(50, 50));
        label_3 = new QLabel(page_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 50, 141, 20));
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("color:#000;\n"
"border:none;"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label_4 = new QLabel(page_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 30, 201, 20));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color:#000;\n"
"border:none;"));
        label_4->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        frame_7 = new QFrame(page_2);
        frame_7->setObjectName("frame_7");
        frame_7->setGeometry(QRect(0, 220, 301, 501));
        frame_7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 40px;"));
        frame_7->setFrameShape(QFrame::Shape::StyledPanel);
        frame_7->setFrameShadow(QFrame::Shadow::Raised);
        showRecordsPushButton_2 = new QPushButton(frame_7);
        showRecordsPushButton_2->setObjectName("showRecordsPushButton_2");
        showRecordsPushButton_2->setGeometry(QRect(130, 450, 83, 29));
        showRecordsPushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        frame_8 = new QFrame(frame_7);
        frame_8->setObjectName("frame_8");
        frame_8->setGeometry(QRect(0, 350, 301, 231));
        frame_8->setStyleSheet(QString::fromUtf8("background-color:#f4e7c2;\n"
"border-radius:20px;"));
        frame_8->setFrameShape(QFrame::Shape::StyledPanel);
        frame_8->setFrameShadow(QFrame::Shadow::Raised);
        dashboardPushButton_2 = new QPushButton(frame_8);
        dashboardPushButton_2->setObjectName("dashboardPushButton_2");
        dashboardPushButton_2->setGeometry(QRect(20, 10, 51, 51));
        dashboardPushButton_2->setIcon(icon);
        dashboardPushButton_2->setIconSize(QSize(43, 43));
        settingsPushButton_2 = new QPushButton(frame_8);
        settingsPushButton_2->setObjectName("settingsPushButton_2");
        settingsPushButton_2->setGeometry(QRect(90, 10, 51, 51));
        settingsPushButton_2->setIcon(icon1);
        settingsPushButton_2->setIconSize(QSize(40, 40));
        notificationPushButton_2 = new QPushButton(frame_8);
        notificationPushButton_2->setObjectName("notificationPushButton_2");
        notificationPushButton_2->setGeometry(QRect(160, 10, 51, 51));
        notificationPushButton_2->setIcon(icon2);
        notificationPushButton_2->setIconSize(QSize(40, 40));
        profilePushButton_2 = new QPushButton(frame_8);
        profilePushButton_2->setObjectName("profilePushButton_2");
        profilePushButton_2->setGeometry(QRect(230, 10, 51, 51));
        profilePushButton_2->setIcon(icon3);
        profilePushButton_2->setIconSize(QSize(30, 30));
        frame_9 = new QFrame(frame_7);
        frame_9->setObjectName("frame_9");
        frame_9->setGeometry(QRect(10, 30, 271, 91));
        frame_9->setStyleSheet(QString::fromUtf8("background-color:#f4e7c2;\n"
"border-radius:20px;"));
        frame_9->setFrameShape(QFrame::Shape::StyledPanel);
        frame_9->setFrameShadow(QFrame::Shadow::Raised);
        addDataPushButton = new QPushButton(frame_9);
        addDataPushButton->setObjectName("addDataPushButton");
        addDataPushButton->setGeometry(QRect(10, 20, 251, 61));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Tahoma")});
        font5.setPointSize(12);
        font5.setBold(true);
        addDataPushButton->setFont(font5);
        addDataPushButton->setStyleSheet(QString::fromUtf8("color:#000;"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/image/add.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        addDataPushButton->setIcon(icon5);
        addDataPushButton->setIconSize(QSize(50, 50));
        frame_10 = new QFrame(frame_7);
        frame_10->setObjectName("frame_10");
        frame_10->setGeometry(QRect(10, 130, 271, 91));
        frame_10->setStyleSheet(QString::fromUtf8("background-color:#f4e7c2;\n"
"border-radius:20px;"));
        frame_10->setFrameShape(QFrame::Shape::StyledPanel);
        frame_10->setFrameShadow(QFrame::Shadow::Raised);
        editDataPushButton = new QPushButton(frame_10);
        editDataPushButton->setObjectName("editDataPushButton");
        editDataPushButton->setGeometry(QRect(10, 20, 251, 61));
        editDataPushButton->setFont(font5);
        editDataPushButton->setStyleSheet(QString::fromUtf8("color:#000;"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/image/edit.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        editDataPushButton->setIcon(icon6);
        editDataPushButton->setIconSize(QSize(50, 50));
        frame_11 = new QFrame(frame_7);
        frame_11->setObjectName("frame_11");
        frame_11->setGeometry(QRect(10, 230, 271, 91));
        frame_11->setStyleSheet(QString::fromUtf8("background-color:#f4e7c2;\n"
"border-radius:20px;"));
        frame_11->setFrameShape(QFrame::Shape::StyledPanel);
        frame_11->setFrameShadow(QFrame::Shadow::Raised);
        deletePushButton = new QPushButton(frame_11);
        deletePushButton->setObjectName("deletePushButton");
        deletePushButton->setGeometry(QRect(30, 20, 231, 61));
        deletePushButton->setFont(font5);
        deletePushButton->setStyleSheet(QString::fromUtf8("color:#000;"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/image/delete.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        deletePushButton->setIcon(icon7);
        deletePushButton->setIconSize(QSize(50, 50));
        frame_6 = new QFrame(page_2);
        frame_6->setObjectName("frame_6");
        frame_6->setGeometry(QRect(20, 110, 231, 91));
        frame_6->setStyleSheet(QString::fromUtf8("border-radius:25px;\n"
"background-color:#fff;\n"
"color:#000;"));
        frame_6->setFrameShape(QFrame::Shape::StyledPanel);
        frame_6->setFrameShadow(QFrame::Shadow::Raised);
        moistureLabel_3 = new QLabel(frame_6);
        moistureLabel_3->setObjectName("moistureLabel_3");
        moistureLabel_3->setGeometry(QRect(20, 20, 91, 61));
        moistureLabel_3->setFont(font3);
        moistureLabel_3->setStyleSheet(QString::fromUtf8("color:#000;\n"
"font-weight:800;"));
        moistureLabel_3->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label_7 = new QLabel(frame_6);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 10, 111, 21));
        label_7->setFont(font4);
        label_7->setStyleSheet(QString::fromUtf8("color:#000;\n"
"font-weight:800;"));
        label_7->setAlignment(Qt::AlignmentFlag::AlignCenter);
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        frame_12 = new QFrame(page_3);
        frame_12->setObjectName("frame_12");
        frame_12->setGeometry(QRect(0, 120, 301, 601));
        frame_12->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 40px;"));
        frame_12->setFrameShape(QFrame::Shape::StyledPanel);
        frame_12->setFrameShadow(QFrame::Shadow::Raised);
        frame_13 = new QFrame(frame_12);
        frame_13->setObjectName("frame_13");
        frame_13->setGeometry(QRect(0, 450, 301, 131));
        frame_13->setStyleSheet(QString::fromUtf8("background-color:#f4e7c2;\n"
"border-radius:20px;"));
        frame_13->setFrameShape(QFrame::Shape::StyledPanel);
        frame_13->setFrameShadow(QFrame::Shadow::Raised);
        dashboardPushButton_3 = new QPushButton(frame_13);
        dashboardPushButton_3->setObjectName("dashboardPushButton_3");
        dashboardPushButton_3->setGeometry(QRect(20, 10, 51, 51));
        dashboardPushButton_3->setIcon(icon);
        dashboardPushButton_3->setIconSize(QSize(43, 43));
        settingsPushButton_3 = new QPushButton(frame_13);
        settingsPushButton_3->setObjectName("settingsPushButton_3");
        settingsPushButton_3->setGeometry(QRect(90, 10, 51, 51));
        settingsPushButton_3->setIcon(icon1);
        settingsPushButton_3->setIconSize(QSize(40, 40));
        notificationPushButton_3 = new QPushButton(frame_13);
        notificationPushButton_3->setObjectName("notificationPushButton_3");
        notificationPushButton_3->setGeometry(QRect(160, 10, 51, 51));
        notificationPushButton_3->setIcon(icon2);
        notificationPushButton_3->setIconSize(QSize(40, 40));
        profilePushButton_3 = new QPushButton(frame_13);
        profilePushButton_3->setObjectName("profilePushButton_3");
        profilePushButton_3->setGeometry(QRect(230, 10, 51, 51));
        profilePushButton_3->setIcon(icon3);
        profilePushButton_3->setIconSize(QSize(30, 30));
        tableWidget = new QTableWidget(frame_12);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Tahoma")});
        font6.setPointSize(7);
        font6.setBold(true);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font6);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font6);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font6);
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(0, 0, 301, 341));
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Tahoma")});
        font7.setPointSize(7);
        tableWidget->setFont(font7);
        tableWidget->setStyleSheet(QString::fromUtf8("color:#000;\n"
"background-color: rgb(244, 231, 194);\n"
"border-radius:0;"));
        tableWidget->horizontalHeader()->setMinimumSectionSize(18);
        tableWidget->horizontalHeader()->setDefaultSectionSize(99);
        tableWidget->horizontalHeader()->setHighlightSections(true);
        addDataPushButton_2 = new QPushButton(frame_12);
        addDataPushButton_2->setObjectName("addDataPushButton_2");
        addDataPushButton_2->setGeometry(QRect(200, 380, 83, 29));
        QFont font8;
        font8.setFamilies({QString::fromUtf8("Tahoma")});
        font8.setBold(true);
        addDataPushButton_2->setFont(font8);
        addDataPushButton_2->setStyleSheet(QString::fromUtf8("color:#000;\n"
"background-color: rgb(244, 231, 194);\n"
"border-radius:10px;"));
        addDataMoistureLineEdit = new QLineEdit(frame_12);
        addDataMoistureLineEdit->setObjectName("addDataMoistureLineEdit");
        addDataMoistureLineEdit->setGeometry(QRect(20, 380, 171, 28));
        addDataMoistureLineEdit->setFont(font8);
        addDataMoistureLineEdit->setContextMenuPolicy(Qt::ContextMenuPolicy::PreventContextMenu);
        addDataMoistureLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(244, 231, 194);\n"
"color:#000;"));
        addDataMoistureLineEdit->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pushButton_12 = new QPushButton(page_3);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setEnabled(true);
        pushButton_12->setGeometry(QRect(240, 30, 41, 51));
        pushButton_12->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgb(229, 195, 65);"));
        pushButton_12->setIcon(icon4);
        pushButton_12->setIconSize(QSize(50, 50));
        label_8 = new QLabel(page_3);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 30, 201, 20));
        label_8->setFont(font1);
        label_8->setStyleSheet(QString::fromUtf8("color:#000;\n"
"border:none;"));
        label_8->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label_9 = new QLabel(page_3);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(10, 50, 141, 20));
        label_9->setFont(font2);
        label_9->setStyleSheet(QString::fromUtf8("color:#000;\n"
"border:none;"));
        label_9->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        frame_14 = new QFrame(page_4);
        frame_14->setObjectName("frame_14");
        frame_14->setGeometry(QRect(0, 120, 301, 601));
        frame_14->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 40px;"));
        frame_14->setFrameShape(QFrame::Shape::StyledPanel);
        frame_14->setFrameShadow(QFrame::Shadow::Raised);
        frame_15 = new QFrame(frame_14);
        frame_15->setObjectName("frame_15");
        frame_15->setGeometry(QRect(0, 450, 301, 131));
        frame_15->setStyleSheet(QString::fromUtf8("background-color:#f4e7c2;\n"
"border-radius:20px;"));
        frame_15->setFrameShape(QFrame::Shape::StyledPanel);
        frame_15->setFrameShadow(QFrame::Shadow::Raised);
        dashboardPushButton_4 = new QPushButton(frame_15);
        dashboardPushButton_4->setObjectName("dashboardPushButton_4");
        dashboardPushButton_4->setGeometry(QRect(20, 10, 51, 51));
        dashboardPushButton_4->setIcon(icon);
        dashboardPushButton_4->setIconSize(QSize(43, 43));
        settingsPushButton_4 = new QPushButton(frame_15);
        settingsPushButton_4->setObjectName("settingsPushButton_4");
        settingsPushButton_4->setGeometry(QRect(90, 10, 51, 51));
        settingsPushButton_4->setIcon(icon1);
        settingsPushButton_4->setIconSize(QSize(40, 40));
        notificationPushButton_4 = new QPushButton(frame_15);
        notificationPushButton_4->setObjectName("notificationPushButton_4");
        notificationPushButton_4->setGeometry(QRect(160, 10, 51, 51));
        notificationPushButton_4->setIcon(icon2);
        notificationPushButton_4->setIconSize(QSize(40, 40));
        profilePushButton_4 = new QPushButton(frame_15);
        profilePushButton_4->setObjectName("profilePushButton_4");
        profilePushButton_4->setGeometry(QRect(230, 10, 51, 51));
        profilePushButton_4->setIcon(icon3);
        profilePushButton_4->setIconSize(QSize(30, 30));
        tableWidget_2 = new QTableWidget(frame_14);
        if (tableWidget_2->columnCount() < 3)
            tableWidget_2->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font6);
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font6);
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font6);
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        tableWidget_2->setObjectName("tableWidget_2");
        tableWidget_2->setGeometry(QRect(0, 0, 301, 341));
        tableWidget_2->setFont(font7);
        tableWidget_2->setStyleSheet(QString::fromUtf8("color:#000;\n"
"background-color: rgb(244, 231, 194);\n"
"border-radius:0;"));
        tableWidget_2->horizontalHeader()->setMinimumSectionSize(18);
        tableWidget_2->horizontalHeader()->setDefaultSectionSize(99);
        tableWidget_2->horizontalHeader()->setHighlightSections(true);
        editPushButton = new QPushButton(frame_14);
        editPushButton->setObjectName("editPushButton");
        editPushButton->setGeometry(QRect(200, 380, 83, 29));
        editPushButton->setFont(font8);
        editPushButton->setStyleSheet(QString::fromUtf8("color:#000;\n"
"background-color: rgb(244, 231, 194);\n"
"border-radius:10px;"));
        editMoistureLineEdit = new QLineEdit(frame_14);
        editMoistureLineEdit->setObjectName("editMoistureLineEdit");
        editMoistureLineEdit->setGeometry(QRect(70, 380, 121, 28));
        editMoistureLineEdit->setFont(font8);
        editMoistureLineEdit->setContextMenuPolicy(Qt::ContextMenuPolicy::PreventContextMenu);
        editMoistureLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(244, 231, 194);\n"
"color:#000;"));
        editMoistureLineEdit->setAlignment(Qt::AlignmentFlag::AlignCenter);
        editIDLineEdit = new QLineEdit(frame_14);
        editIDLineEdit->setObjectName("editIDLineEdit");
        editIDLineEdit->setGeometry(QRect(10, 380, 51, 28));
        editIDLineEdit->setFont(font8);
        editIDLineEdit->setContextMenuPolicy(Qt::ContextMenuPolicy::PreventContextMenu);
        editIDLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(244, 231, 194);\n"
"color:#000;"));
        editIDLineEdit->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pushButton_26 = new QPushButton(page_4);
        pushButton_26->setObjectName("pushButton_26");
        pushButton_26->setEnabled(true);
        pushButton_26->setGeometry(QRect(240, 30, 41, 51));
        pushButton_26->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgb(229, 195, 65);"));
        pushButton_26->setIcon(icon4);
        pushButton_26->setIconSize(QSize(50, 50));
        label_10 = new QLabel(page_4);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(10, 50, 141, 20));
        label_10->setFont(font2);
        label_10->setStyleSheet(QString::fromUtf8("color:#000;\n"
"border:none;"));
        label_10->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label_11 = new QLabel(page_4);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(10, 30, 201, 20));
        label_11->setFont(font1);
        label_11->setStyleSheet(QString::fromUtf8("color:#000;\n"
"border:none;"));
        label_11->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        frame_16 = new QFrame(page_5);
        frame_16->setObjectName("frame_16");
        frame_16->setGeometry(QRect(0, 120, 301, 601));
        frame_16->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 40px;"));
        frame_16->setFrameShape(QFrame::Shape::StyledPanel);
        frame_16->setFrameShadow(QFrame::Shadow::Raised);
        frame_17 = new QFrame(frame_16);
        frame_17->setObjectName("frame_17");
        frame_17->setGeometry(QRect(0, 450, 301, 131));
        frame_17->setStyleSheet(QString::fromUtf8("background-color:#f4e7c2;\n"
"border-radius:20px;"));
        frame_17->setFrameShape(QFrame::Shape::StyledPanel);
        frame_17->setFrameShadow(QFrame::Shadow::Raised);
        dashboardPushButton_5 = new QPushButton(frame_17);
        dashboardPushButton_5->setObjectName("dashboardPushButton_5");
        dashboardPushButton_5->setGeometry(QRect(20, 10, 51, 51));
        dashboardPushButton_5->setStyleSheet(QString::fromUtf8(""));
        dashboardPushButton_5->setIcon(icon);
        dashboardPushButton_5->setIconSize(QSize(43, 43));
        settingsPushButton_5 = new QPushButton(frame_17);
        settingsPushButton_5->setObjectName("settingsPushButton_5");
        settingsPushButton_5->setGeometry(QRect(90, 10, 51, 51));
        settingsPushButton_5->setIcon(icon1);
        settingsPushButton_5->setIconSize(QSize(40, 40));
        notificationPushButton_5 = new QPushButton(frame_17);
        notificationPushButton_5->setObjectName("notificationPushButton_5");
        notificationPushButton_5->setGeometry(QRect(160, 10, 51, 51));
        notificationPushButton_5->setIcon(icon2);
        notificationPushButton_5->setIconSize(QSize(40, 40));
        profilePushButton_5 = new QPushButton(frame_17);
        profilePushButton_5->setObjectName("profilePushButton_5");
        profilePushButton_5->setGeometry(QRect(230, 10, 51, 51));
        profilePushButton_5->setIcon(icon3);
        profilePushButton_5->setIconSize(QSize(30, 30));
        tableWidget_3 = new QTableWidget(frame_16);
        if (tableWidget_3->columnCount() < 3)
            tableWidget_3->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setFont(font6);
        tableWidget_3->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setFont(font6);
        tableWidget_3->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setFont(font6);
        tableWidget_3->setHorizontalHeaderItem(2, __qtablewidgetitem8);
        tableWidget_3->setObjectName("tableWidget_3");
        tableWidget_3->setGeometry(QRect(0, 0, 301, 341));
        tableWidget_3->setFont(font7);
        tableWidget_3->setStyleSheet(QString::fromUtf8("color:#000;\n"
"background-color: rgb(244, 231, 194);\n"
"border-radius:0;"));
        tableWidget_3->horizontalHeader()->setMinimumSectionSize(18);
        tableWidget_3->horizontalHeader()->setDefaultSectionSize(100);
        tableWidget_3->horizontalHeader()->setHighlightSections(true);
        editPushButton_2 = new QPushButton(frame_16);
        editPushButton_2->setObjectName("editPushButton_2");
        editPushButton_2->setGeometry(QRect(200, 380, 83, 29));
        editPushButton_2->setFont(font8);
        editPushButton_2->setStyleSheet(QString::fromUtf8("color:#000;\n"
"background-color: rgb(244, 231, 194);\n"
"border-radius:10px;"));
        deleteIDLineEdit = new QLineEdit(frame_16);
        deleteIDLineEdit->setObjectName("deleteIDLineEdit");
        deleteIDLineEdit->setGeometry(QRect(20, 380, 171, 28));
        deleteIDLineEdit->setFont(font8);
        deleteIDLineEdit->setContextMenuPolicy(Qt::ContextMenuPolicy::PreventContextMenu);
        deleteIDLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(244, 231, 194);\n"
"color:#000;"));
        deleteIDLineEdit->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_12 = new QLabel(page_5);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(10, 30, 201, 20));
        label_12->setFont(font1);
        label_12->setStyleSheet(QString::fromUtf8("color:#000;\n"
"border:none;"));
        label_12->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label_13 = new QLabel(page_5);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(10, 50, 141, 20));
        label_13->setFont(font2);
        label_13->setStyleSheet(QString::fromUtf8("color:#000;\n"
"border:none;"));
        label_13->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        pushButton_32 = new QPushButton(page_5);
        pushButton_32->setObjectName("pushButton_32");
        pushButton_32->setEnabled(true);
        pushButton_32->setGeometry(QRect(240, 30, 41, 51));
        pushButton_32->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgb(229, 195, 65);"));
        pushButton_32->setIcon(icon4);
        pushButton_32->setIconSize(QSize(50, 50));
        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName("page_6");
        frame_18 = new QFrame(page_6);
        frame_18->setObjectName("frame_18");
        frame_18->setGeometry(QRect(0, 120, 301, 601));
        frame_18->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 40px;"));
        frame_18->setFrameShape(QFrame::Shape::StyledPanel);
        frame_18->setFrameShadow(QFrame::Shadow::Raised);
        frame_19 = new QFrame(frame_18);
        frame_19->setObjectName("frame_19");
        frame_19->setGeometry(QRect(0, 450, 301, 131));
        frame_19->setStyleSheet(QString::fromUtf8("background-color:#f4e7c2;\n"
"border-radius:20px;"));
        frame_19->setFrameShape(QFrame::Shape::StyledPanel);
        frame_19->setFrameShadow(QFrame::Shadow::Raised);
        dashboardPushButton_6 = new QPushButton(frame_19);
        dashboardPushButton_6->setObjectName("dashboardPushButton_6");
        dashboardPushButton_6->setGeometry(QRect(20, 10, 51, 51));
        dashboardPushButton_6->setStyleSheet(QString::fromUtf8(""));
        dashboardPushButton_6->setIcon(icon);
        dashboardPushButton_6->setIconSize(QSize(43, 43));
        settingsPushButton_6 = new QPushButton(frame_19);
        settingsPushButton_6->setObjectName("settingsPushButton_6");
        settingsPushButton_6->setGeometry(QRect(90, 10, 51, 51));
        settingsPushButton_6->setIcon(icon1);
        settingsPushButton_6->setIconSize(QSize(40, 40));
        notificationPushButton_6 = new QPushButton(frame_19);
        notificationPushButton_6->setObjectName("notificationPushButton_6");
        notificationPushButton_6->setGeometry(QRect(160, 10, 51, 51));
        notificationPushButton_6->setIcon(icon2);
        notificationPushButton_6->setIconSize(QSize(40, 40));
        profilePushButton_7 = new QPushButton(frame_19);
        profilePushButton_7->setObjectName("profilePushButton_7");
        profilePushButton_7->setGeometry(QRect(230, 10, 51, 51));
        profilePushButton_7->setIcon(icon3);
        profilePushButton_7->setIconSize(QSize(30, 30));
        notificationLabel = new QFrame(frame_18);
        notificationLabel->setObjectName("notificationLabel");
        notificationLabel->setGeometry(QRect(20, 30, 251, 61));
        notificationLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(244, 231, 194);\n"
"border-radius:10px;"));
        notificationLabel->setFrameShape(QFrame::Shape::StyledPanel);
        notificationLabel->setFrameShadow(QFrame::Shadow::Raised);
        notif1PushButton = new QPushButton(notificationLabel);
        notif1PushButton->setObjectName("notif1PushButton");
        notif1PushButton->setGeometry(QRect(30, 8, 191, 51));
        QFont font9;
        font9.setFamilies({QString::fromUtf8("Tahoma")});
        font9.setPointSize(8);
        font9.setBold(true);
        notif1PushButton->setFont(font9);
        notif1PushButton->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        notif1PushButton->setStyleSheet(QString::fromUtf8("color:#000; text-align: left;"));
        notificationLabel_2 = new QFrame(frame_18);
        notificationLabel_2->setObjectName("notificationLabel_2");
        notificationLabel_2->setGeometry(QRect(20, 100, 251, 61));
        notificationLabel_2->setStyleSheet(QString::fromUtf8("background-color: rgb(244, 231, 194);\n"
"border-radius:10px;"));
        notificationLabel_2->setFrameShape(QFrame::Shape::StyledPanel);
        notificationLabel_2->setFrameShadow(QFrame::Shadow::Raised);
        notif2PushButton = new QPushButton(notificationLabel_2);
        notif2PushButton->setObjectName("notif2PushButton");
        notif2PushButton->setGeometry(QRect(30, 0, 191, 61));
        notif2PushButton->setFont(font9);
        notif2PushButton->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        notif2PushButton->setStyleSheet(QString::fromUtf8("color:#000; text-align: left;"));
        notificationLabel_3 = new QFrame(frame_18);
        notificationLabel_3->setObjectName("notificationLabel_3");
        notificationLabel_3->setGeometry(QRect(20, 170, 251, 61));
        notificationLabel_3->setStyleSheet(QString::fromUtf8("background-color: rgb(244, 231, 194);\n"
"border-radius:10px;"));
        notificationLabel_3->setFrameShape(QFrame::Shape::StyledPanel);
        notificationLabel_3->setFrameShadow(QFrame::Shadow::Raised);
        notif3PushButton = new QPushButton(notificationLabel_3);
        notif3PushButton->setObjectName("notif3PushButton");
        notif3PushButton->setGeometry(QRect(30, 0, 191, 61));
        notif3PushButton->setFont(font9);
        notif3PushButton->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        notif3PushButton->setStyleSheet(QString::fromUtf8("color:#000; text-align: left;"));
        notificationLabel_4 = new QFrame(frame_18);
        notificationLabel_4->setObjectName("notificationLabel_4");
        notificationLabel_4->setGeometry(QRect(20, 240, 251, 61));
        notificationLabel_4->setStyleSheet(QString::fromUtf8("background-color: rgb(244, 231, 194);\n"
"border-radius:10px;"));
        notificationLabel_4->setFrameShape(QFrame::Shape::StyledPanel);
        notificationLabel_4->setFrameShadow(QFrame::Shadow::Raised);
        notif4PushButton = new QPushButton(notificationLabel_4);
        notif4PushButton->setObjectName("notif4PushButton");
        notif4PushButton->setGeometry(QRect(30, 0, 191, 61));
        notif4PushButton->setFont(font9);
        notif4PushButton->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        notif4PushButton->setStyleSheet(QString::fromUtf8("color:#000; text-align: left;"));
        pushButton_36 = new QPushButton(page_6);
        pushButton_36->setObjectName("pushButton_36");
        pushButton_36->setEnabled(true);
        pushButton_36->setGeometry(QRect(240, 30, 41, 51));
        pushButton_36->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgb(229, 195, 65);"));
        pushButton_36->setIcon(icon4);
        pushButton_36->setIconSize(QSize(50, 50));
        label_14 = new QLabel(page_6);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(10, 30, 201, 20));
        label_14->setFont(font1);
        label_14->setStyleSheet(QString::fromUtf8("color:#000;\n"
"border:none;"));
        label_14->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label_15 = new QLabel(page_6);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(10, 50, 141, 20));
        label_15->setFont(font2);
        label_15->setStyleSheet(QString::fromUtf8("color:#000;\n"
"border:none;"));
        label_15->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        stackedWidget->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName("page_7");
        frame_20 = new QFrame(page_7);
        frame_20->setObjectName("frame_20");
        frame_20->setGeometry(QRect(0, -60, 301, 891));
        frame_20->setStyleSheet(QString::fromUtf8("background-color:#efdb8d;\n"
"border-radius: 40px;"));
        frame_20->setFrameShape(QFrame::Shape::StyledPanel);
        frame_20->setFrameShadow(QFrame::Shadow::Raised);
        frame_21 = new QFrame(frame_20);
        frame_21->setObjectName("frame_21");
        frame_21->setGeometry(QRect(0, 630, 301, 111));
        frame_21->setStyleSheet(QString::fromUtf8("background-color:#fff;\n"
"border-radius:20px;"));
        frame_21->setFrameShape(QFrame::Shape::StyledPanel);
        frame_21->setFrameShadow(QFrame::Shadow::Raised);
        dashboardPushButton_7 = new QPushButton(frame_21);
        dashboardPushButton_7->setObjectName("dashboardPushButton_7");
        dashboardPushButton_7->setGeometry(QRect(20, 10, 51, 51));
        dashboardPushButton_7->setStyleSheet(QString::fromUtf8(""));
        dashboardPushButton_7->setIcon(icon);
        dashboardPushButton_7->setIconSize(QSize(43, 43));
        settingsPushButton_7 = new QPushButton(frame_21);
        settingsPushButton_7->setObjectName("settingsPushButton_7");
        settingsPushButton_7->setGeometry(QRect(90, 10, 51, 51));
        settingsPushButton_7->setIcon(icon1);
        settingsPushButton_7->setIconSize(QSize(40, 40));
        notificationPushButton_7 = new QPushButton(frame_21);
        notificationPushButton_7->setObjectName("notificationPushButton_7");
        notificationPushButton_7->setGeometry(QRect(160, 10, 51, 51));
        notificationPushButton_7->setIcon(icon2);
        notificationPushButton_7->setIconSize(QSize(40, 40));
        profilePushButton_6 = new QPushButton(frame_21);
        profilePushButton_6->setObjectName("profilePushButton_6");
        profilePushButton_6->setGeometry(QRect(230, 10, 51, 51));
        profilePushButton_6->setIcon(icon3);
        profilePushButton_6->setIconSize(QSize(30, 30));
        frame_22 = new QFrame(frame_20);
        frame_22->setObjectName("frame_22");
        frame_22->setGeometry(QRect(-110, 60, 411, 261));
        frame_22->setStyleSheet(QString::fromUtf8("background-image: url(:/image/bg.png);\n"
"border-radius: 0;\n"
""));
        frame_22->setFrameShape(QFrame::Shape::StyledPanel);
        frame_22->setFrameShadow(QFrame::Shadow::Raised);
        pushButton_38 = new QPushButton(frame_22);
        pushButton_38->setObjectName("pushButton_38");
        pushButton_38->setEnabled(true);
        pushButton_38->setGeometry(QRect(220, 0, 81, 81));
        pushButton_38->setStyleSheet(QString::fromUtf8("border:none;\n"
""));
        pushButton_38->setIcon(icon4);
        pushButton_38->setIconSize(QSize(60, 60));
        pushButton_39 = new QPushButton(frame_22);
        pushButton_39->setObjectName("pushButton_39");
        pushButton_39->setEnabled(true);
        pushButton_39->setGeometry(QRect(110, 70, 301, 111));
        pushButton_39->setStyleSheet(QString::fromUtf8("border:none;\n"
""));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/image/profile-circle.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_39->setIcon(icon8);
        pushButton_39->setIconSize(QSize(80, 80));
        label_6 = new QLabel(frame_22);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(210, 170, 111, 20));
        QFont font10;
        font10.setFamilies({QString::fromUtf8("Tahoma")});
        font10.setPointSize(11);
        font10.setBold(true);
        label_6->setFont(font10);
        label_6->setStyleSheet(QString::fromUtf8("color: #000;"));
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);
        frame_23 = new QFrame(frame_20);
        frame_23->setObjectName("frame_23");
        frame_23->setGeometry(QRect(30, 270, 241, 121));
        frame_23->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:30px;"));
        frame_23->setFrameShape(QFrame::Shape::StyledPanel);
        frame_23->setFrameShadow(QFrame::Shadow::Raised);
        layoutWidget = new QWidget(frame_23);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 60, 201, 37));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setFont(font8);
        pushButton_4->setStyleSheet(QString::fromUtf8("color:#000;\n"
"text-align:left;"));
        pushButton_4->setIcon(icon3);
        pushButton_4->setIconSize(QSize(25, 25));

        horizontalLayout_2->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setStyleSheet(QString::fromUtf8("text-align:right;"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/image/right-arrow-vector.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_5->setIcon(icon9);
        pushButton_5->setIconSize(QSize(30, 30));

        horizontalLayout_2->addWidget(pushButton_5);

        layoutWidget1 = new QWidget(frame_23);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(20, 20, 201, 37));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setFont(font8);
        pushButton_2->setStyleSheet(QString::fromUtf8("color:#000;\n"
"text-align:left;"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/image/location.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_2->setIcon(icon10);
        pushButton_2->setIconSize(QSize(35, 35));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(layoutWidget1);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setStyleSheet(QString::fromUtf8("text-align:right;"));
        pushButton_3->setIcon(icon9);
        pushButton_3->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(pushButton_3);

        frame_24 = new QFrame(frame_20);
        frame_24->setObjectName("frame_24");
        frame_24->setGeometry(QRect(30, 410, 241, 201));
        frame_24->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:30px;"));
        frame_24->setFrameShape(QFrame::Shape::StyledPanel);
        frame_24->setFrameShadow(QFrame::Shadow::Raised);
        layoutWidget_2 = new QWidget(frame_24);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(20, 20, 201, 37));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_8 = new QPushButton(layoutWidget_2);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setFont(font8);
        pushButton_8->setStyleSheet(QString::fromUtf8("color:#000;\n"
"text-align:left;"));
        pushButton_8->setIcon(icon2);
        pushButton_8->setIconSize(QSize(25, 25));

        horizontalLayout_3->addWidget(pushButton_8);

        pushButton_9 = new QPushButton(layoutWidget_2);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setStyleSheet(QString::fromUtf8("text-align:right;"));
        pushButton_9->setIcon(icon9);
        pushButton_9->setIconSize(QSize(30, 30));

        horizontalLayout_3->addWidget(pushButton_9);

        layoutWidget_3 = new QWidget(frame_24);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(20, 60, 201, 37));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButton_10 = new QPushButton(layoutWidget_3);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setFont(font8);
        pushButton_10->setStyleSheet(QString::fromUtf8("color:#000;\n"
"text-align:left;"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/image/password.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_10->setIcon(icon11);
        pushButton_10->setIconSize(QSize(25, 25));

        horizontalLayout_4->addWidget(pushButton_10);

        pushButton_11 = new QPushButton(layoutWidget_3);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setStyleSheet(QString::fromUtf8("text-align:right;"));
        pushButton_11->setIcon(icon9);
        pushButton_11->setIconSize(QSize(30, 30));

        horizontalLayout_4->addWidget(pushButton_11);

        layoutWidget_4 = new QWidget(frame_24);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(20, 100, 201, 37));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        pushButton_13 = new QPushButton(layoutWidget_4);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setFont(font8);
        pushButton_13->setStyleSheet(QString::fromUtf8("color:#000;\n"
"text-align:left;"));
        pushButton_13->setIcon(icon1);
        pushButton_13->setIconSize(QSize(25, 25));

        horizontalLayout_5->addWidget(pushButton_13);

        pushButton_14 = new QPushButton(layoutWidget_4);
        pushButton_14->setObjectName("pushButton_14");
        pushButton_14->setStyleSheet(QString::fromUtf8("text-align:right;"));
        pushButton_14->setIcon(icon9);
        pushButton_14->setIconSize(QSize(30, 30));

        horizontalLayout_5->addWidget(pushButton_14);

        layoutWidget_5 = new QWidget(frame_24);
        layoutWidget_5->setObjectName("layoutWidget_5");
        layoutWidget_5->setGeometry(QRect(20, 140, 201, 37));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        pushButton_15 = new QPushButton(layoutWidget_5);
        pushButton_15->setObjectName("pushButton_15");
        pushButton_15->setFont(font8);
        pushButton_15->setStyleSheet(QString::fromUtf8("color:#000;\n"
"text-align:left;"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/image/back.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_15->setIcon(icon12);
        pushButton_15->setIconSize(QSize(25, 25));

        horizontalLayout_6->addWidget(pushButton_15);

        pushButton_16 = new QPushButton(layoutWidget_5);
        pushButton_16->setObjectName("pushButton_16");
        pushButton_16->setStyleSheet(QString::fromUtf8("text-align:right;"));
        pushButton_16->setIcon(icon9);
        pushButton_16->setIconSize(QSize(30, 30));

        horizontalLayout_6->addWidget(pushButton_16);

        stackedWidget->addWidget(page_7);
        dashboard->setCentralWidget(centralwidget);

        retranslateUi(dashboard);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(dashboard);
    } // setupUi

    void retranslateUi(QMainWindow *dashboard)
    {
        dashboard->setWindowTitle(QCoreApplication::translate("dashboard", "MainWindow", nullptr));
        showRecordsPushButton->setText(QCoreApplication::translate("dashboard", "Show records", nullptr));
        remarksLabel->setText(QCoreApplication::translate("dashboard", "NORMAL", nullptr));
        suggestionLabel->setText(QCoreApplication::translate("dashboard", "Suggestion", nullptr));
        dashboardPushButton->setText(QString());
        settingsPushButton->setText(QString());
        notificationPushButton->setText(QString());
        profilePushButton->setText(QString());
        remarksLabel_2->setText(QCoreApplication::translate("dashboard", "REMARKS:", nullptr));
        remarksLabel_3->setText(QCoreApplication::translate("dashboard", "SUGGESTION:", nullptr));
        label->setText(QCoreApplication::translate("dashboard", "Ello, Welcome Back", nullptr));
        label_2->setText(QCoreApplication::translate("dashboard", "Good Morning", nullptr));
        pushButton->setText(QString());
        moistureLabel->setText(QCoreApplication::translate("dashboard", "15", nullptr));
        label_5->setText(QCoreApplication::translate("dashboard", "Rice Moisture", nullptr));
        pushButton_7->setText(QString());
        label_3->setText(QCoreApplication::translate("dashboard", "Wewe", nullptr));
        label_4->setText(QCoreApplication::translate("dashboard", "Settings", nullptr));
        showRecordsPushButton_2->setText(QCoreApplication::translate("dashboard", "Show records", nullptr));
        dashboardPushButton_2->setText(QString());
        settingsPushButton_2->setText(QString());
        notificationPushButton_2->setText(QString());
        profilePushButton_2->setText(QString());
        addDataPushButton->setText(QCoreApplication::translate("dashboard", "Add Data", nullptr));
        editDataPushButton->setText(QCoreApplication::translate("dashboard", "Edit Data", nullptr));
        deletePushButton->setText(QCoreApplication::translate("dashboard", "Delete Data", nullptr));
        moistureLabel_3->setText(QCoreApplication::translate("dashboard", "15", nullptr));
        label_7->setText(QCoreApplication::translate("dashboard", "Data Recorded", nullptr));
        dashboardPushButton_3->setText(QString());
        settingsPushButton_3->setText(QString());
        notificationPushButton_3->setText(QString());
        profilePushButton_3->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("dashboard", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("dashboard", "DATE and TIME", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("dashboard", "MOISTURE", nullptr));
        addDataPushButton_2->setText(QCoreApplication::translate("dashboard", "Save", nullptr));
        addDataMoistureLineEdit->setText(QCoreApplication::translate("dashboard", "Moisture Value", nullptr));
        pushButton_12->setText(QString());
        label_8->setText(QCoreApplication::translate("dashboard", "Add Data", nullptr));
        label_9->setText(QCoreApplication::translate("dashboard", "Wewe", nullptr));
        dashboardPushButton_4->setText(QString());
        settingsPushButton_4->setText(QString());
        notificationPushButton_4->setText(QString());
        profilePushButton_4->setText(QString());
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("dashboard", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("dashboard", "DATE and TIME", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("dashboard", "MOISTURE", nullptr));
        editPushButton->setText(QCoreApplication::translate("dashboard", "Save", nullptr));
        editMoistureLineEdit->setText(QCoreApplication::translate("dashboard", "Moisture Value", nullptr));
        editIDLineEdit->setText(QCoreApplication::translate("dashboard", "ID", nullptr));
        pushButton_26->setText(QString());
        label_10->setText(QCoreApplication::translate("dashboard", "Wewe", nullptr));
        label_11->setText(QCoreApplication::translate("dashboard", "Edit Data", nullptr));
        dashboardPushButton_5->setText(QString());
        settingsPushButton_5->setText(QString());
        notificationPushButton_5->setText(QString());
        profilePushButton_5->setText(QString());
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_3->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("dashboard", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_3->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("dashboard", "DATE and TIME", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_3->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("dashboard", "MOISTURE", nullptr));
        editPushButton_2->setText(QCoreApplication::translate("dashboard", "Save", nullptr));
        deleteIDLineEdit->setText(QCoreApplication::translate("dashboard", "ID", nullptr));
        label_12->setText(QCoreApplication::translate("dashboard", "Delete Data", nullptr));
        label_13->setText(QCoreApplication::translate("dashboard", "Wewe", nullptr));
        pushButton_32->setText(QString());
        dashboardPushButton_6->setText(QString());
        settingsPushButton_6->setText(QString());
        notificationPushButton_6->setText(QString());
        profilePushButton_7->setText(QString());
        notif1PushButton->setText(QCoreApplication::translate("dashboard", "PushButton", nullptr));
        notif2PushButton->setText(QCoreApplication::translate("dashboard", "PushButton", nullptr));
        notif3PushButton->setText(QCoreApplication::translate("dashboard", "PushButton", nullptr));
        notif4PushButton->setText(QCoreApplication::translate("dashboard", "PushButton", nullptr));
        pushButton_36->setText(QString());
        label_14->setText(QCoreApplication::translate("dashboard", "Notifications", nullptr));
        label_15->setText(QCoreApplication::translate("dashboard", "Wewe", nullptr));
        dashboardPushButton_7->setText(QString());
        settingsPushButton_7->setText(QString());
        notificationPushButton_7->setText(QString());
        profilePushButton_6->setText(QString());
        pushButton_38->setText(QString());
        pushButton_39->setText(QString());
        label_6->setText(QCoreApplication::translate("dashboard", "Mang Juan", nullptr));
        pushButton_4->setText(QCoreApplication::translate("dashboard", "My Profile ", nullptr));
        pushButton_5->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("dashboard", "My Address ", nullptr));
        pushButton_3->setText(QString());
        pushButton_8->setText(QCoreApplication::translate("dashboard", "Notification", nullptr));
        pushButton_9->setText(QString());
        pushButton_10->setText(QCoreApplication::translate("dashboard", "Password", nullptr));
        pushButton_11->setText(QString());
        pushButton_13->setText(QCoreApplication::translate("dashboard", "Settings", nullptr));
        pushButton_14->setText(QString());
        pushButton_15->setText(QCoreApplication::translate("dashboard", "Logout", nullptr));
        pushButton_16->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class dashboard: public Ui_dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
