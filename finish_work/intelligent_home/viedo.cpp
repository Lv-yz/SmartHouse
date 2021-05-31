#include "viedo.h"
#include "ui_viedo.h"
#include <QTimer>
#include <QIcon>
#include <QMovie>

viedo::viedo(QTcpSocket *tcp_socket, QString background_path, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::viedo)
{
    ui->setupUi(this);

    ui->pushButton->setIcon(QIcon("://chinaz37.ico"));

    movie = new QMovie("://gif.gif");
    ui->label->setMovie(movie);
    ui->label->setScaledContents(true);


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

    Init();
}

viedo::~viedo()
{
    delete ui;
}

void viedo::Init()
{
    //设置连接信号
    QTimer *t_state = new QTimer(this);
    connect(t_state,&QTimer::timeout,this,&viedo::con_state);
    t_state->start(1000);
    //返回按钮的单击事件
    connect(ui->back,&QPushButton::clicked,
        [=](){
        emit to_back();
        this->hide();
        }
    );
}
void viedo::con_state(){
    if(tcp_socket->state() == QAbstractSocket::UnconnectedState){
//        qDebug() << "连接服务器失败！" << endl;
        ui->state->setPixmap(QPixmap("./image/fail.png"));
    }else{
//        qDebug() << "连接服务器成功！" << endl;
        ui->state->setPixmap(QPixmap("./image/success.png"));
    }
}

void viedo::on_pushButton_clicked()
{
    if(ui->pushButton->isDefault() == false){
        ui->pushButton->setIcon(QIcon("://chinaz68.ico"));
        ui->pushButton->setDefault(true);
        this->movie->start();
    }else{
        ui->pushButton->setIcon(QIcon("://chinaz37.ico"));
        ui->pushButton->setDefault(false);
        this->movie->stop();
    }
}
