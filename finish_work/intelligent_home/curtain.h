#ifndef CURTAIN_H
#define CURTAIN_H

#include <QWidget>
#include <QTcpSocket>

namespace Ui {
class curtain;
}

class curtain : public QWidget
{
    Q_OBJECT

public:
    explicit curtain(QTcpSocket *tcp_socket,QString background_path,QWidget *parent = 0);
    ~curtain();

    void Init();
    void con_state();//连接的判断
    void send(int i,int c);
    QTcpSocket *tcp_socket;
    QString f_msg;
    bool flag;

signals:
    void to_back();

private slots:

    void on_close_clicked();

    void on_open_clicked();

private:
    Ui::curtain *ui;

    QString background_path;
};

#endif // CURTAIN_H
