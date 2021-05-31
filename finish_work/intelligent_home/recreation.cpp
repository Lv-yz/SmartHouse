#include "recreation.h"
#include "ui_recreation.h"
#include <QTimer>
#include <numgame.h>

recreation::recreation(QTcpSocket *tcp_socket,QString background_path,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::recreation)
{
    ui->setupUi(this);
    this->tcp_socket = tcp_socket;
    //设置窗口属性
    this->setFixedSize(600,450);
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);

    //设置背景
    ui->widget->setAutoFillBackground(true);
    QPalette pal;
    pal.setBrush(QPalette::Background,QBrush(QPixmap(background_path)));
    ui->widget->setPalette(pal);

    Init();
}

recreation::~recreation()
{
    delete ui;
}

void recreation::Init()
{
    //设置连接信号
    QTimer *t_state = new QTimer(this);
    connect(t_state,&QTimer::timeout,this,&recreation::con_state);
    t_state->start(1000);
    //返回按钮的单击事件
    connect(ui->back,&QPushButton::clicked,
        [=](){
        emit to_back();
        this->hide();
        }
    );

    //连接信号

}
void recreation::con_state(){
    if(tcp_socket->state() == QAbstractSocket::UnconnectedState){
//        qDebug() << "连接服务器失败！" << endl;
        ui->state->setPixmap(QPixmap("./image/fail.png"));
    }else{
//        qDebug() << "连接服务器成功！" << endl;
        ui->state->setPixmap(QPixmap("./image/success.png"));
    }
}

void recreation::on_pushButton_clicked()
{//打开2048小游戏
    n = new NumGame();
    n->show();
    this->hide();
    connect(n,&NumGame::to_back,this,&recreation::deal_to_back);
}

void recreation::on_pushButton_2_clicked()
{//打开贪吃蛇
    s = new Start();
    s->show();
    this->hide();
    connect(s,&Start::to_back,this,&recreation::deal_to_back);
}

void recreation::deal_to_back()
{
    this->show();
}
