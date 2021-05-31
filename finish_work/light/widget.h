#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTcpSocket>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

    void on_connect();
    void on_rec();
    void send(int i, int c, int p);

protected:
    void closeEvent(QCloseEvent *);

    void mousePressEvent(QMouseEvent *);
    void mouseMoveEvent(QMouseEvent *);

private:
    Ui::Widget *ui;

    QTcpSocket tcpfp;
    bool startus;
    int m_x;
    int m_y;
//    QString m_name;
};

#endif // WIDGET_H
