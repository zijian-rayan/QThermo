#include "thsrv.h"

ThSrv::ThSrv(QWidget *parent, Qt::WFlags flags)
    : QDialog(parent, flags)
{
  ui.setupUi(this);
  for(size_t idx=0;idx<MAX_CLIENTS;idx++) client[idx]=0;
  connect(&serv,SIGNAL(newConnection()),this,SLOT(on_connexion()));
  serv.listen(QHostAddress::Any,SERV_PORT);
  //timer ...
  m_timer = new QTimer(this);
  connect (m_timer, SIGNAL(timeout()),this,SLOT(h_Timeout()));

}

ThSrv::~ThSrv()
{
    serv.close();
    for(size_t idx=0;idx<MAX_CLIENTS;idx++)
    {
        if(client[idx])
        {
            client[idx]->close();
            client[idx]->deleteLater();
        }
    }

}
void ThSrv::SendMessage()
{//eission d'une temperature
		m_timer->start(1000);
}
void ThSrv::h_Timeout()
{
      char temp=(char)ui.m_thermo->value();
      for(size_t idx=0;idx<MAX_CLIENTS;idx++)
      {
          if(client[idx])
          {
              client[idx]->write(&temp,sizeof(temp));
          }
      }  

      Msg(QString("Nouvelle temperature : %1°C").arg((int)temp));
}


void ThSrv::on_killall_released()
{
     for(size_t idx=0;idx<MAX_CLIENTS;idx++)
        {
            if(client[idx])
            {
                Msg(QString("kill all"));
                 client[idx]->close();
                 client[idx]->deleteLater();
            }
        }
	 if(m_timer->isActive()){m_timer->stop();}
}