#include "widget.h"
#include "ui_widget.h"
#include <QHostAddress>
#include <ctime>
#include <cstdlib>
#include <QPixmap>
#include <QMouseEvent>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);
    ui->label->setPixmap(QPixmap("://7.png"));
    ui->label->setScaledContents(true);


    srand(time(0));//设置随机数种子
    tcpfp.connectToHost(QHostAddress("127.0.0.1"),8888);
    connect(&tcpfp,&QTcpSocket::connected,this,&Widget::on_connect);
}

Widget::~Widget()
{
    delete ui;
}
void Widget::mousePressEvent(QMouseEvent *e){
    this->m_x = e->x();
    this->m_y = e->y();
}
void Widget::mouseMoveEvent(QMouseEvent *e){
    this->move(this->x()+e->x()-this->m_x,this->y()+e->y()-this->m_y);
}
////////////////////////////////////////////处理函数
void Widget::send(int i, int c)
{
    QString buf = QString("post %1 %2").arg(i).arg(c);
    tcpfp.write(buf.toUtf8());
}
void Widget::on_connect()
{
    send(0,4);
    connect(&tcpfp,&QTcpSocket::readyRead,this,&Widget::on_rec);
}
void Widget::on_rec()
{
    QString buf = tcpfp.readAll();//接受服务器发送过来的数据
//    ui->textBrowser->insertPlainText(buf+"\n");//追加文本内容
    QStringList ls = buf.split(" ");
    int num = 0;
    if(ls.at(1) == "4"){
        //设置温度
//        int num = 24;//设置随机数
//        QString str = QString("post 4 %1").arg(num);
//        tcpfp.write(str.toUtf8());
        if(ls.at(2)=="0"){
            //处理关闭请求
            if(rand()%30==0){
                num = 2;
            }else{
                num = 3;
                ui->label->setPixmap(QPixmap("://7.png"));

            }
        }else{
            //处理打开请求
            if(rand()%30==0){
                num = 0;
            }else{
                num = 1;
                ui->label->setPixmap(QPixmap("://6.png"));
            }
        }
        send(4,num);
    }
}
void Widget::closeEvent(QCloseEvent *)
{
    QString str = "light out";
    tcpfp.write(str.toUtf8());
    tcpfp.disconnectFromHost();//断开链接
}
