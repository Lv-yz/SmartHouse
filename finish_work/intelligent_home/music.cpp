#include "music.h"
#include "ui_music.h"
#include <QTimer>

music::music(QTcpSocket *tcp_socket, QString background_path, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::music)
{
    ui->setupUi(this);
    this->tcp_socket = tcp_socket;
    //设置窗口属性
    this->setFixedSize(600,450);
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);

    //设置背景
    ui->widget->setAutoFillBackground(true);
    QPalette pal;
    this->background_path = background_path;
    pal.setBrush(QPalette::Background,QBrush(QPixmap(this->background_path)));
    ui->widget->setPalette(pal);

    Init();
}

music::~music()
{
    delete ui;
}

void music::Init()
{
    //设置连接信号
    QTimer *t_state = new QTimer(this);
    connect(t_state,&QTimer::timeout,this,&music::con_state);
    t_state->start(1000);
    //返回按钮的单击事件
    connect(ui->back,&QPushButton::clicked,
        [=](){
        emit to_back();
        this->hide();
        }
    );
}
//void music::con_state(){
//    if(tcp_socket->state() == QAbstractSocket::UnconnectedState){
////        qDebug() << "连接服务器失败！" << endl;
//        ui->state->setPixmap(QPixmap("./image/fail.png"));
//    }else{
////        qDebug() << "连接服务器成功！" << endl;
//        ui->state->setPixmap(QPixmap("./image/success.png"));
//    }
//}


/////////////////////////////////////////////
void music::con_state(){
    if(tcp_socket->state() == QAbstractSocket::UnconnectedState){
//        qDebug() << "连接服务器失败！" << endl;
        ui->state->setPixmap(QPixmap("./image/fail.png"));
    }else{
//        qDebug() << "连接服务器成功！" << endl;
        ui->state->setPixmap(QPixmap("./image/success.png"));
        connect(ui->pushButton1_3,SIGNAL(clicked()),this,SLOT(bofang()));
        connect(ui->pushButton2_3,SIGNAL(clicked()),this,SLOT(tingzhi()));
        connect(ui->pushButton3_3,SIGNAL(clicked()),this,SLOT(shangyishou()));
        connect(ui->pushButton4_3,SIGNAL(clicked()),this,SLOT(xiayishou()));
    }
}
void music::bofang()
{

    mp3->setMedia(QUrl::fromLocalFile("1.mp3"));
    mp3->setVolume(60);
    ui->Slider_3->setValue(60);
    mp3->play();
    ui->lineEdit3_3->setText("正在播放-成都~姜真祖");
     connect(ui->Slider_3,SIGNAL(valueChanged(int)),mp3,SLOT(setVolume(int)));
}

void music::tingzhi()
{
    ui->lineEdit3_3->setText("音乐停止播放");
    mp3->stop();
}

void music::shangyishou()
{

    mp3->stop();
    if(i==0){
        i = 4;
    }else{
        i--;
    }
    mp3->setMedia(QUrl::fromLocalFile(QString::number(i)+".mp3"));
    mp3->play();
 if(i==0){
      ui->lineEdit3_3->setText("正在播放-凡人歌~李宗盛");
 }
 if(i==1){
     ui->lineEdit3_3->setText("正在播放-成都~姜真祖");
 }
 if(i==2){
      ui->lineEdit3_3->setText("正在播放-左手指月~萨顶顶");
 }
 if(i==3){
     ui->lineEdit3_3->setText("正在播放-差三岁~Jam");
 }
 if(i==4){
     ui->lineEdit3_3->setText("正在播放-盗将行~cover、花粥");
 }
}

void music::xiayishou()
{
    mp3->stop();
    if(i==4){
        i = 0;
    }else{
        i++;
    }
    mp3->setMedia(QUrl::fromLocalFile(QString::number(i)+".mp3"));
    mp3->play();
    if(i==0){
         ui->lineEdit3_3->setText("正在播放-凡人歌~李宗盛");
    }
    if(i==1){
        ui->lineEdit3_3->setText("正在播放-成都~姜真祖");
    }
    if(i==2){
         ui->lineEdit3_3->setText("正在播放-左手指月~萨顶顶");
    }
    if(i==3){
        ui->lineEdit3_3->setText("正在播放-差三岁~Jam");
    }
    if(i==4){
        ui->lineEdit3_3->setText("正在播放-盗将行~cover、花粥");
    }
}
