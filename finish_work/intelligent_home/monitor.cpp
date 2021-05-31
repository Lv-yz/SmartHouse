#include "monitor.h"
#include "ui_monitor.h"
#include <QTimer>

monitor::monitor(QTcpSocket *tcp_socket, QString background_path, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::monitor)
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
    this->background_path = background_path;
    pal.setBrush(QPalette::Background,QBrush(QPixmap(this->background_path)));
    ui->widget->setPalette(pal);
    //
    ui->label_5->setPixmap(QPixmap("://10.png"));
    ui->label_5->setScaledContents(true);
    ui->label_6->setPixmap(QPixmap("://bed.png"));
    ui->label_6->setScaledContents(true);
    Init();
}

monitor::~monitor()
{
    delete ui;
}

void monitor::Init()
{
    //设置连接信号
    QTimer *t_state = new QTimer(this);
    connect(t_state,&QTimer::timeout,this,&monitor::con_state);
    t_state->start(1000);
    //返回按钮的单击事件
    connect(ui->back,&QPushButton::clicked,
        [=](){
        emit to_back();
        this->hide();
        }
    );
}
void monitor::con_state(){
    if(tcp_socket->state() == QAbstractSocket::UnconnectedState){
//        qDebug() << "连接服务器失败！" << endl;
        ui->state->setPixmap(QPixmap("./image/fail.png"));
    }else{
//        qDebug() << "连接服务器成功！" << endl;
        ui->state->setPixmap(QPixmap("./image/success.png"));
    }
}
