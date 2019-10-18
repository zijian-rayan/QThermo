/********************************************************************************
** Form generated from reading UI file 'thsrv.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THSRV_H
#define UI_THSRV_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>

QT_BEGIN_NAMESPACE

class Ui_ThSrvClass
{
public:
    QSlider *m_thermo;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *m_send;
    QPushButton *killall;
    QListWidget *m_msg;

    void setupUi(QDialog *ThSrvClass)
    {
        if (ThSrvClass->objectName().isEmpty())
            ThSrvClass->setObjectName(QString::fromUtf8("ThSrvClass"));
        ThSrvClass->resize(737, 400);
        m_thermo = new QSlider(ThSrvClass);
        m_thermo->setObjectName(QString::fromUtf8("m_thermo"));
        m_thermo->setGeometry(QRect(40, 40, 501, 16));
        m_thermo->setMinimum(-50);
        m_thermo->setMaximum(100);
        m_thermo->setOrientation(Qt::Horizontal);
        m_thermo->setTickPosition(QSlider::TicksBelow);
        m_thermo->setTickInterval(25);
        label = new QLabel(ThSrvClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 50, 71, 31));
        label_2 = new QLabel(ThSrvClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(160, 50, 41, 31));
        label_3 = new QLabel(ThSrvClass);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(520, 50, 71, 31));
        m_send = new QPushButton(ThSrvClass);
        m_send->setObjectName(QString::fromUtf8("m_send"));
        m_send->setGeometry(QRect(614, 22, 91, 31));
        killall = new QPushButton(ThSrvClass);
        killall->setObjectName(QString::fromUtf8("killall"));
        killall->setGeometry(QRect(614, 70, 91, 31));
        m_msg = new QListWidget(ThSrvClass);
        m_msg->setObjectName(QString::fromUtf8("m_msg"));
        m_msg->setGeometry(QRect(30, 130, 671, 231));
        m_msg->setFrameShape(QFrame::StyledPanel);
        m_msg->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        m_msg->setSelectionMode(QAbstractItemView::NoSelection);

        retranslateUi(ThSrvClass);

        QMetaObject::connectSlotsByName(ThSrvClass);
    } // setupUi

    void retranslateUi(QDialog *ThSrvClass)
    {
        ThSrvClass->setWindowTitle(QApplication::translate("ThSrvClass", "Qt Thermo Server", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ThSrvClass", "<html><head/><body><p><span style=\" font-size:18pt; color:#0055ff;\">-50\302\260C</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ThSrvClass", "<html><head/><body><p><span style=\" font-size:18pt; color:#00ffff;\">0\302\260C</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ThSrvClass", "<html><head/><body><p><span style=\" font-size:18pt; color:#ff0000;\">100\302\260C</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        m_send->setText(QApplication::translate("ThSrvClass", "SEND", 0, QApplication::UnicodeUTF8));
        killall->setText(QApplication::translate("ThSrvClass", "Deconnect All", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ThSrvClass: public Ui_ThSrvClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THSRV_H
