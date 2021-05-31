#include "widget.h"
#include "ui_widget.h"
#include <QHostAddress>
#include <ctime>
#include <cstdlib>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    srand(time(0));
    tcpfp.connectToHost(QHostAddress("127.0.0.1"),8888);
    connect(&tcpfp,&QTcpSocket::connected,this,&Widget::on_connect);
}

Widget::~Widget()
{
    delete ui;
}
////////////////////////////////////////////处理函数
void Widget::on_connect()
{
//    this->startus = true;
    send(0,6);
    connect(&tcpfp,&QTcpSocket::readyRead,this,&Widget::on_rec);
}
void Widget::on_rec()
{
    QString buf = tcpfp.readAll();//接受服务器发送过来的数据
//    ui->textBrowser->insertPlainText(buf+"\n");//追加文本内容
    QStringList ls = buf.split(" ");
    int num = 0;//设置随机数
    if(ls.at(1) == "6"){
        //设置温度

            //处理数据
         if(ls.at(2)=="0"){
             //处理关灯
             qDebug() << "开吸尘器！" << endl;
             if(rand()/30==0){
                 num = 0;
             }else{
                 num = 1;}
         }else{
             //处理开灯
             qDebug() << "关吸尘器" << endl;
             if(rand()/30==0){
                 num = 2;
             }else{
                 num = 3;
             }
         }
        send(6,num);
    }
}

void Widget::send(int i, int c)
{
    QString buf = QString("post %1 %2").arg(i).arg(c);
    tcpfp.write(buf.toUtf8());
}
void Widget::closeEvent(QCloseEvent *)
{
    QString str = "light out";
    tcpfp.write(str.toUtf8());
    tcpfp.disconnectFromHost();//断开链接
}
