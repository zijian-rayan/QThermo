#include "thsrv.h"
#include "thcli.h"
#include <QtGui/QApplication>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    
    QApplication a(argc, argv);
    QMessageBox mbox(QMessageBox::Question,"Application QT Serveur-Client TCP/IP)","Quel rôle? ",QMessageBox::Cancel);
    QAbstractButton *bsrv = (QAbstractButton* )mbox.addButton("server",QMessageBox::AcceptRole);
    QAbstractButton *bcli = (QAbstractButton* )mbox.addButton("client",QMessageBox::AcceptRole);
    mbox.exec();
    if(mbox.clickedButton() == bsrv)  ThSrv().exec();
    else if(mbox.clickedButton() == bcli) ThCli().exec();
    return 0;
}
