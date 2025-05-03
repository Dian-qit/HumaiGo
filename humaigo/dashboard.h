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



namespace Ui {
class dashboard;
}

class dashboard : public QMainWindow
{
    Q_OBJECT

public:
    explicit dashboard(QWidget *parent = nullptr);
    ~dashboard();




private slots:
    void on_sensor_clicked();

    void on_showRecordsPushButton_clicked();

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

private:
    Ui::dashboard *ui;
    QSqlDatabase DB_Connection;
    void loadUserData();
    QTimer *dataRefreshTimer;

    QTimer* notificationTimer;
    void updateNotifications();

    void loadDataToTable();
    QTimer* refreshTimer;

    QTimer *tableRefreshTimer;
};

#endif // DASHBOARD_H
