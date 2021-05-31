#include "numgame.h"
#include "ui_numgame.h"
#include <QPainter>
#include<ctime>
#include <QDebug>
NumGame::NumGame(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NumGame)
{
    ui->setupUi(this);

    this->setWindowFlags(Qt::FramelessWindowHint);
    //画背景
    QPalette pa;
    QPixmap pix("./image/picture33.jpg");
    pa.setBrush(backgroundRole(),QBrush(pix));
    this->setPalette(pa);
    this->setFixedSize(600,450);//固定窗口的大小
    //背景音乐播放

    //初始化
    for(int x=0;x<4;x++){
        for(int y=0;y<4;y++){
            map[x][y] = 0;//0 2 4 8 16 32 64 128 .....
        }
    }
    score = 0;
    srand(time(0));
    Rand();
    Rand();
}

NumGame::~NumGame()
{
    delete ui;
}

void NumGame::Rand()
{
    int x = 0,y = 0,i = 0;
    for(x = 0;x<4;x++){
        for(y = 0;y<4;y++){
            if(map[x][y]==0){
                i = 1;
                x = 5;//跳出外层循环
                break;//跳出单层循环
            }
        }
    }
    while(i){//防止冲突
        int x = rand() % 4;
        int y = rand() % 4;
        if(map[x][y]==0){
            if(rand() % 4 == 20){//限制只能产生2/4，且产生2的概率大于4
                map[x][y] = 4;
            }else{
                map[x][y] = 2;

            }
        score = score +map[x][y];
        break;
        }
    }
}

void NumGame::Up(){
    int x=0,y=0,k=0;
    int size=0;
    for(k=0;k<3;k++)
    for(x=1;x<4;x++){
        for(y=0;y<4;y++){
            //下面有数，上面为空
            if(map[x][y]!=0&&map[x-1][y]==0){
                map[x-1][y]=map[x][y];
                map[x][y]=0;
                size++;
            }
            //上下都有数，并且相等
            else if(map[x][y]!=0&&map[x][y]==map[x-1][y]){
                map[x-1][y]*=2;//map[x-1][y]=map[x][y]+map[x-1][y];
                map[x][y]=0;
                size++;
            }
        }
    }
    if(size!=0){
        Rand();
        update();
    }
}

void NumGame::Left()
{
    int x=0,y=0,k=0;
    int size=0;
    for(k=0;k<3;k++)
    for(y=1;y<4;y++){
        for(x=0;x<4;x++){
            //下面有数，上面为空
            if(map[x][y]!=0&&map[x][y-1]==0){
                map[x][y-1]=map[x][y];
                map[x][y]=0;
                size++;
            }
            //上下都有数，并且相等
            else if(map[x][y]!=0&&map[x][y]==map[x][y-1]){
                map[x][y-1]*=2;//map[x-1][y]=map[x][y]+map[x-1][y];
                map[x][y]=0;
                size++;
            }
        }
    }
    if(size!=0){
        Rand();
        update();
    }

}

void NumGame::Right()
{
    int x=0,y=0,k=0;
    int size=0;
    for(k=0;k<3;k++)
    for(y=2;y>=0;y--){
        for(x=0;x<4;x++){
            //下面有数，上面为空
            if(map[x][y]!=0&&map[x][y+1]==0){
                map[x][y+1]=map[x][y];
                map[x][y]=0;
                size++;
            }
            //上下都有数，并且相等
            else if(map[x][y]!=0&&map[x][y]==map[x][y+1]){
                map[x][y+1]*=2;//map[x-1][y]=map[x][y]+map[x-1][y];
                map[x][y]=0;
                size++;
            }
        }
    }
    if(size!=0){
        Rand();
        update();
    }
}

void NumGame::Down()
{
    int x=0,y=0,k=0;
    int size=0;
    for(k=0;k<3;k++)
    for(x=2;x>=0;x--){
        for(y=0;y<4;y++){
            //上面有数，下面为空
            if(map[x][y]!=0&&map[x+1][y]==0){
                map[x+1][y]=map[x][y];
                map[x][y]=0;
                size++;
            }
            //上下都有数，并且相等
            else if(map[x][y]!=0&&map[x][y]==map[x+1][y]){
                map[x+1][y]*=2;//map[x+1][y]=map[x][y]+map[x+1][y];
                map[x][y]=0;
                size++;
            }
        }
    }
    if(size!=0){
       Rand();
       update();
    }
}

void NumGame::Bs()
{
    int x = rand()%4;
    int y = rand()%4;
    score =  - map[x][y];
    map[x][y] = 1024;
    score = score + 1024;
    update();
}

void NumGame::paintEvent(QPaintEvent *)
{
    QPainter ter(this);
    for(int x=0;x<4;x++){
        for(int y=0;y<4;y++){
            QPixmap pix("://"+QString::number(map[x][y])+".png");//://0.png
            ter.drawPixmap(y*100,50+x*100,100,100,pix);
        }
    }
    ui->score->display(score);
}

void NumGame::keyPressEvent(QKeyEvent *e)
{
    switch(e->key()){
        case Qt::Key_Up:
            Up();
            break;
        case Qt::Key_Left:
            Left();
            break;
        case Qt::Key_Right:
            Right();
            break;
        case Qt::Key_Down:
            Down();
            break;
        case Qt::Key_Z:
            //Bs();
            break;
    }
}

void NumGame::on_back_clicked()
{
    emit to_back();
    qDebug() << "111" << endl;
    this->hide();
}
