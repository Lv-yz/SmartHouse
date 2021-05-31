#ifndef MAIN_WIDGET_H
#define MAIN_WIDGET_H

#include <QDialog>
#include <QTcpSocket>
#include "viedo.h"
#include "appliance.h"
#include "curtain.h"
#include "light.h"
#include "monitor.h"
#include "music.h"
#include "recreation.h"
#include "viedo.h"
#include <QTimer>


namespace Ui {
class Main_Widget;
}

class Main_Widget : public QDialog
{
    Q_OBJECT

public:
    explicit Main_Widget(QTcpSocket *tcp_socket,QString background_path,QWidget *parent = 0);
    ~Main_Widget();

    void deal_t();
    void Init();
    void con_state();//连接的判断
    QTcpSocket *tcp_socket;
    void send(int i,int c);

signals:
//    void main_close();

private slots:
    void on_button_recreation_clicked();

    void on_button_monitor_clicked();

    void on_button_appliance_clicked();

    void on_button_curtain_clicked();

    void on_button_music_clicked();

    void on_button_vedio_clicked();

    void on_button_light_clicked();

    void on_quit_clicked();

    void deal_to_back();

    void deal_read();//读数据函数

private:
    Ui::Main_Widget *ui;


    QString background_path;
    viedo *w_viedo;
    appliance *w_appliance;
    curtain *w_curtain;
    light *w_light;
    monitor *w_monitor;
    music *w_music;
    recreation *w_recreatrion;
    QTimer *t;
//    QTimer *t_state;
    QTimer *t_read;
};

#endif // MAIN_WIDGET_H
