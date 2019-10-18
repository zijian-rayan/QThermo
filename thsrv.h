#ifndef THSRV_H
#define THSRV_H

#include <QDialog>
#include "ui_thsrv.h"
#include <QTcpServer>
#include <QTcpSocket>
#include <QTimer>
#define SERV_PORT 4040
#define MAX_CLIENTS 50 
class QTimer;
class ThSrv : public QDialog
{
    Q_OBJECT
    QTcpServer serv;
    QTcpSocket *client[MAX_CLIENTS];
    QTimer *m_timer;

public:
    ThSrv(QWidget *parent = 0, Qt::WFlags flags = 0);
    ~ThSrv();
    void Msg(const QString& s)
	    {
		    ui.m_msg->addItem(s);
	       ui.m_msg->setCurrentRow(ui.m_msg->count() - 1);

	    }
public slots:
    void on_connexion()//client connextion
    {
        size_t idx=0;
        while(client[idx] &&idx<MAX_CLIENTS) idx++;
        QTcpSocket* pcli=serv.nextPendingConnection();
        if(idx<MAX_CLIENTS)//accept
        {
          Msg(QString("Connexion acctpted %1:%2").arg(pcli->peerAddress().toString()).arg(pcli->peerPort()));
          client[idx]=pcli;
          connect(pcli,SIGNAL(disconnected()),this,SLOT(on_disconnected()));
        }
        else//refuse
        {
          Msg(QString("Connexion refuse %1:%2").arg(pcli->peerAddress().toString()).arg(pcli->peerPort()));
          pcli->close();
          delete pcli;
        }
    }
    void on_disconnected()//client perdu
    {
        QTcpSocket* pcli=(QTcpSocket*)sender();
        if(!pcli)return;
        for(size_t idx=0;idx<MAX_CLIENTS;idx++)
        {
            if(client[idx]==pcli)
            {
                Msg(QString("End of connexion refuse %1:%2").arg(pcli->peerAddress().toString()).arg(pcli->peerPort()));
                client[idx]=0;
                 pcli->close();
				 pcli->deleteLater();
                 break;
            }
        }       
    }
    void on_m_send_released()
    {

	  SendMessage();
    }
    void on_killall_released();
	void SendMessage();
	void h_Timeout();  
private:
    Ui::ThSrvClass ui;
};

#endif // THSRV_H
