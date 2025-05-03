#ifndef SPLASH_H
#define SPLASH_H

#include <QMainWindow>
#include <QDialog>
#include <QtSql>
#include <qmessagebox.h>
#include <qmessagebox.h>
#include <dashboard.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class Splash;
}
QT_END_NAMESPACE

class Splash : public QMainWindow
{
    Q_OBJECT

public:
    Splash(QWidget *parent = nullptr);
    ~Splash();

private slots:
    void on_loginPagePushButton_clicked();

    void on_alreadyLoginPushButton_clicked();

    void on_signUpPagePushButton_clicked();

    void on_alreadySignedUpPagePushButton_clicked();

    void on_loginBackPushButton_clicked();

    void on_signUpBackPushButton_clicked();

    void on_signUpPushButton_clicked();

    void on_loginPushButton_clicked();

private:
    Ui::Splash *ui;




    QSqlDatabase DB_Connection;
};
#endif // SPLASH_H
