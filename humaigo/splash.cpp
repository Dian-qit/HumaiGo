#include "splash.h"
#include "ui_splash.h"

Splash::Splash(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Splash)
{
    ui->setupUi(this);
    this->setFixedSize(302, 650);

    DB_Connection = QSqlDatabase::addDatabase("QSQLITE");
    DB_Connection.setDatabaseName("C:/Users/My Acer NITRO/Documents/ccc102/humaigo/humaigoDb.sqlite");

    if (DB_Connection.open())
    {
        qDebug() << "Database Is Connected";
    }
    else
    {
        qDebug() << "Database Is Not Connected";
        qDebug() << "Error : " << DB_Connection.lastError();
    }
}

Splash::~Splash()
{
    delete ui;
}

void Splash::on_loginPagePushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void Splash::on_alreadyLoginPushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}



void Splash::on_signUpPagePushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void Splash::on_alreadySignedUpPagePushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void Splash::on_loginBackPushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void Splash::on_signUpBackPushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void Splash::on_signUpPushButton_clicked()
{
    QString UserName = ui->registerUsernameLineEdit->text();
    QString password = ui->registerPasswordLineEdit->text();
    QString confirmPassword = ui->registerConfirmPasswordLineEdit->text();

    if (password != confirmPassword) {
        QMessageBox::warning(this, "Password Mismatch", "Password and Confirm Password do not match.");
        DB_Connection.close();
        return;
    }

    DB_Connection.open();
    QSqlDatabase::database().transaction();


    QSqlQuery CheckUserName(DB_Connection);
    CheckUserName.prepare("SELECT * FROM LoginMasterList WHERE UserName = :username");
    CheckUserName.bindValue(":username", UserName);

    if (CheckUserName.exec())
    {
        int UserFindCount = 0;
        while (CheckUserName.next()) {
            UserFindCount++;
        }
        if (UserFindCount >= 1) {
            QMessageBox::information(this, "ambot", "Username is already used.");
            DB_Connection.close();
            return;
        }
    }


    QSqlQuery QueryInsertData(DB_Connection);
    QueryInsertData.prepare("INSERT INTO Users(username, password, email) "
                            "VALUES(:username, :password, :email)");
    QueryInsertData.bindValue(":username", ui->registerUsernameLineEdit->text());
    QueryInsertData.bindValue(":password", ui->registerPasswordLineEdit->text());
    QueryInsertData.bindValue(":email", ui->registerEmailLineEdit->text());


    if (!QueryInsertData.exec()) {
        qDebug() << "Error inserting data:" << QueryInsertData.lastError().text();
        QSqlDatabase::database().rollback();
        return;
    }

    QSqlDatabase::database().commit();
    DB_Connection.close();

    QMessageBox::information(this, "Registration Successful", "Your account has been created successfully!");




}


void Splash::on_loginPushButton_clicked()
{
    QString UserName = ui->loginUsernameLineEdit->text();
    QString Password = ui->loginPasswordLineEdit->text();

    if (UserName == "Admin" && Password == "Password") {
        QMessageBox::information(this, "Login", "Admin Login Success.");
        this->hide();
        dashboard *admin = new dashboard();
        admin->show();
        return;
    }

    if (!DB_Connection.isOpen()) {
        QMessageBox::warning(this, "Database Error", "Database is not connected.");
        return;
    }

    QSqlQuery QueryGetUser(DB_Connection);
    QueryGetUser.prepare("SELECT * FROM Users WHERE username = :username AND password = :password");
    QueryGetUser.bindValue(":username", UserName);
    QueryGetUser.bindValue(":password", Password);

    if (QueryGetUser.exec()) {
        int UserFindCount = 0;
        while (QueryGetUser.next()) {
            UserFindCount++;
        }

        if (UserFindCount == 1) {
            QMessageBox::information(this, "Login", "Login Success");
            this->hide();
            dashboard *admin = new dashboard();
            admin->show();
        } else {
            QMessageBox::warning(this, "Login", "Invalid username or password.");
        }
    } else {
        QMessageBox::critical(this, "Database Error", QueryGetUser.lastError().text());
    }
}
