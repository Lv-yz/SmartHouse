#include "light.h"
#include "ui_light.h"
#include <QTimer>
#include <QStringList>
#include <QIcon>


light::light(QTcpSocket *tcp_socket,QString background_path, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::light)
{
    ui->setupUi(this);
    this->tcp_socket = tcp_socket;
    this->flag = false;
    this->f_msg = "1 1 1 1";

    //设置窗口属性
    this->setFixedSize(600,450);
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);

    //设置背景
    ui->widget->setAutoFillBackground(true);
    QPalette pal;
    this->background_path = background_path;
    pal.setBrush(QPalette::Background,QBrush(QPixmap(this->background_path)));
    ui->widget->setPalette(pal);
    //
    ui->bed_light->setPixmap(QPixmap("://light_off1.png"));
    ui->bed_light->setScaledContents(true);
    ui->draw_light->setPixmap(QPixmap("://light_off1.png"));
    ui->draw_light->setScaledContents(true);
    Init();
}

light::~light()
{
    delete ui;
}

void light::Init()
{
//    connect(this->tcp_socket,&QTcpSocket::readyRead,this,&light::deal_read);
    //设置连接信号
    t_state = new QTimer(this);
    connect(t_state,&QTimer::timeout,this,&light::con_state);
    t_state->start(1000);
    //返回按钮的单击事件
    connect(ui->back,&QPushButton::clicked,
        [=](){
        emit to_back();
        this->hide();
        }
    );
}
void light::deal_read(){
    qDebug() << "" << endl;
    QString buf = tcp_socket->readAll();
    qDebug() << buf << endl;
    QStringList ls = buf.split(" ");
    if(ls.at(3) == "0"){
        //处理
        if(ls.at(2)=="0"){}
        else{
        }
    }else{
        //处理
        if(ls.at(2)=="0"){}
        else{
        }
    }
}
void light::con_state(){
    if(tcp_socket->state() == QAbstractSocket::UnconnectedState){
//        qDebug() << "连接服务器失败！" << endl;
        ui->state->setPixmap(QPixmap("./image/fail.png"));
    }else{
//        qDebug() << "连接服务器成功！" << endl;
        ui->state->setPixmap(QPixmap("./image/success.png"));
    }

    if(this->flag == true){//有消息过来了
        QStringList ls = this->f_msg.split(" ");
        if(ls.at(3) == "0"){//判断位置
            if(ls.at(2) == "0"){
                qDebug () << "电灯1打开失败" << endl;
            }else if(ls.at(2) == "1"){
                ui->drawing_open->setIcon(QIcon("://chinaz70.ico"));
                ui->drawing_open->setDefault(true);
                qDebug () << "电灯1打开成功" << endl;
                ui->draw_light->setPixmap(QPixmap("://light_on.png"));
            }else if(ls.at(2) == "2"){
                qDebug () << "电灯1关闭失败" << endl;
            }else if(ls.at(2) == "3"){
                ui->drawing_open->setDefault(false);
                ui->drawing_open->setIcon(QIcon("://chinaz71.ico"));
                qDebug () << "电灯1关闭成功" << endl;
                ui->draw_light->setPixmap(QPixmap("://light_off1.png"));
            }
        }




        else{
            if(ls.at(2) == "0"){
                qDebug () << "电灯2打开失败" << endl;
            }else if(ls.at(2) == "1"){
                qDebug () << "电灯2打开成功" << endl;
                ui->bedroom_open->setDefault(true);
                ui->bedroom_open->setIcon(QIcon("://chinaz70.ico"));
                ui->bed_light->setPixmap(QPixmap("://light_on.png"));
            }else if(ls.at(2) == "2"){
                qDebug () << "电灯2关闭失败" << endl;
            }else if(ls.at(2) == "3"){
                qDebug () << "电灯2关闭成功" << endl;
                ui->bedroom_open->setDefault(false);
                ui->bedroom_open->setIcon(QIcon("://chinaz71.ico"));
                ui->bed_light->setPixmap(QPixmap("://light_off1.png"));
            }
        }






        this->flag = false;//处理完成将消息复位
    }
}

void light::send(int i, int c,int p)
{
    QString str = QString("set %1 %2 %3").arg(i).arg(c).arg(p);
    tcp_socket->write(str.toUtf8());
}

void light::on_drawing_open_clicked()
{
    if(ui->drawing_open->isDefault() == false){
        send(3,1,0);
    }else{
        send(3,0,0);
    }
}
void light::on_bedroom_open_clicked()
{
    if(ui->bedroom_open->isDefault() == false){
        qDebug() << "1111111111" << endl;
        send(3,1,1);
    }else{
        qDebug() << "22222222222222" << endl;
        send(3,0,1);
    }
}
