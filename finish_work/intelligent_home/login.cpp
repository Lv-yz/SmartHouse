#include "login.h"
#include "ui_login.h"
#include "main_widget.h"
#include <QPixmap>
#include <QPalette>
#include <QBrush>
//#include "register.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <QPainter>

Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

    //设置窗口的属性
    this->setFixedSize(600,450);
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);

    //设置背景
    this->background_path = "./image/picture43.jpg";
    ui->widget->setAutoFillBackground(true);
    QPalette pal;
    pal.setBrush(QPalette::Background,QBrush(QPixmap(this->background_path)));
    ui->widget->setPalette(pal);



    //连接服务器
    qDebug() << "1111" << endl;
    tcp_socket.connectToHost(QHostAddress("127.0.0.1"),8888);

    connect(&tcp_socket,&QTcpSocket::connected,this,&Login::on_connect);

    //设置连接信号
    QTimer *t_state = new QTimer(this);
    connect(t_state,&QTimer::timeout,this,&Login::con_state);
    t_state->start(1000);
}

Login::~Login()
{
    delete ui;
}

//void Login::deal_read()
//{
//    QString msg = tcp_socket.readAll();
//    qDebug() << msg << endl;
//}
//登陆按钮
void Login::on_login_clicked()
{
    //获取输入框的数据
    QString username = ui->username->text();
    QString password = ui->password->text();
    if(username == NULL || password == NULL){
        QMessageBox::about(this,"tip","username or password was null!");
        return;
    }
    else{
        //判断用户名密码是否正确
        if(username == "root" && password == "123456"){
            Main_Widget *w = new Main_Widget(&tcp_socket,this->background_path);
            w->showNormal();
            this->hide();
        }else{
            QMessageBox::about(this,"tip","username or password error!");
            return ;
        }
    }

}

//连接的判断
void Login::con_state(){
    if(tcp_socket.state() == QAbstractSocket::UnconnectedState){
//        qDebug() << "连接服务器失败！" << endl;
        ui->state->setPixmap(QPixmap("./image/fail.png"));
    }else{
//        qDebug() << "连接服务器成功！" << endl;
        ui->state->setPixmap(QPixmap("./image/success.png"));
    }
}

void Login::on_connect()
{
    send(0,1);
//    connect(&tcp_socket,&QTcpSocket::readyRead,this,&Login::deal_read);
}

void Login::send(int i, int c)
{
    QString str = QString("set %1 %2").arg(i).arg(c);
    tcp_socket.write(str.toUtf8());
}
//取消按钮
void Login::on_cancel_clicked()
{
    this->close();
}
