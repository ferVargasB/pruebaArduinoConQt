#ifndef APLICACION_H
#define APLICACION_H

#include <QDialog>
#include <QSerialPort>

namespace Ui {
class Aplicacion;
}

class Aplicacion : public QDialog
{
    Q_OBJECT

public:
    explicit Aplicacion(QWidget *parent = 0);
    ~Aplicacion();

private:
    Ui::Aplicacion *ui;
    QSerialPort *dispositivo;
};

#endif // APLICACION_H
