#include "appliance.h"
#include "ui_appliance.h"
#include <QDebug>
#include <QTimer>
#include <QIcon>

appliance::appliance(QTcpSocket *tcp_socket,QString background_path,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::appliance)
{
    ui->setupUi(this);
    //初始化消息通知属性
    this->flag = false;
    this->f_msg = "1 1 1 1";

    //初始化tcp_socket
    this->tcp_socket = tcp_socket;
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
    ui->air_condiction->setPixmap(QPixmap("://7.png"));
    ui->air_condiction->setScaledContents(true);
    ui->ari_state->setPixmap(QPixmap("://7.png"));
    ui->ari_state->setScaledContents(true);

    ui->television->setPixmap(QPixmap("://t4.png"));
    ui->television->setScaledContents(true);
    ui->tele_state->setPixmap(QPixmap("://t4.png"));
    ui->tele_state->setScaledContents(true);
    //调用初始化函数
    Init();
}

appliance::~appliance()
{
    delete ui;
}

void appliance::Init(){
    //设置连接信号的检测
    t_state = new QTimer(this);
    connect(t_state,&QTimer::timeout,this,&appliance::con_state);
    t_state->start(1000);

    //设置读函数
}
//返回按钮的单击事件
void appliance::on_back_clicked()
{
    emit to_back();
    this->hide();
}
void appliance::con_state(){
    if(tcp_socket->state() == QAbstractSocket::UnconnectedState){
//        qDebug() << "连接服务器失败！" << endl;
        ui->state->setPixmap(QPixmap("./image/fail.png"));
    }else{
//        qDebug() << "连接服务器成功！" << endl;
        ui->state->setPixmap(QPixmap("./image/success.png"));
    }

    //处理主函数发送过来的消息
    if(this->flag == true){//有消息过来了
        qDebug() << this->f_msg << endl;
        QStringList ls = this->f_msg.split(" ");
        if(ls.at(1) == "4"){
            //处理空调
            if(ls.at(2) == "0"){
                qDebug () << "空调打开失败1" << endl;
            }else if(ls.at(2) == "1"){
                qDebug () << "空调打开成功2" << endl;
                ui->air_open->setDefault(true);
                ui->air_open->setIcon(QIcon("://chinaz70.ico"));
                ui->ari_state->setPixmap(QPixmap("://6.png"));
            }else if(ls.at(2) == "2"){
                qDebug () << "空调关闭失败3" << endl;
            }else if(ls.at(2) == "3"){
                qDebug () << "空调关闭成功4" << endl;
                ui->air_open->setDefault(false);
                ui->air_open->setIcon(QIcon("://chinaz71.ico"));
                ui->ari_state->setPixmap(QPixmap("://7.png"));
            }
        }else{
            if(ls.at(2) == "0"){
                qDebug () << "电视机打开失败" << endl;
            }else if(ls.at(2) == "1"){
                qDebug () << "电视机打开成功" << endl;
                ui->tele_open->setDefault(true);
                ui->tele_open->setIcon(QIcon("://chinaz70.ico"));
                ui->tele_state->setPixmap(QPixmap("://5.png"));
            }else if(ls.at(2) == "2"){
                qDebug () << "电视机关闭失败" << endl;
            }else if(ls.at(2) == "3"){
                qDebug () << "电视机关闭成功" << endl;
                ui->tele_open->setDefault(false);
                ui->tele_open->setIcon(QIcon("://chinaz71.ico"));
                ui->tele_state->setPixmap(QPixmap("://t4.png"));
            }
        }
        this->flag = false;//处理完成将消息复位
    }
}

void appliance::on_air_open_clicked()
{
    if(ui->air_open->isDefault() == false){
        send(4,1);
    }else{
        send(4,0);
    }
}

void appliance::on_tele_open_clicked()
{

    if(ui->tele_open->isDefault() == false){
        send(5,1);
    }else{
        send(5,0);
    }
}

void appliance::send(int i, int c)
{
    QString str = QString("set %1 %2").arg(i).arg(c);
    tcp_socket->write(str.toUtf8());
}

void appliance::timerEvent(QTimerEvent *)
{

}
