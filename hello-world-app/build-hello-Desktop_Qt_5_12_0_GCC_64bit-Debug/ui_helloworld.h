/********************************************************************************
** Form generated from reading UI file 'helloworld.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELLOWORLD_H
#define UI_HELLOWORLD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_helloworld
{
public:

    void setupUi(QWidget *helloworld)
    {
        if (helloworld->objectName().isEmpty())
            helloworld->setObjectName(QString::fromUtf8("helloworld"));
        helloworld->resize(800, 600);

        retranslateUi(helloworld);

        QMetaObject::connectSlotsByName(helloworld);
    } // setupUi

    void retranslateUi(QWidget *helloworld)
    {
        helloworld->setWindowTitle(QApplication::translate("helloworld", "helloworld", nullptr));
    } // retranslateUi

};

namespace Ui {
    class helloworld: public Ui_helloworld {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELLOWORLD_H
