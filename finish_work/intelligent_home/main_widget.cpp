#include "main_widget.h"
#include "ui_main_widget.h"
#include <QDateTime>
#include <QTimer>
#include <QDebug>
#include "viedo.h"
#include "appliance.h"
#include "curtain.h"
#include "light.h"
#include "monitor.h"
#include "music.h"
#include "recreation.h"
#include "viedo.h"
#include "QMOvie"
#include <QStringList>
#include <QThread>

Main_Widget::Main_Widget(QTcpSocket *tcp_socket, QString background_path, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Main_Widget)
{
    ui->setupUi(this);

    //设置窗口属性
    this->setFixedSize(600,450);
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);

    //获取构造函数传入参数
    this->tcp_socket = tcp_socket;
    this->background_path = "./image/picture13.jpg";
    //设置背景
    ui->widget->setAutoFillBackground(true);
    QPalette pal;
    this->background_path = background_path;
    pal.setBrush(QPalette::Background,QBrush(QPixmap(this->background_path)));
    ui->widget->setPalette(pal);

    //初始化时间
    ui->display_time->display(QDateTime::currentDateTime().toString("HH:mm:ss"));
    t = new QTimer();
    //初始化日期
    ui->display_date->display(QDateTime::currentDateTime().toString("yyyy-MM-dd"));
    ui->xinqi->setText(QDateTime::currentDateTime().toString("ddd"));
    t->start(1000);
    connect(t,&QTimer::timeout,this,&Main_Widget::deal_t);
    //连接服务器通信
    connect(this->tcp_socket,&QTcpSocket::readyRead,this,&Main_Widget::deal_read);//连接tcp_socket和槽函数
    //初始化
    Init();
}

Main_Widget::~Main_Widget()
{
    delete ui;
}
//处理时间
void Main_Widget::deal_t(){
    if(tcp_socket->state() == QAbstractSocket::UnconnectedState){
        ui->state->setPixmap(QPixmap("./image/fail.png"));
    }else{
        ui->state->setPixmap(QPixmap("./image/success.png"));
    }
    ui->display_time->display(QDateTime::currentDateTime().toString("HH:mm:ss"));
    ui->display_date->display(QDateTime::currentDateTime().toString("yyyy-MM-dd"));
    ui->xinqi->setText(QDateTime::currentDateTime().toString("ddd"));
}
void Main_Widget::deal_read()
{
    qDebug() << "123" << endl;
    QString buf = tcp_socket->readAll();
    qDebug() << buf << endl;
    QStringList ls = buf.split(" ");
    if(ls.at(1) == "1"){
        qDebug() << buf << endl;
        QStringList ls = buf.split(" ");
        if(ls.at(2) == "0" || ls.at(3) == "0"){
        //温度计获取失败
            qDebug () << "温度机获取失败" << endl;
        }else{
            ui->tem->display(ls.at(2).toInt());
            ui->phy->display(ls.at(3).toInt());
        }
    }else if(ls.at(1) == "2"){
        qDebug() << buf << endl;
        QStringList ls = buf.split(" ");
        if(ls.at(2) == "0"){
        //湿度计获取失败
            qDebug () << "湿度计获取失败" << endl;
        }else{
            ui->phy->display(ls.at(2).toInt());
        }
    }else if(ls.at(1) == "3"){//处理开关灯
        w_light->f_msg = buf;
        w_light->flag = true;
    }else if(ls.at(1) == "4"){//处理空调
        w_appliance->f_msg = buf;
        w_appliance->flag = true;
    }else if(ls.at(1) == "5"){//处理电视
        w_appliance->f_msg = buf;
        w_appliance->flag = true;
    }else if(ls.at(1) == "6"){//处理吸尘器
    }else if(ls.at(1) == "7"){
        w_curtain->f_msg = buf;
        w_curtain->flag = true;
    }
}


void Main_Widget::Init()
{
    //初始化温度，软件
    send(1,0);
//    this->thread()->sleep(1);
//    send(2,0);
    //初始化机器人
    QMovie *movie = new QMovie("./image/robot.gif");
    ui->robot->setMovie(movie);
    movie->start();
    ui->robot->setScaledContents(true);

    //设置按钮图标
//    ui->quit->setIcon(QIcon(QPixmap("./image/close.png")));

    //初始化界面

    w_recreatrion = new recreation(this->tcp_socket,this->background_path);
    w_monitor = new monitor(this->tcp_socket,this->background_path);
    w_appliance = new appliance(this->tcp_socket,this->background_path);
    w_curtain = new curtain(this->tcp_socket,this->background_path);
    w_music = new music(this->tcp_socket,this->background_path);
    w_viedo = new viedo(this->tcp_socket,this->background_path);
    w_light = new light(this->tcp_socket,this->background_path);
    //连接界面之间跳转
    connect(w_viedo,&viedo::to_back,this,&Main_Widget::deal_to_back);
    connect(w_appliance,&appliance::to_back,this,&Main_Widget::deal_to_back);
    connect(w_curtain,&curtain::to_back,this,&Main_Widget::deal_to_back);
    connect(w_light,&light::to_back,this,&Main_Widget::deal_to_back);
    connect(w_monitor,&monitor::to_back,this,&Main_Widget::deal_to_back);
    connect(w_music,&music::to_back,this,&Main_Widget::deal_to_back);
    connect(w_recreatrion,&recreation::to_back,this,&Main_Widget::deal_to_back);

}

void Main_Widget::send(int i, int c)
{
    QString buf = QString("set %1 %2").arg(i).arg(c);
    this->tcp_socket->write(buf.toUtf8());
}
////////////////////////////////////////slot////////////////////////////////////////////
void Main_Widget::deal_to_back()
{
    this->show();
}
void Main_Widget::on_button_recreation_clicked()
{
    w_recreatrion->showNormal();
    this->hide();
}

void Main_Widget::on_button_monitor_clicked()
{
    w_monitor->showNormal();
    this->hide();
}
void Main_Widget::on_button_appliance_clicked()
{
    w_appliance->show();
    this->hide();
}

void Main_Widget::on_button_curtain_clicked()
{
    w_curtain->showNormal();
    this->hide();
}
void Main_Widget::on_button_music_clicked()
{
    w_music->showNormal();
    this->hide();
}
void Main_Widget::on_button_vedio_clicked()
{
    w_viedo->showNormal();
    this->hide();
}
void Main_Widget::on_button_light_clicked()
{
    w_light->showNormal();
    this->hide();
}
void Main_Widget::on_quit_clicked()
{
    this->close();
}
///////////////////////////////////slot////////////////////////////////////////////
