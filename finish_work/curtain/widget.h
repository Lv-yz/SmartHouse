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

    void on_connect();
    void on_rec();
    void send(int i, int c);

protected:
    void closeEvent(QCloseEvent *);

    void mousePressEvent(QMouseEvent *);
    void mouseMoveEvent(QMouseEvent *);

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private:
    Ui::Widget *ui;

    QTcpSocket tcpfp;
    bool startus;

    int m_x;
    int m_y;
};

#endif // WIDGET_H
