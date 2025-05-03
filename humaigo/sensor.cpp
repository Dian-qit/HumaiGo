#include "sensor.h"
#include "ui_sensor.h"

sensor::sensor(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::sensor)
{
    ui->setupUi(this);
}

sensor::~sensor()
{
    delete ui;
}
