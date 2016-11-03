/********************************************************************************
** Form generated from reading UI file 'aplicacion.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APLICACION_H
#define UI_APLICACION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Aplicacion
{
public:

    void setupUi(QDialog *Aplicacion)
    {
        if (Aplicacion->objectName().isEmpty())
            Aplicacion->setObjectName(QStringLiteral("Aplicacion"));
        Aplicacion->resize(400, 300);

        retranslateUi(Aplicacion);

        QMetaObject::connectSlotsByName(Aplicacion);
    } // setupUi

    void retranslateUi(QDialog *Aplicacion)
    {
        Aplicacion->setWindowTitle(QApplication::translate("Aplicacion", "Aplicacion", 0));
    } // retranslateUi

};

namespace Ui {
    class Aplicacion: public Ui_Aplicacion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APLICACION_H
