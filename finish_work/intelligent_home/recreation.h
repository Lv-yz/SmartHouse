#ifndef RECREATION_H
#define RECREATION_H

#include <QWidget>
#include <QTcpSocket>
#include "numgame.h"
#include "start.h"

namespace Ui {
class recreation;
}

class recreation : public QWidget
{
    Q_OBJECT

public:
    explicit recreation(QTcpSocket *tcp_socket,QString background_path,QWidget *parent = 0);
    ~recreation();

    void Init();
    void con_state();//连接的判断
    QTcpSocket *tcp_socket;

signals:
    void to_back();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();
    void deal_to_back();

private:
    Ui::recreation *ui;

    QString background_path;
    NumGame *n;
    Start *s;
};

#endif // RECREATION_H
