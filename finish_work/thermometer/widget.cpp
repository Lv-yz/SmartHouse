#include "widget.h"
#include "ui_widget.h"
#include <QHostAddress>
#include <ctime>
#include <cstdlib>
#include <QDebug>

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
    send(0,1);
    connect(&tcpfp,&QTcpSocket::readyRead,this,&Widget::on_rec);
}
void Widget::on_rec()
{
    QString buf = tcpfp.readAll();//接受服务器发送过来的数据
    QStringList ls = buf.split(" ");
    if(ls.at(1) == "1"){
        //设置温度
        int num = rand()%30;//设置随机数
        int num2 = rand()%90;
        qDebug() << num <<endl;
        QString str = QString("post 1 %1 %2").arg(num).arg(num2);
        this->tcpfp.write(str.toUtf8());
    }
}

void Widget::send(int i, int c)
{
    QString buf = QString("post %1 %2").arg(i).arg(c);
    tcpfp.write(buf.toUtf8());
}
void Widget::closeEvent(QCloseEvent *)
{
    QString str = "1 out";
    tcpfp.write(str.toUtf8());
    tcpfp.disconnectFromHost();//断开链接
}
