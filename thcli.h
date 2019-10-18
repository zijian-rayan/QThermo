#ifndef THCLI_H
#define THCLI_H

#include <QDialog>
#include "ui_thcli.h"
#include "thsrv.h"


class ThCli : public QDialog
{
    Q_OBJECT
      QTcpSocket sock;
   
public:
    ThCli(QWidget *parent = 0);
    ~ThCli();
public slots:
  void on_m_connect_released()
  {
    sock.connectToHost(ui.m_srvAddr->text(),SERV_PORT);
    ui.m_connect->setEnabled(false);
  }

  void on_connected() //si acceptation de connection
  {
      ui.m_lcd->setEnabled(true);
      ui.m_connect->setText("Disconnect");//TODO
  }
  void on_read()
  {
    char temp;
    qint64 nb=sock.read(&temp,sizeof(temp));
    if(nb==sizeof(temp))
      ui.m_lcd->display(QString("%1'").arg((int)temp));
  }
  void on_disconnected()
  {
    sock.close();
    ui.m_lcd->display("-----");
    ui.m_lcd->setEnabled(false);
    ui.m_connect->setText("Connect");
    ui.m_connect->setEnabled(true);
  }


private:
    Ui::ThCli ui;
};

#endif // THCLI_H
