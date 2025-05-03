#include "dashboard.h"
#include "ui_dashboard.h"


dashboard::dashboard(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::dashboard)
{
    ui->setupUi(this);


    connect(ui->notif1PushButton, &QPushButton::clicked, ui->notificationLabel, &QFrame::hide);
    connect(ui->notif2PushButton, &QPushButton::clicked, ui->notificationLabel_2, &QFrame::hide);
    connect(ui->notif3PushButton, &QPushButton::clicked, ui->notificationLabel_3, &QFrame::hide);
    connect(ui->notif4PushButton, &QPushButton::clicked, ui->notificationLabel_4, &QFrame::hide);

    loadUserData();

    dataRefreshTimer = new QTimer(this);
    connect(dataRefreshTimer, &QTimer::timeout, this, &dashboard::loadUserData);
    dataRefreshTimer->start(2000);


    // // Initialize notification timer
    // notificationTimer = new QTimer(this);
    // connect(notificationTimer, &QTimer::timeout, this, &dashboard::updateNotifications);
    // notificationTimer->start(3000); // Check every 3 seconds

    refreshTimer = new QTimer(this);
    connect(refreshTimer, &QTimer::timeout, this, &dashboard::updateNotifications);
    refreshTimer->start(5000);
    updateNotifications();


    tableRefreshTimer = new QTimer(this);
    connect(tableRefreshTimer, &QTimer::timeout, this, &dashboard::loadDataToTable);
    tableRefreshTimer->start(5000);  // Refresh tables every 5 seconds

    // Initial load of table data
    loadDataToTable();
}

dashboard::~dashboard()
{
    delete ui;


}



void dashboard::on_sensor_clicked()
{
    DB_Connection.open();
    QSqlDatabase::database().transaction();

    QSqlQuery QueryLoadData(DB_Connection);

}


void dashboard::loadUserData()
{
    // Check if the database connection already exists
    QSqlDatabase userDataDB = QSqlDatabase::database("userDataConnection");

    // If the connection does not exist, create it
    if (!userDataDB.isOpen()) {
        userDataDB = QSqlDatabase::addDatabase("QSQLITE", "userDataConnection");
        userDataDB.setDatabaseName("C:/Users/My Acer NITRO/Documents/ccc102/humaigo/humaigoDb.sqlite");

        if (!userDataDB.open()) {
            QMessageBox::warning(this, "Error", "Failed to connect to userData.sqlite");
            return;
        }
    }

    QSqlQuery query(userDataDB);
    query.prepare(R"(
        SELECT moisture, remarks
        FROM adminMoistureRecords
        ORDER BY id DESC
        LIMIT 1
    )");

    if (query.exec()) {
        if (query.next()) {
            double moisture = query.value("moisture").toDouble();
            QString dbRemarks = query.value("remarks").toString();

            ui->moistureLabel->setText(QString::number(moisture) + "%");

            QString suggestion;
            QString remarks;
            QString style;

            if (moisture < 14.0) {
                suggestion = "Normal";
                remarks = "No action needed.";
                style = "color: green; font-weight: bold;";
            }
            else if (moisture >= 14.0 && moisture <= 16.0) {
                suggestion = "Sundrying or Air drying.";
                remarks = "High.";
                style = "color: orange; font-weight: bold;";
            }
            else { // moisture > 16.0
                suggestion = "Use Mechanical Grain Dryer.";
                remarks = "Very High.";
                style = "color: red; font-weight: bold;";
            }

            // Update UI labels
            ui->suggestionLabel->setText(suggestion);
            ui->remarksLabel->setText("Status: " + remarks);

            // Apply styles
            ui->moistureLabel->setStyleSheet(style);
            ui->suggestionLabel->setStyleSheet(style);
            ui->remarksLabel->setStyleSheet(style);
        }
        else {
            QMessageBox::information(this, "No Data", "No moisture records found.");
        }
    } else {
        QMessageBox::warning(this, "Error", "Failed to retrieve moisture data: " + query.lastError().text());
    }
}



void dashboard::on_dashboardPushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);//dashboard
}


