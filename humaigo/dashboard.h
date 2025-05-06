#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QMainWindow>
#include <QDialog>
#include <QtSql>
#include <qmessagebox.h>
#include <qmessagebox.h>
#include <dashboard.h>
#include <QTimer>
#include <QtCore>
#include <QtGui>
#include <splash.h>



namespace Ui {
class dashboard;
}

class dashboard : public QMainWindow
{
    Q_OBJECT

public:
    explicit dashboard(int userID, QWidget *parent = nullptr);
    ~dashboard();




private slots:
    void on_sensor_clicked();



    void on_dashboardPushButton_clicked();

    void on_settingsPushButton_clicked();

    void on_notificationPushButton_clicked();

    void on_addDataPushButton_clicked();

    void on_editDataPushButton_clicked();

    void on_deletePushButton_clicked();

    void on_dashboardPushButton_2_clicked();

    void on_settingsPushButton_2_clicked();

    void on_settingsPushButton_3_clicked();

    void on_dashboardPushButton_3_clicked();

    void on_dashboardPushButton_4_clicked();

    void on_settingsPushButton_4_clicked();

    void on_dashboardPushButton_5_clicked();

    void on_settingsPushButton_5_clicked();

    void on_addDataPushButton_2_clicked();

    void on_editPushButton_clicked();

    void on_editPushButton_2_clicked();

    void on_notificationPushButton_2_clicked();

    void on_notificationPushButton_3_clicked();

    void on_notificationPushButton_4_clicked();

    void on_notificationPushButton_5_clicked();

    void on_settingsPushButton_6_clicked();

    void on_dashboardPushButton_6_clicked();

    void on_profilePushButton_clicked();

    void on_profilePushButton_2_clicked();

    void on_profilePushButton_3_clicked();

    void on_profilePushButton_4_clicked();

    void on_profilePushButton_5_clicked();

    void on_profilePushButton_7_clicked();

    void on_profilePushButton_6_clicked();

    void on_dashboardPushButton_7_clicked();

    void on_settingsPushButton_7_clicked();

    void on_notificationPushButton_7_clicked();

    void on_logoutPushButton_clicked();

    void on_logoutPushButton_2_clicked();

    void on_notificationPushButton_8_clicked();

    void on_settingsPushButton_8_clicked();

    void on_dashboardPushButton_8_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_profilePushButton_8_clicked();

private:
    Ui::dashboard *ui;
    QSqlDatabase DB_Connection;
    void loadUserData();
    QTimer *dataRefreshTimer;

    QTimer* notificationTimer;
    void updateNotifications();
    int userID;
    void loadDataToTable();
    QTimer* refreshTimer;

    QTimer *tableRefreshTimer;

    void loadUserProfile(int userId);
};

#endif // DASHBOARD_H
