/********************************************************************************
** Form generated from reading UI file 'thcli.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THCLI_H
#define UI_THCLI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ThCli
{
public:
    QLCDNumber *m_lcd;
    QLineEdit *m_srvAddr;
    QPushButton *m_connect;

    void setupUi(QDialog *ThCli)
    {
        if (ThCli->objectName().isEmpty())
            ThCli->setObjectName(QString::fromUtf8("ThCli"));
        ThCli->resize(631, 177);
        m_lcd = new QLCDNumber(ThCli);
        m_lcd->setObjectName(QString::fromUtf8("m_lcd"));
        m_lcd->setGeometry(QRect(20, 10, 331, 101));
        m_lcd->setNumDigits(4);
        m_srvAddr = new QLineEdit(ThCli);
        m_srvAddr->setObjectName(QString::fromUtf8("m_srvAddr"));
        m_srvAddr->setGeometry(QRect(20, 130, 331, 20));
        m_connect = new QPushButton(ThCli);
        m_connect->setObjectName(QString::fromUtf8("m_connect"));
        m_connect->setGeometry(QRect(380, 10, 231, 141));
        QFont font;
        font.setPointSize(20);
        m_connect->setFont(font);

        retranslateUi(ThCli);

        QMetaObject::connectSlotsByName(ThCli);
    } // setupUi

    void retranslateUi(QDialog *ThCli)
    {
        ThCli->setWindowTitle(QApplication::translate("ThCli", "Qt Thermo Client", 0, QApplication::UnicodeUTF8));
        m_srvAddr->setText(QApplication::translate("ThCli", "127.0.0.1", 0, QApplication::UnicodeUTF8));
        m_connect->setText(QApplication::translate("ThCli", "Connect", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ThCli: public Ui_ThCli {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THCLI_H
