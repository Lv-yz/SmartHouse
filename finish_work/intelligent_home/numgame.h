#ifndef NUMGAME_H
#define NUMGAME_H

#include <QDialog>
#include <QKeyEvent>
namespace Ui {
class NumGame;
}

class NumGame : public QDialog
{
    Q_OBJECT

public:
    explicit NumGame(QWidget *parent = 0);
    ~NumGame();
    void Rand();
    void Up();
    void Down();
    void Right();
    void Left();
    void Bs();
    void paintEvent(QPaintEvent *);//绘图事件 - show();
    void keyPressEvent(QKeyEvent *e);//键盘按下事件  - input();
private slots:
    void on_back_clicked();

private:
    Ui::NumGame *ui;
    int map[4][4];//棋盘
    int score;//分数
signals:
    void to_back();
};

#endif // NUMGAME_H
