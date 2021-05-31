#include "start.h"
#include "ui_start.h"
#include <QPainter>
#include <cstdlib>
#include <ctime>
#include <QMessageBox>


Start::Start(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Start)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
    srand(time(0));//设置随机数的集合
    checkpoint=1;
    goal=1500;
    score=0;
    Val=2;
    Place();
    //画背景
    QPalette pa;
    pa.setBrush(backgroundRole(),QBrush(QPixmap("://3.jpg")));
    setPalette(pa);
    this->setFixedSize(600,450);//固定窗口大小
    pa.setBrush(backgroundRole(),QBrush(QPixmap("://bj.png")));
    ui->widget->setPalette(pa);
    //改变鼠标的图标
//    this->setCursor(QCursor(QPixmap("://qq.ico")));
}

Start::~Start()
{
    delete ui;
}

void Start::Place()
{
    for(int x=0;x<10;x++){
        for(int y=0;y<10;y++){
            map[x][y]=rand()%5+1;//1-5星星种类
        }
    }
}

void Start::paintEvent(QPaintEvent *)
{
    QPainter ter(this);
    for(int x=0;x<10;x++){
        for(int y=0;y<10;y++){
            QPixmap pix("://"+QString::number(10+map[x][y])+".png");
//            ter.drawPixmap(140+y*32,x*32+160,32,32,pix);//
              ter.drawPixmap(140+y*32,x*32+130,32,32,pix);//
        }
    }
    ui->score->display(score);
    ui->goal->setText(QString::number(this->goal));
    ui->checkpoint->setText(QString::number(this->checkpoint));
}

void Start::mouseReleaseEvent(QMouseEvent *e)
{
    if(e->button()==Qt::LeftButton){
        //判断点击的范围是不是在星星范围内
//        if(e->x()<0||e->x()>320||y()<160||y()>480){
        if(e->x()<140||e->x()>460||y()<130||y()>450){
            return;
        }
        //根据鼠标点击的坐标求出数组对应的下标
        int x=(e->y()-130)/32;
        int y=(e->x()-140)/32;
        map[x][y]+=10;//防止递归死循环
        size = 1;
        Find(x,y);
        if(size==1){
            map[x][y]-=10;
            return;
        }
        //计算分数
        if(size<5){
            score+=(size*10*Val);
        }else if(size<8){
            score+=(size*20*Val);
        }else if(size<12){
            score+=(size*25*Val);
        }else{
            score+=(size*30*Val);
        }

        if(pan()==false){
            if(score>goal){//�жϷ�������Ŀ������
                checkpoint++;//�ؿ���1
                if(checkpoint<5){//���ݹؿ�����Ŀ������
                    goal+=1300;
                }else if(checkpoint<10){
                    goal+=1800;
                }else if(checkpoint<15){
                    goal+=2500;
                }else if(checkpoint<20){
                    goal+=3000;
                }else{
                    goal+=3500;
                }
                //��ʾ
                ui->checkpoint->setText(QString::number(checkpoint));
                ui->goal->setText(QString::number(goal));
                Place();
            }else{//����û�г���Ŀ����������Ϸ���Խ���
                QMessageBox::warning(NULL,"error","GAME OVER",QMessageBox::Ok);
                close();
            }
        }

        SMove();
        update();
    }
}

void Start::Find(int x, int y)
{
    int a[4][2]={{-1,0},{0,-1},{0,1},{1,0}};
    for(int k=0;k<4;k++){
        int nx=x+a[k][0];//x-1  x    x   x+1
        int ny=y+a[k][1];//y   y-1  y+1   y
        if(nx<0||nx>9||ny<0||ny>9){//越界
            continue;
        }
        else if(map[nx][ny]<1||map[nx][ny]>5){//被点击过或者不是星星的
            continue;

        }
        else if(map[nx][ny]==map[x][y]-10){
            map[nx][ny]+=10;
            Find(nx,ny);//递归，新的坐标点为起点再找
            size++;
        }
    }
}

void Start::SMove()
{
   //向下掉落
   for(int x=9;x>0;x--){
       for(int y=0;y<=9;y++){
           if(map[x][y]<1||map[x][y]>5){//不是星星
               for(int z=x-1;z>=0;z--){
                   if(map[z][y]>0&&map[z][y]<6){
                       map[x][y]=map[z][y];
                       map[z][y]=0;
                       break;
                   }
               }
           }
       }
   }
   //向左移动
   for(int y=0;y<10;y++){
       if(map[9][y]<1||map[9][y]>5){
           for(int z=y+1;z<10;z++){
               if(map[9][z]>0&&map[9][z]<6){
                   for(int x=0;x<10;x++){
                       map[x][y]=map[x][z];
                       map[x][z]=0;
                   }
                   break;
               }
           }
       }
   }
}

bool Start::pan()
{  //�ж���Χ��û������������������ɫ��
    int a[4][2]={-1,0,0,-1,0,1,1,0};
    for(int x=0;x<10;x++){
        for(int y=0;y<10;y++){
            if(map[x][y]>0&&map[x][y]<6){
                for(int k=0;k<4;k++){
                    int nx=a[k][0]+x;
                    int ny=a[k][1]+y;
                    if(nx<0||nx>9||ny<0||ny>9) {
                        continue;
                    }
                    else if(map[nx][ny]<1||map[nx][ny]>5) {
                        continue;
                    }
                    else if(map[nx][ny]==map[x][y]){
                        return true;
                    }
                }
            }
        }
    }
    return false;
}

void Start::keyPressEvent(QKeyEvent *e)
{
    if(e->key()==Qt::Key_Z){
        Val=8;
    }else if(e->key()==Qt::Key_M){
        Val=2;
    }
}


void Start::on_back_clicked()
{
    emit to_back();
    this->hide();
}
