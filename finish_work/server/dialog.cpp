#include "dialog.h"
#include "ui_dialog.h"
#include <QDebug>
#include <QHostAddress>
#include <QTimer>
#include <QStringList>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    if(tcp_server.listen(QHostAddress::Any,8888) ==  false){
        //启动失败
        qDebug() << "服务器启动失败！" << endl;
    }else{
        qDebug() << "服务器启动成功！" << endl;
        connect(&tcp_server,&QTcpServer::newConnection,this,&Dialog::on_connect);
    }
}

Dialog::~Dialog()
{
    delete ui;
}
void Dialog::on_connect(){
    QTcpSocket *tcp_socket = tcp_server.nextPendingConnection();
    cliLs.append(tcp_socket);
    connect(tcp_socket,&QTcpSocket::readyRead,this,&Dialog::deal_read);
}
void Dialog::deal_read()
{
    for(int i=0;i<cliLs.size();i++){
        //bytesAvailable()获取套件字中的数据的大小，为o的就说嘛没有数据传递过来
        if(cliLs.at(i)->bytesAvailable()){//说明客户端有消息过来
            QString buf = cliLs.at(i)->readAll();//接受消息
            //处理接受的消息
            qDebug()<< buf << endl;
            QStringList ls = buf.split(" ");
            if(ls.at(0) == "set"){
                if(ls.at(1)=="0")
                {
                    client = cliLs.at(i);
                }else{
                    if(arr_cliLs[ls.at(1).toInt()]->state() != QAbstractSocket::UnconnectedState){
                        arr_cliLs[ls.at(1).toInt()]->write(buf.toUtf8());
                    }
                }
            }else{
                if(ls.at(1)=="0"){
                    arr_cliLs[ls.at(2).toInt()] = cliLs.at(i);
                }else{
                    qDebug()<< "6666" << endl;
                    client->write(buf.toUtf8());
                    qDebug()<< "7777" << endl;
                }
            }
        }
    }
}
