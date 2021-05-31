#ifndef MONITOR_H
#define MONITOR_H

#include <QWidget>
#include <QTcpSocket>

namespace Ui {
class monitor;
}

class monitor : public QWidget
{
    Q_OBJECT

public:
    explicit monitor(QTcpSocket *tcp_socket,QString background_path,QWidget *parent = 0);
    ~monitor();

    void Init();
    void con_state();//连接的判断
    QTcpSocket *tcp_socket;

signals:
    void to_back();

private:
    Ui::monitor *ui;

    QString background_path;
    bool flag;
};

#endif // MONITOR_H
