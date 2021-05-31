#ifndef LIGHT_H
#define LIGHT_H

#include <QWidget>
#include <QTcpSocket>

namespace Ui {
class light;
}

class light : public QWidget
{
    Q_OBJECT

public:
    explicit light(QTcpSocket *tcp_socket,QString background_path,QWidget *parent = 0);
    ~light();

    void Init();
    void con_state();//连接的判断
    QTcpSocket *tcp_socket;
    void send(int i,int c,int p);
    void deal_read();
    QString f_msg;
    bool flag;

signals:
    void to_back();

private slots:
    void on_drawing_open_clicked();

    void on_bedroom_open_clicked();

private:
    Ui::light *ui;

    QString background_path;
    QTimer *t_state;
};

#endif // LIGHT_H
