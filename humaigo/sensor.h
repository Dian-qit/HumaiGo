#ifndef SENSOR_H
#define SENSOR_H

#include <QDialog>

namespace Ui {
class sensor;
}

class sensor : public QDialog
{
    Q_OBJECT

public:
    explicit sensor(QWidget *parent = nullptr);
    ~sensor();

private:
    Ui::sensor *ui;
};

#endif // SENSOR_H
