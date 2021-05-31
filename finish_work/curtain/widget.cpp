#include "widget.h"
#include "ui_widget.h"
#include <QStringList>
#include <QHostAddress>
#include <ctime>
#include <cstdlib>
#include <QDebug>
#include <QMouseEvent>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);
    ui->label->setPixmap(QPixmap("://curtain_close.png"));
    ui->label->setScaledContents(true);

    srand(time(0));
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

void Widget::send(int i, int c)
{
    QString buf = QString("post %1 %2").arg(i).arg(c);
    tcpfp.write(buf.toUtf8());
}
void Widget::on_connect()
{
//    this->startus = true;
//    ui->pushButton->setEnabled(true);
    send(0,7);
    connect(&tcpfp,&QTcpSocket::readyRead,this,&Widget::on_rec);
}
void Widget::on_rec()
{
    QString buf = tcpfp.readAll();//接受服务器发送过来的数据
//    ui->textBrowser->insertPlainText(buf+"\n");//追加文本内容
    QStringList ls = buf.split(" ");
    int num = 0;//设置随机数
    if(ls.at(1) == "7"){
         if(ls.at(2)=="0"){
             //关
             qDebug() << "关！" << endl;
             if(rand()%30==0){
                 qDebug() << "7777777777777777777777" << endl;
                 num = 0;
             }else{
                 num = 1;
                 qDebug() << "8888888888888888888888" << endl;
                 ui->label->setPixmap(QPixmap("://curtain_close.png"));
             }
         }else{
             //开
             qDebug() << "开" << endl;
             if(rand()%30==0){
                 num = 2;
                 qDebug() << "9999999999999999999" << endl;
             }else{
                 num = 3;
                 qDebug() << "1000000000000000000" << endl;
                 ui->label->setPixmap(QPixmap("://curtain_open.png"));
             }
         }
        send(7,num);
    }
}
void Widget::closeEvent(QCloseEvent *)
{
    QString str = "light out";
    tcpfp.write(str.toUtf8());
    tcpfp.disconnectFromHost();//断开链接
}