void dashboard::on_settingsPushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);//settings
}


void dashboard::on_notificationPushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);//notification
    updateNotifications();
}


void dashboard::on_addDataPushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);//add data
}


void dashboard::on_editDataPushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);//edit data
}


void dashboard::on_deletePushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);///Delete data
}


void dashboard::on_dashboardPushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void dashboard::on_dashboardPushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void dashboard::on_dashboardPushButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void dashboard::on_dashboardPushButton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void dashboard::on_settingsPushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void dashboard::on_settingsPushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void dashboard::on_settingsPushButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}



void dashboard::on_settingsPushButton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}



void dashboard::updateNotifications()
{
    qDebug() << "[updateNotifications] Called";

    // Open or check the database connection
    QSqlDatabase db = QSqlDatabase::database("userDataConnection");
    if (!db.isValid() || !db.isOpen()) {
        db = QSqlDatabase::addDatabase("QSQLITE", "userDataConnection");
        db.setDatabaseName("C:/Users/My Acer NITRO/Documents/ccc102/humaigo/humaigoDb.sqlite");

        if (!db.open()) {
            qDebug() << "Failed to open database!";
            return;
        }
    }

    // Prepare query to fetch the most recent 4 moisture records
    QSqlQuery query(db);
    query.prepare(R"(
        SELECT moisture, remarks
        FROM adminMoistureRecords
        ORDER BY id DESC
        LIMIT 4
    )");

    if (!query.exec()) {
        qDebug() << "Query failed:" << query.lastError().text();
        return;
    }

    // If no data is returned, just exit
    if (!query.next()) {
        qDebug() << "Query succeeded, but no rows returned!";
        return;
    }
    query.previous(); // rewind to the most recent data

    QVector<QPushButton*> buttons = {
        ui->notif1PushButton,
        ui->notif2PushButton,
        ui->notif3PushButton,
        ui->notif4PushButton
    };

    QVector<QFrame*> frames = {
        ui->notificationLabel,
        ui->notificationLabel_2,
        ui->notificationLabel_3,
        ui->notificationLabel_4
    };

    int index = 0;
    while (query.next() && index < 4) {
        double moisture = query.value("moisture").toDouble();
        QString remarks = query.value("remarks").toString();

        // Generate suggestion and style based on moisture level
        QString suggestion;
        QString style;
        if (moisture < 14.0) {
            suggestion = "Normal";
            style = "color: green; font-weight: bold;";
        } else if (moisture <= 16.0) {
            suggestion = "Sundrying or Air drying.";
            style = "color: orange; font-weight: bold;";
        } else {
            suggestion = "Use Mechanical Grain Dryer.";
            style = "color: red; font-weight: bold;";
        }

        // Create message with moisture, remarks, and suggestion
        QString message = QString("Moisture: %1% - %2\nSuggestion: %3").arg(moisture).arg(remarks).arg(suggestion);

        // Update button text and apply the style
        buttons[index]->setText(message);
        buttons[index]->setStyleSheet(style);
        frames[index]->show();

        index++;
    }

    // If there are less than 4 records, set remaining notifications to "No Data"
    while (index < 4) {
        buttons[index]->setText("No Data");
        buttons[index]->setStyleSheet("color: gray;");
        frames[index]->show();
        index++;
    }
}

