#include "curtain.h"
#include "ui_curtain.h"
#include <QTimer>

curtain::curtain(QTcpSocket *tcp_socket,QString background_path, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::curtain)
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
    ui->label_open->setPixmap(QPixmap("://curtain_open.png"));
    ui->label_open->setScaledContents(true);
    ui->label_close->setPixmap(QPixmap("://curtain_close.png"));
    ui->label_close->setScaledContents(true);
    ui->curtain_state->setPixmap(QPixmap("://curtain_close.png"));
    ui->curtain_state->setScaledContents(true);
    Init();
}

curtain::~curtain()
{
    delete ui;
}

void curtain::Init()
{
    //设置连接信号
    QTimer *t_state = new QTimer(this);
    connect(t_state,&QTimer::timeout,this,&curtain::con_state);
    t_state->start(1000);
    //返回按钮的单击事件
    connect(ui->back,&QPushButton::clicked,
        [=](){
        emit to_back();
        this->hide();
        }
    );

}
void curtain::con_state(){
    if(tcp_socket->state() == QAbstractSocket::UnconnectedState){
//        qDebug() << "连接服务器失败！" << endl;
        ui->state->setPixmap(QPixmap("./image/fail.png"));
    }else{
//        qDebug() << "连接服务器成功！" << endl;
        ui->state->setPixmap(QPixmap("./image/success.png"));
    }
    ////////////////////////
    if(this->flag == true){//有消息过来了
        QStringList ls = this->f_msg.split(" ");
        if(ls.at(2)=="0"){
            qDebug() << "111111111111111111" << endl;
            qDebug () << "窗帘关闭失败" << endl;
        }else if(ls.at(2) == "1"){
            qDebug() << "22222222222222222" << endl;
            qDebug () << "窗帘关闭成功" << endl;
            ui->curtain_state->setPixmap(QPixmap("://curtain_close.png"));
        }else if(ls.at(2) == "2"){
            qDebug() << "333333333333333333333" << endl;
            qDebug () << "窗帘打开失败" << endl;
        }else if(ls.at(2) == "3"){
            qDebug() << "444444444444444444444" << endl;
            qDebug () << "窗帘打开成功" << endl;
            ui->curtain_state->setPixmap(QPixmap("://curtain_open.png"));
        }
        this->flag = false;//处理完成将消息复位
    }
}

void curtain::send(int i, int c)
{
    QString str = QString("set %1 %2").arg(i).arg(c);
    tcp_socket->write(str.toUtf8());
}

void curtain::on_close_clicked()
{
    qDebug() << "55555555555555555" << endl;
    send(7,0);
}

void curtain::on_open_clicked()
{
    qDebug() << "6666666666666666666" << endl;
    send(7,1);
}
