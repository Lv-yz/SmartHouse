#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QSqlDatabase>
#include <QDebug>
#include <QTimer>
#include <QDebug>
#include <QTcpSocket>
#include <QHostAddress>

namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = 0);
    ~Login();

//    void deal_read();//处理读函数
    void con_state();//连接的判断
    void on_connect();
    void send(int i,int c);
    QTcpSocket tcp_socket;//通信套接字

private slots:

    void on_login_clicked();//登陆按钮的处理
    void on_cancel_clicked();//取消按钮的处理

private:
    Ui::Login *ui;


    QString background_path;//背景图片路径
};

#endif // LOGIN_H