void dashboard::loadDataToTable()
{
    qDebug() << "Loading data to tables...";

    QSqlDatabase db = QSqlDatabase::database("userDataConnection");
    if (!db.isValid() || !db.isOpen()) {
        db = QSqlDatabase::addDatabase("QSQLITE", "userDataConnection");
        db.setDatabaseName("C:/Users/My Acer NITRO/Documents/ccc102/humaigo/humaigoDb.sqlite");
        if (!db.open()) {
            QMessageBox::warning(this, "Error", "Failed to connect to database for table data");
            return;
        }
    }

    db.transaction();

    QStringList headers;
    headers << "ID" << "Date and Time" << "Moisture";

    ui->tableWidget->setColumnCount(3);
    ui->tableWidget->setHorizontalHeaderLabels(headers);

    ui->tableWidget_2->setColumnCount(3);
    ui->tableWidget_2->setHorizontalHeaderLabels(headers);

    ui->tableWidget_3->setColumnCount(3);
    ui->tableWidget_3->setHorizontalHeaderLabels(headers);

    auto loadTableData = [&](QTableWidget* table, const QString& queryStr) {
        QSqlQuery query(db);
        if (!query.exec(queryStr)) {
            qDebug() << "Error loading data:" << query.lastError().text();
            return;
        }

        int row = 0;
        table->setRowCount(0); // Clear existing rows

        while (query.next()) {
            table->insertRow(row);

            QString id = query.value("id").toString();
            QString dateTime = query.value("dateAndTime").toString();
            QString moisture = query.value("moisture").toString();

            table->setItem(row, 0, new QTableWidgetItem(id));
            table->setItem(row, 1, new QTableWidgetItem(dateTime));
            table->setItem(row, 2, new QTableWidgetItem(moisture));

            row++;
        }
    };

    // Load all records
    loadTableData(ui->tableWidget, R"(
        SELECT id, dateAndTime, moisture FROM adminMoistureRecords ORDER BY id DESC
    )");


    loadTableData(ui->tableWidget_2, R"(
        SELECT id, dateAndTime, moisture FROM adminMoistureRecords ORDER BY id DESC
    )");


    loadTableData(ui->tableWidget_3, R"(
        SELECT id, dateAndTime, moisture FROM adminMoistureRecords ORDER BY id DESC
    )");

    // Apply coloring based on moisture value
    for (QTableWidget* table : { ui->tableWidget, ui->tableWidget_2, ui->tableWidget_3 }) {
        for (int row = 0; row < table->rowCount(); ++row) {
            QTableWidgetItem* moistureItem = table->item(row, 2);
            if (!moistureItem) continue;

            bool ok;
            double moistureValue = moistureItem->text().toDouble(&ok);
            if (!ok) continue;

            if (moistureValue < 14.0) {
                moistureItem->setForeground(QBrush(QColor(0, 170, 0)));
                moistureItem->setFont(QFont("Arial", 10, QFont::Bold));
            } else if (moistureValue <= 16.0) {
                moistureItem->setForeground(QBrush(QColor(255, 140, 0)));
                moistureItem->setFont(QFont("Arial", 10, QFont::Bold));
            } else {
                moistureItem->setForeground(QBrush(QColor(255, 0, 0)));
                moistureItem->setFont(QFont("Arial", 10, QFont::Bold));
            }
        }
    }

    db.commit();
    qDebug() << "Finished loading data to tables";
}



// void dashboard::loadDataToTable()
// {
//     DB_Connection.open();
//     QSqlDatabase::database().transaction();

//     QSqlQuery QueryLoadData(DB_Connection);
//     QueryLoadData.prepare("Select * FROM adminMoistureRecords");
//     int NumberOfRowsToDisplay
// }




void dashboard::on_addDataPushButton_2_clicked()
{
    DB_Connection.open();
    QSqlDatabase::database().transaction();

    // Get the moisture value from lineEdit
    bool ok;
    double moisture = ui->addDataMoistureLineEdit->text().toDouble(&ok);

    // Determine remarks based on moisture level
    QString remarks;
    if (!ok) {
        // Invalid moisture value
        remarks = "Invalid";
    } else if (moisture < 14.0) {
        remarks = "Normal";
    } else if (moisture >= 14.0 && moisture <= 16.0) {
        remarks = "High";
    } else { // moisture > 16.0
        remarks = "Very High";
    }

    // Get current date and time
    QDateTime currentDateTime = QDateTime::currentDateTime();
    // Format date as MM/dd/yyyy h:mma
    QString formattedDateTime = currentDateTime.toString("MM/dd/yyyy h:mma");

    QSqlQuery QueryInsertData(DB_Connection);
    QueryInsertData.prepare("INSERT INTO adminMoistureRecords (dateAndTime, moisture, remarks) "
                            "VALUES (:dateAndTime, :moisture, :remarks)");

    QueryInsertData.bindValue(":dateAndTime", formattedDateTime);
    QueryInsertData.bindValue(":moisture", moisture);
    QueryInsertData.bindValue(":remarks", remarks);

    if (!QueryInsertData.exec()) {
        qDebug() << "Error inserting data:" << QueryInsertData.lastError().text();
    } else {
        qDebug() << "Data inserted successfully!";
        // Optionally clear the input field after successful insertion
        ui->addDataMoistureLineEdit->clear();
    }

    QSqlDatabase::database().commit();
    DB_Connection.close();
}


