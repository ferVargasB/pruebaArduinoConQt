#include "aplicacion.h"
#include "ui_aplicacion.h"

#include <QDebug>
#include <QSerialPort>
#include <QSerialPortInfo>

Aplicacion::Aplicacion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Aplicacion)
{
    ui->setupUi(this);
    dispositivo = new QSerialPort;
    qDebug() << "Número de dispositovos: " << QSerialPortInfo::availablePorts().length();
    for(auto item : QSerialPortInfo::availablePorts() ){
        if(item.hasVendorIdentifier())
            qDebug() << item.vendorIdentifier();
        qDebug() << "No hay ID del vendedor";
    }

}

Aplicacion::~Aplicacion()
{
    delete ui;
}
