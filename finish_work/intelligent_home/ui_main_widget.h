/********************************************************************************
** Form generated from reading UI file 'main_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WIDGET_H
#define UI_MAIN_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Main_Widget
{
public:
    QWidget *widget;
    QLCDNumber *display_time;
    QLCDNumber *display_date;
    QLabel *xinqi;
    QLabel *robot;
    QLabel *state;
    QLCDNumber *tem;
    QLCDNumber *phy;
    QLabel *label;
    QLabel *label_2;
    QFrame *line;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *button_music;
    QPushButton *button_vedio;
    QPushButton *button_curtain;
    QPushButton *button_light;
    QPushButton *quit;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *button_recreation;
    QPushButton *button_monitor;
    QPushButton *button_appliance;

    void setupUi(QDialog *Main_Widget)
    {
        if (Main_Widget->objectName().isEmpty())
            Main_Widget->setObjectName(QStringLiteral("Main_Widget"));
        Main_Widget->resize(600, 450);
        widget = new QWidget(Main_Widget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 600, 450));
        display_time = new QLCDNumber(widget);
        display_time->setObjectName(QStringLiteral("display_time"));
        display_time->setGeometry(QRect(350, 60, 211, 61));
        display_time->setDigitCount(8);
        display_date = new QLCDNumber(widget);
        display_date->setObjectName(QStringLiteral("display_date"));
        display_date->setGeometry(QRect(420, 130, 141, 31));
        display_date->setDigitCount(10);
        xinqi = new QLabel(widget);
        xinqi->setObjectName(QStringLiteral("xinqi"));
        xinqi->setGeometry(QRect(340, 130, 61, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        xinqi->setFont(font);
        xinqi->setStyleSheet(QLatin1String("#xinqi{\n"
"color:rgb(233, 222, 255)\n"
"}"));
        robot = new QLabel(widget);
        robot->setObjectName(QStringLiteral("robot"));
        robot->setGeometry(QRect(20, 60, 191, 111));
        robot->setStyleSheet(QLatin1String("#button_photo{\n"
"border-radius:40px;\n"
"margin:3px;\n"
"padding:3px;\n"
"}"));
        state = new QLabel(widget);
        state->setObjectName(QStringLiteral("state"));
        state->setGeometry(QRect(560, 15, 20, 20));
        state->setMinimumSize(QSize(20, 20));
        state->setMaximumSize(QSize(20, 20));
        tem = new QLCDNumber(widget);
        tem->setObjectName(QStringLiteral("tem"));
        tem->setGeometry(QRect(500, 180, 61, 31));
        phy = new QLCDNumber(widget);
        phy->setObjectName(QStringLiteral("phy"));
        phy->setGeometry(QRect(500, 230, 61, 31));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(440, 180, 51, 21));
        label->setFont(font);
        label->setStyleSheet(QStringLiteral(""));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(440, 230, 51, 21));
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral(""));
        line = new QFrame(widget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 50, 600, 3));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        layoutWidget = new QWidget(widget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 330, 581, 111));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        button_music = new QPushButton(layoutWidget);
        button_music->setObjectName(QStringLiteral("button_music"));
        button_music->setMinimumSize(QSize(80, 80));
        button_music->setMaximumSize(QSize(80, 80));
        button_music->setStyleSheet(QLatin1String("#button_music{\n"
"border-radius:10px;\n"
"margin:3px;\n"
"padding:3px;\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/\351\237\263\344\271\220.ico"), QSize(), QIcon::Normal, QIcon::Off);
        button_music->setIcon(icon);
        button_music->setIconSize(QSize(80, 80));

        horizontalLayout->addWidget(button_music);

        button_vedio = new QPushButton(layoutWidget);
        button_vedio->setObjectName(QStringLiteral("button_vedio"));
        button_vedio->setMinimumSize(QSize(80, 80));
        button_vedio->setMaximumSize(QSize(80, 80));
        button_vedio->setStyleSheet(QLatin1String("#button_vedio{\n"
"border-radius:10px;\n"
"margin:3px;\n"
"padding:3px;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/\347\224\265\345\275\261.ico"), QSize(), QIcon::Normal, QIcon::Off);
        button_vedio->setIcon(icon1);
        button_vedio->setIconSize(QSize(80, 80));

        horizontalLayout->addWidget(button_vedio);

        button_curtain = new QPushButton(layoutWidget);
        button_curtain->setObjectName(QStringLiteral("button_curtain"));
        button_curtain->setMinimumSize(QSize(80, 80));
        button_curtain->setMaximumSize(QSize(80, 80));
        button_curtain->setStyleSheet(QLatin1String("#button_curtain{\n"
"border-radius:10px;\n"
"margin:3px;\n"
"padding:3px;\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/\347\252\227\345\270\230.ico"), QSize(), QIcon::Normal, QIcon::Off);
        button_curtain->setIcon(icon2);
        button_curtain->setIconSize(QSize(80, 80));

        horizontalLayout->addWidget(button_curtain);

        button_light = new QPushButton(layoutWidget);
        button_light->setObjectName(QStringLiteral("button_light"));
        button_light->setMinimumSize(QSize(80, 80));
        button_light->setMaximumSize(QSize(80, 80));
        button_light->setStyleSheet(QLatin1String("#button_light{\n"
"border-radius:10px;\n"
"margin:3px;\n"
"padding:3px;\n"
"}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/\347\201\257\345\205\211.ico"), QSize(), QIcon::Normal, QIcon::Off);
        button_light->setIcon(icon3);
        button_light->setIconSize(QSize(80, 80));

        horizontalLayout->addWidget(button_light);

        quit = new QPushButton(layoutWidget);
        quit->setObjectName(QStringLiteral("quit"));
        quit->setMinimumSize(QSize(80, 80));
        quit->setMaximumSize(QSize(80, 80));
        quit->setStyleSheet(QLatin1String("#quit{\n"
"border-radius:10px;\n"
"margin:3px;\n"
"padding:3px;\n"
"}"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/chinaz70.ico"), QSize(), QIcon::Normal, QIcon::Off);
        quit->setIcon(icon4);
        quit->setIconSize(QSize(80, 80));
        quit->setFlat(true);

        horizontalLayout->addWidget(quit);

        layoutWidget1 = new QWidget(widget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 210, 331, 111));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        button_recreation = new QPushButton(layoutWidget1);
        button_recreation->setObjectName(QStringLiteral("button_recreation"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(button_recreation->sizePolicy().hasHeightForWidth());
        button_recreation->setSizePolicy(sizePolicy);
        button_recreation->setMinimumSize(QSize(80, 80));
        button_recreation->setMaximumSize(QSize(80, 80));
        button_recreation->setStyleSheet(QLatin1String("#button_recreation{\n"
"border-radius:10px;\n"
"margin:3px;\n"
"padding:3px;\n"
"}"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/\345\250\261\344\271\220.ico"), QSize(), QIcon::Normal, QIcon::Off);
        button_recreation->setIcon(icon5);
        button_recreation->setIconSize(QSize(80, 80));

        horizontalLayout_2->addWidget(button_recreation);

        button_monitor = new QPushButton(layoutWidget1);
        button_monitor->setObjectName(QStringLiteral("button_monitor"));
        button_monitor->setMinimumSize(QSize(80, 80));
        button_monitor->setMaximumSize(QSize(80, 80));
        button_monitor->setStyleSheet(QLatin1String("#button_monitor{\n"
"border-radius:10px;\n"
"margin:3px;\n"
"padding:3px;\n"
"}"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/\347\233\221\346\216\247.ico"), QSize(), QIcon::Normal, QIcon::Off);
        button_monitor->setIcon(icon6);
        button_monitor->setIconSize(QSize(80, 80));

        horizontalLayout_2->addWidget(button_monitor);

        button_appliance = new QPushButton(layoutWidget1);
        button_appliance->setObjectName(QStringLiteral("button_appliance"));
        button_appliance->setMinimumSize(QSize(80, 80));
        button_appliance->setMaximumSize(QSize(80, 80));
        button_appliance->setStyleSheet(QLatin1String("#button_appliance{\n"
"border-radius:10px;\n"
"margin:3px;\n"
"padding:3px;\n"
"}"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/\345\272\224\347\224\250.ico"), QSize(), QIcon::Normal, QIcon::Off);
        button_appliance->setIcon(icon7);
        button_appliance->setIconSize(QSize(80, 80));

        horizontalLayout_2->addWidget(button_appliance);


        retranslateUi(Main_Widget);

        QMetaObject::connectSlotsByName(Main_Widget);
    } // setupUi

    void retranslateUi(QDialog *Main_Widget)
    {
        Main_Widget->setWindowTitle(QApplication::translate("Main_Widget", "Main_Widget", 0));
        xinqi->setText(QApplication::translate("Main_Widget", "TextLabel", 0));
        robot->setText(QString());
        state->setText(QString());
        label->setText(QApplication::translate("Main_Widget", "\346\270\251\345\272\246", 0));
        label_2->setText(QApplication::translate("Main_Widget", "\346\271\277\345\272\246", 0));
        button_music->setText(QString());
        button_vedio->setText(QString());
        button_curtain->setText(QString());
        button_light->setText(QString());
        quit->setText(QString());
        button_recreation->setText(QString());
        button_monitor->setText(QString());
        button_appliance->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Main_Widget: public Ui_Main_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WIDGET_H
