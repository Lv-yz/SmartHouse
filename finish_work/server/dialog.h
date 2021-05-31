#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QTcpSocket>
#include <QTcpServer>
#include <QTimer>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

    void deal_read();

public:
    void on_connect();

private:
    Ui::Dialog *ui;

    QTcpServer tcp_server;
    QList<QTcpSocket*> cliLs;//保存和客户端通信的套件字
    QTcpSocket* arr_cliLs[7];
    QTcpSocket *client;
//    int size = 0;
};

#endif // DIALOG_H
