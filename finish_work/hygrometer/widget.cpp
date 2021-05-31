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
void Widget::send(int i, int c)
{
    QString buf = QString("post %1 %2").arg(i).arg(c);
    tcpfp.write(buf.toUtf8());
}
void Widget::on_connect()
{
    send(0,2);
    connect(&tcpfp,&QTcpSocket::readyRead,this,&Widget::on_rec);
}
void Widget::on_rec()
{
    QString buf = tcpfp.readAll();//接受服务器发送过来的数据
//    ui->textBrowser->insertPlainText(buf+"\n");//追加文本内容
    QStringList ls = buf.split(" ");
    if(ls.at(1) == "2"){
        //设置温度
        int num = rand()/90;//设置随机数
        QString str = QString("post 2 %1").arg(num);
        send(2,num);
    }
}
void Widget::closeEvent(QCloseEvent *)
{
    QString str = "light out";
    tcpfp.write(str.toUtf8());
    tcpfp.disconnectFromHost();//断开链接
}
