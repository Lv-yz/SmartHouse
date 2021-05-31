#ifndef VIEDO_H
#define VIEDO_H

#include <QWidget>
#include <QTcpSocket>
#include <QMovie>

namespace Ui {
class viedo;
}

class viedo : public QWidget
{
    Q_OBJECT

public:
    explicit viedo(QTcpSocket *tcp_socket,QString background_path,QWidget *parent = 0);
    ~viedo();

    void Init();
    void con_state();//连接的判断
    QTcpSocket *tcp_socket;

signals:
    void to_back();

private slots:
    void on_pushButton_clicked();

private:
    Ui::viedo *ui;

    QString background_path;
    bool flag;
    QMovie *movie;
};

#endif // VIEDO_H
