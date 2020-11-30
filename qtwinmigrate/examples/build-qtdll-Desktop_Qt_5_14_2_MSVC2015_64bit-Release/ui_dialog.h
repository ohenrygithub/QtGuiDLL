/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLineEdit *m_lE1;
    QLineEdit *m_lE2;
    QLineEdit *m_lEsum;
    QPushButton *m_pbCalc;
    QLabel *m_lbSum;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(400, 300);
        m_lE1 = new QLineEdit(Dialog);
        m_lE1->setObjectName(QString::fromUtf8("m_lE1"));
        m_lE1->setGeometry(QRect(30, 40, 71, 20));
        m_lE2 = new QLineEdit(Dialog);
        m_lE2->setObjectName(QString::fromUtf8("m_lE2"));
        m_lE2->setGeometry(QRect(140, 40, 61, 20));
        m_lEsum = new QLineEdit(Dialog);
        m_lEsum->setObjectName(QString::fromUtf8("m_lEsum"));
        m_lEsum->setGeometry(QRect(250, 40, 61, 20));
        m_pbCalc = new QPushButton(Dialog);
        m_pbCalc->setObjectName(QString::fromUtf8("m_pbCalc"));
        m_pbCalc->setGeometry(QRect(250, 140, 75, 23));
        m_lbSum = new QLabel(Dialog);
        m_lbSum->setObjectName(QString::fromUtf8("m_lbSum"));
        m_lbSum->setGeometry(QRect(60, 130, 81, 51));
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 40, 21, 16));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(220, 40, 16, 16));

        retranslateUi(Dialog);
        QObject::connect(m_pbCalc, SIGNAL(released()), Dialog, SLOT(on_m_pbCalc_clicked()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        m_pbCalc->setText(QCoreApplication::translate("Dialog", "\350\256\241\347\256\227", nullptr));
        m_lbSum->setText(QCoreApplication::translate("Dialog", "result:", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "+", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
