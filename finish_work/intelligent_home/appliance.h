#ifndef APPLIANCE_H
#define APPLIANCE_H

#include <QWidget>
#include <QTcpSocket>
#include <QTimer>

namespace Ui {
class appliance;
}

class appliance : public QWidget
{
    Q_OBJECT

public:
    explicit appliance(QTcpSocket *tcp_socket,QString background_path,QWidget *parent = 0);
    ~appliance();

    void Init();//初始化函数
    void con_state();//连接的判断
    QTcpSocket *tcp_socket;
    QString f_msg;
    bool flag;

signals:
    void to_back();//自定义信号，返回主界面


private slots:
    void on_back_clicked();    
    void on_air_open_clicked();

    void on_tele_open_clicked();
    void send(int i,int c);

protected:
    void timerEvent(QTimerEvent *);
private:
    Ui::appliance *ui;

    QString background_path;
    QTimer *t_state;

};

#endif // APPLIANCE_H