void dashboard::on_editPushButton_clicked()
{
    DB_Connection.open();
    QSqlDatabase::database().transaction();

    // Get moisture value
    bool ok;
    double moisture = ui->editMoistureLineEdit->text().toDouble(&ok);
    int recordID = ui->editIDLineEdit->text().toInt();

    // Determine remarks based on moisture level
    QString remarks;
    if (!ok) {
        remarks = "Invalid";
    } else if (moisture < 14.0) {
        remarks = "Normal";
    } else if (moisture >= 14.0 && moisture <= 16.0) {
        remarks = "High";
    } else { // moisture > 16.0
        remarks = "Very High";
    }

    // Get current date and time
    QDateTime currentDateTime = QDateTime::currentDateTime();
    QString formattedDateTime = currentDateTime.toString("MM/dd/yyyy h:mma");

    QSqlQuery QueryUpdateData(DB_Connection);
    QueryUpdateData.prepare("UPDATE adminMoistureRecords SET dateAndTime=:dateAndTime, moisture=:moisture, remarks=:remarks WHERE id=:id");
    QueryUpdateData.bindValue(":dateAndTime", formattedDateTime);
    QueryUpdateData.bindValue(":moisture", moisture);
    QueryUpdateData.bindValue(":remarks", remarks);
    QueryUpdateData.bindValue(":id", recordID);

    if (!QueryUpdateData.exec()) {
        qDebug() << "Error updating data:" << QueryUpdateData.lastError().text();
    } else {
        qDebug() << "Record updated successfully!";
    }

    QSqlDatabase::database().commit();
    DB_Connection.close();
}


void dashboard::on_editPushButton_2_clicked()
{
    DB_Connection.open();
    QSqlDatabase::database().transaction();

    // Get the ID to delete
    int recordID = ui->deleteIDLineEdit->text().toInt();

    QSqlQuery QueryDeleteData(DB_Connection);
    QueryDeleteData.prepare("DELETE FROM adminMoistureRecords WHERE id=:id");
    QueryDeleteData.bindValue(":id", recordID);

    if (!QueryDeleteData.exec()) {
        qDebug() << "Error deleting data:" << QueryDeleteData.lastError().text();
    } else {
        int rowsAffected = QueryDeleteData.numRowsAffected();
        if (rowsAffected > 0) {
            qDebug() << "Record deleted successfully!";
            // Clear the input field after successful deletion
            ui->deleteIDLineEdit->clear();
        } else {
            qDebug() << "No record found with ID:" << recordID;
        }
    }
    ui->deleteIDLineEdit->clear();
    QSqlDatabase::database().commit();
    DB_Connection.close();
}


void dashboard::on_notificationPushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);//notification
    updateNotifications();
}


void dashboard::on_notificationPushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);//notification
    updateNotifications();
}


void dashboard::on_notificationPushButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);//notification
    updateNotifications();
}


void dashboard::on_notificationPushButton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);//notification
    updateNotifications();
}





void dashboard::on_dashboardPushButton_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);//dashboard
}




void dashboard::on_settingsPushButton_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);//settings
}


void dashboard::on_profilePushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}


void dashboard::on_profilePushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}


void dashboard::on_profilePushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}


void dashboard::on_profilePushButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}


void dashboard::on_profilePushButton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}


void dashboard::on_profilePushButton_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}


void dashboard::on_profilePushButton_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}


void dashboard::on_dashboardPushButton_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);//dashboard
}


void dashboard::on_settingsPushButton_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);//settings
}


void dashboard::on_notificationPushButton_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);//notif
}
