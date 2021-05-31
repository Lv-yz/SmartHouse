#ifndef START_H
#define START_H

#include <QDialog>
#include <QMouseEvent>
#include <QKeyEvent>
namespace Ui {
class Start;
}

class Start : public QDialog
{
    Q_OBJECT

public:
    explicit Start(QWidget *parent = 0);
    ~Start();
    void Place();//放置星星1-5表示五种星星
    void paintEvent(QPaintEvent *);//画图事件
    void mouseReleaseEvent(QMouseEvent *e);//鼠标按键松开事件
    void Find(int x,int y);//找周围相同点
    void SMove();
    bool pan();
    void keyPressEvent(QKeyEvent *e);

private:
    Ui::Start *ui;
    int map[10][10];
    int score;
    int goal;
    int checkpoint;
    int size;
    int Val;//系数
signals:
    void to_back();
private slots:
    void on_back_clicked();
};

#endif // START_H
