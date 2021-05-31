#ifndef MUSIC_H
#define MUSIC_H

#include <QWidget>
#include <QTcpSocket>
#include <QMediaPlayer>

namespace Ui {
class music;
}

class music : public QWidget
{
    Q_OBJECT

public:
    explicit music(QTcpSocket *tcp_socket,QString background_path,QWidget *parent = 0);
    ~music();

    void Init();
    void con_state();//连接的判断
    QTcpSocket *tcp_socket;
public slots:
    void bofang();
    void tingzhi();
    void shangyishou();
    void xiayishou();
signals:
        void to_back();

private:
    Ui::music *ui;

    QMediaPlayer* mp3;
    int i;


    QString background_path;
    bool flag;
};

#endif // MUSIC_H
