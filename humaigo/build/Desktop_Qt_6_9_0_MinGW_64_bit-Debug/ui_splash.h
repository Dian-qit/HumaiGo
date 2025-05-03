/********************************************************************************
** Form generated from reading UI file 'splash.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPLASH_H
#define UI_SPLASH_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Splash
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *loginPagePushButton;
    QPushButton *pushButton_4;
    QPushButton *signUpPagePushButton;
    QWidget *page_3;
    QFrame *frame;
    QLabel *label_3;
    QFrame *frame_2;
    QLineEdit *loginUsernameLineEdit;
    QLabel *label_5;
    QFrame *frame_3;
    QLineEdit *loginPasswordLineEdit;
    QPushButton *loginPushButton;
    QPushButton *pushButton_7;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_8;
    QPushButton *alreadySignedUpPagePushButton;
    QLabel *label_2;
    QPushButton *loginBackPushButton;
    QWidget *page_4;
    QFrame *frame_5;
    QLabel *label_10;
    QFrame *frame_10;
    QLineEdit *registerUsernameLineEdit;
    QLabel *label_11;
    QFrame *frame_11;
    QLineEdit *registerEmailLineEdit;
    QPushButton *signUpPushButton;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_19;
    QPushButton *alreadyLoginPushButton;
    QFrame *frame_12;
    QLineEdit *registerPasswordLineEdit;
    QLabel *label_13;
    QFrame *frame_13;
    QLineEdit *registerConfirmPasswordLineEdit;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_12;
    QPushButton *signUpBackPushButton;

    void setupUi(QMainWindow *Splash)
    {
        if (Splash->objectName().isEmpty())
            Splash->setObjectName("Splash");
        Splash->resize(301, 651);
        Splash->setStyleSheet(QString::fromUtf8("background-color:#e5c341;\n"
""));
        centralwidget = new QWidget(Splash);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(-10, 0, 311, 661));
        stackedWidget->setStyleSheet(QString::fromUtf8("#page_2 {\n"
"    background-color: #fff;\n"
"}\n"
"#page_3 {\n"
"    background-color: #e5c341;\n"
"}"));
        page = new QWidget();
        page->setObjectName("page");
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        pushButton = new QPushButton(page_2);
        pushButton->setObjectName("pushButton");
        pushButton->setEnabled(true);
        pushButton->setGeometry(QRect(70, 150, 181, 171));
        pushButton->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color:#fff;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/humaigoLogo-removebg-preview.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(180, 180));
        label = new QLabel(page_2);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 300, 221, 20));
        QFont font;
        font.setFamilies({QString::fromUtf8("Tahoma")});
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color:#000;\n"
"background-color:#fff;"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        loginPagePushButton = new QPushButton(page_2);
        loginPagePushButton->setObjectName("loginPagePushButton");
        loginPagePushButton->setGeometry(QRect(80, 350, 161, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Tahoma")});
        font1.setPointSize(11);
        font1.setBold(true);
        loginPagePushButton->setFont(font1);
        loginPagePushButton->setStyleSheet(QString::fromUtf8("color: #000;\n"
"border-radius: 20px;\n"
"background-color:#e5c341;\n"
""));
        pushButton_4 = new QPushButton(page_2);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(90, 450, 151, 21));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Tahoma")});
        font2.setPointSize(7);
        font2.setBold(true);
        pushButton_4->setFont(font2);
        pushButton_4->setStyleSheet(QString::fromUtf8("color:#000;\n"
"border:none;\n"
"background-color:#fff;"));
        signUpPagePushButton = new QPushButton(page_2);
        signUpPagePushButton->setObjectName("signUpPagePushButton");
        signUpPagePushButton->setGeometry(QRect(80, 400, 161, 41));
        signUpPagePushButton->setFont(font1);
        signUpPagePushButton->setStyleSheet(QString::fromUtf8("color: #000;\n"
"border-radius: 20px;\n"
"background-color:#f4e7c2;\n"
""));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        frame = new QFrame(page_3);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(9, 150, 301, 841));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 40px;"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 70, 191, 21));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Tahoma")});
        font3.setPointSize(8);
        font3.setWeight(QFont::ExtraBold);
        label_3->setFont(font3);
        label_3->setStyleSheet(QString::fromUtf8("color:#000;\n"
"font-weight:800;"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(20, 100, 261, 31));
        frame_2->setStyleSheet(QString::fromUtf8("border-radius:15px;\n"
"background-color: rgb(244, 231, 194);\n"
"color:#000;"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        loginUsernameLineEdit = new QLineEdit(frame_2);
        loginUsernameLineEdit->setObjectName("loginUsernameLineEdit");
        loginUsernameLineEdit->setGeometry(QRect(20, 0, 231, 28));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Tahoma")});
        font4.setPointSize(8);
        font4.setBold(false);
        loginUsernameLineEdit->setFont(font4);
        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(30, 140, 191, 21));
        label_5->setFont(font3);
        label_5->setStyleSheet(QString::fromUtf8("color:#000;\n"
"font-weight:800;"));
        label_5->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        frame_3 = new QFrame(frame);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(20, 170, 261, 31));
        frame_3->setStyleSheet(QString::fromUtf8("border-radius:15px;\n"
"background-color: rgb(244, 231, 194);\n"
"color:#000;"));
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        loginPasswordLineEdit = new QLineEdit(frame_3);
        loginPasswordLineEdit->setObjectName("loginPasswordLineEdit");
        loginPasswordLineEdit->setGeometry(QRect(20, 0, 231, 28));
        loginPasswordLineEdit->setFont(font4);
        loginPushButton = new QPushButton(frame);
        loginPushButton->setObjectName("loginPushButton");
        loginPushButton->setGeometry(QRect(70, 260, 161, 41));
        loginPushButton->setFont(font1);
        loginPushButton->setStyleSheet(QString::fromUtf8("color: #000;\n"
"border-radius: 20px;\n"
"background-color:#e5c341;\n"
""));
        pushButton_7 = new QPushButton(frame);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(80, 310, 151, 21));
        pushButton_7->setFont(font2);
        pushButton_7->setStyleSheet(QString::fromUtf8("color:#000;\n"
"border:none;\n"
"background-color:#fff;"));
        layoutWidget = new QWidget(frame);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(70, 420, 159, 14));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_8 = new QPushButton(layoutWidget);
        pushButton_8->setObjectName("pushButton_8");
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Tahoma")});
        font5.setPointSize(6);
        font5.setBold(true);
        pushButton_8->setFont(font5);
        pushButton_8->setStyleSheet(QString::fromUtf8("color:#000;\n"
"border:none;\n"
"background-color:#fff;"));

        horizontalLayout->addWidget(pushButton_8);

        alreadySignedUpPagePushButton = new QPushButton(layoutWidget);
        alreadySignedUpPagePushButton->setObjectName("alreadySignedUpPagePushButton");
        alreadySignedUpPagePushButton->setFont(font5);
        alreadySignedUpPagePushButton->setStyleSheet(QString::fromUtf8("color: rgb(64, 74, 255);\n"
"border:none;\n"
"background-color:#fff;"));

        horizontalLayout->addWidget(alreadySignedUpPagePushButton);

        label_2 = new QLabel(page_3);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 60, 191, 31));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Tahoma")});
        font6.setPointSize(14);
        font6.setBold(true);
        label_2->setFont(font6);
        label_2->setStyleSheet(QString::fromUtf8("color:#000;"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        loginBackPushButton = new QPushButton(page_3);
        loginBackPushButton->setObjectName("loginBackPushButton");
        loginBackPushButton->setGeometry(QRect(20, 20, 41, 29));
        loginBackPushButton->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(229, 195, 65);\n"
"border:none;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/back.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        loginBackPushButton->setIcon(icon1);
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        frame_5 = new QFrame(page_4);
        frame_5->setObjectName("frame_5");
        frame_5->setGeometry(QRect(9, 150, 301, 841));
        frame_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 40px;"));
        frame_5->setFrameShape(QFrame::Shape::StyledPanel);
        frame_5->setFrameShadow(QFrame::Shadow::Raised);
        label_10 = new QLabel(frame_5);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(30, 30, 191, 21));
        label_10->setFont(font3);
        label_10->setStyleSheet(QString::fromUtf8("color:#000;\n"
"font-weight:800;"));
        label_10->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        frame_10 = new QFrame(frame_5);
        frame_10->setObjectName("frame_10");
        frame_10->setGeometry(QRect(20, 60, 261, 31));
        frame_10->setStyleSheet(QString::fromUtf8("border-radius:15px;\n"
"background-color: rgb(244, 231, 194);\n"
"color:#000;"));
        frame_10->setFrameShape(QFrame::Shape::StyledPanel);
        frame_10->setFrameShadow(QFrame::Shadow::Raised);
        registerUsernameLineEdit = new QLineEdit(frame_10);
        registerUsernameLineEdit->setObjectName("registerUsernameLineEdit");
        registerUsernameLineEdit->setGeometry(QRect(20, 0, 231, 28));
        registerUsernameLineEdit->setFont(font4);
        label_11 = new QLabel(frame_5);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(30, 100, 191, 21));
        label_11->setFont(font3);
        label_11->setStyleSheet(QString::fromUtf8("color:#000;\n"
"font-weight:800;"));
        label_11->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        frame_11 = new QFrame(frame_5);
        frame_11->setObjectName("frame_11");
        frame_11->setGeometry(QRect(20, 130, 261, 31));
        frame_11->setStyleSheet(QString::fromUtf8("border-radius:15px;\n"
"background-color: rgb(244, 231, 194);\n"
"color:#000;"));
        frame_11->setFrameShape(QFrame::Shape::StyledPanel);
        frame_11->setFrameShadow(QFrame::Shadow::Raised);
        registerEmailLineEdit = new QLineEdit(frame_11);
        registerEmailLineEdit->setObjectName("registerEmailLineEdit");
        registerEmailLineEdit->setGeometry(QRect(20, 0, 231, 28));
        registerEmailLineEdit->setFont(font4);
        signUpPushButton = new QPushButton(frame_5);
        signUpPushButton->setObjectName("signUpPushButton");
        signUpPushButton->setGeometry(QRect(70, 360, 161, 41));
        signUpPushButton->setFont(font1);
        signUpPushButton->setStyleSheet(QString::fromUtf8("color: #000;\n"
"border-radius: 20px;\n"
"background-color:#e5c341;\n"
""));
        layoutWidget_3 = new QWidget(frame_5);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(70, 420, 169, 14));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButton_19 = new QPushButton(layoutWidget_3);
        pushButton_19->setObjectName("pushButton_19");
        pushButton_19->setFont(font5);
        pushButton_19->setStyleSheet(QString::fromUtf8("color:#000;\n"
"border:none;\n"
"background-color:#fff;"));

        horizontalLayout_4->addWidget(pushButton_19);

        alreadyLoginPushButton = new QPushButton(layoutWidget_3);
        alreadyLoginPushButton->setObjectName("alreadyLoginPushButton");
        alreadyLoginPushButton->setFont(font5);
        alreadyLoginPushButton->setStyleSheet(QString::fromUtf8("color: rgb(64, 74, 255);\n"
"border:none;\n"
"background-color:#fff;"));

        horizontalLayout_4->addWidget(alreadyLoginPushButton);

        frame_12 = new QFrame(frame_5);
        frame_12->setObjectName("frame_12");
        frame_12->setGeometry(QRect(20, 200, 261, 31));
        frame_12->setStyleSheet(QString::fromUtf8("border-radius:15px;\n"
"background-color: rgb(244, 231, 194);\n"
"color:#000;"));
        frame_12->setFrameShape(QFrame::Shape::StyledPanel);
        frame_12->setFrameShadow(QFrame::Shadow::Raised);
        registerPasswordLineEdit = new QLineEdit(frame_12);
        registerPasswordLineEdit->setObjectName("registerPasswordLineEdit");
        registerPasswordLineEdit->setGeometry(QRect(20, 0, 231, 28));
        registerPasswordLineEdit->setFont(font4);
        label_13 = new QLabel(frame_5);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(30, 170, 191, 21));
        label_13->setFont(font3);
        label_13->setStyleSheet(QString::fromUtf8("color:#000;\n"
"font-weight:800;"));
        label_13->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        frame_13 = new QFrame(frame_5);
        frame_13->setObjectName("frame_13");
        frame_13->setGeometry(QRect(20, 270, 261, 31));
        frame_13->setStyleSheet(QString::fromUtf8("border-radius:15px;\n"
"background-color: rgb(244, 231, 194);\n"
"color:#000;"));
        frame_13->setFrameShape(QFrame::Shape::StyledPanel);
        frame_13->setFrameShadow(QFrame::Shadow::Raised);
        registerConfirmPasswordLineEdit = new QLineEdit(frame_13);
        registerConfirmPasswordLineEdit->setObjectName("registerConfirmPasswordLineEdit");
        registerConfirmPasswordLineEdit->setGeometry(QRect(20, 0, 231, 28));
        registerConfirmPasswordLineEdit->setFont(font4);
        label_14 = new QLabel(frame_5);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(30, 240, 191, 21));
        label_14->setFont(font3);
        label_14->setStyleSheet(QString::fromUtf8("color:#000;\n"
"font-weight:800;"));
        label_14->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label_15 = new QLabel(frame_5);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(50, 320, 191, 31));
        label_15->setFont(font5);
        label_15->setStyleSheet(QString::fromUtf8("color:#000;"));
        label_15->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_12 = new QLabel(page_4);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(60, 60, 191, 31));
        label_12->setFont(font6);
        label_12->setStyleSheet(QString::fromUtf8("color:#000;"));
        label_12->setAlignment(Qt::AlignmentFlag::AlignCenter);
        signUpBackPushButton = new QPushButton(page_4);
        signUpBackPushButton->setObjectName("signUpBackPushButton");
        signUpBackPushButton->setGeometry(QRect(20, 20, 41, 29));
        signUpBackPushButton->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(229, 195, 65);\n"
"border:none;"));
        signUpBackPushButton->setIcon(icon1);
        stackedWidget->addWidget(page_4);
        Splash->setCentralWidget(centralwidget);

        retranslateUi(Splash);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Splash);
    } // setupUi

    void retranslateUi(QMainWindow *Splash)
    {
        Splash->setWindowTitle(QCoreApplication::translate("Splash", "Splash", nullptr));
        pushButton->setText(QString());
        label->setText(QCoreApplication::translate("Splash", "Right Moisture, Rice\342\200\231s Future!", nullptr));
        loginPagePushButton->setText(QCoreApplication::translate("Splash", "Log in", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Splash", "Forgot password?", nullptr));
        signUpPagePushButton->setText(QCoreApplication::translate("Splash", "Sign up", nullptr));
        label_3->setText(QCoreApplication::translate("Splash", "Username or Email", nullptr));
        loginUsernameLineEdit->setText(QString());
        label_5->setText(QCoreApplication::translate("Splash", "Password", nullptr));
        loginPasswordLineEdit->setText(QString());
        loginPushButton->setText(QCoreApplication::translate("Splash", "Log in", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Splash", "Forgot password?", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Splash", "Dont have an account?", nullptr));
        alreadySignedUpPagePushButton->setText(QCoreApplication::translate("Splash", "Sign Up", nullptr));
        label_2->setText(QCoreApplication::translate("Splash", "Welcome", nullptr));
        loginBackPushButton->setText(QString());
        label_10->setText(QCoreApplication::translate("Splash", "Username", nullptr));
        registerUsernameLineEdit->setText(QString());
        label_11->setText(QCoreApplication::translate("Splash", "Email", nullptr));
        registerEmailLineEdit->setText(QString());
        signUpPushButton->setText(QCoreApplication::translate("Splash", "Sign Up", nullptr));
        pushButton_19->setText(QCoreApplication::translate("Splash", "Already had an account?", nullptr));
        alreadyLoginPushButton->setText(QCoreApplication::translate("Splash", "Log in", nullptr));
        registerPasswordLineEdit->setText(QString());
        label_13->setText(QCoreApplication::translate("Splash", "Password", nullptr));
        registerConfirmPasswordLineEdit->setText(QString());
        label_14->setText(QCoreApplication::translate("Splash", "Confirm Password", nullptr));
        label_15->setText(QCoreApplication::translate("Splash", "By continuing, you agree to \n"
" Terms of Use and Privacy Policy.", nullptr));
        label_12->setText(QCoreApplication::translate("Splash", "Create Account", nullptr));
        signUpBackPushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Splash: public Ui_Splash {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPLASH_H
