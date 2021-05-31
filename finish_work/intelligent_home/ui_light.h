/********************************************************************************
** Form generated from reading UI file 'light.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIGHT_H
#define UI_LIGHT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_light
{
public:
    QWidget *widget;
    QLabel *state;
    QPushButton *back;
    QLabel *label_5;
    QFrame *line;
    QFrame *line_2;
    QWidget *widget1;
    QGridLayout *gridLayout;
    QLabel *draw_light;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *drawing_open;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label;
    QWidget *widget2;
    QGridLayout *gridLayout_2;
    QLabel *bed_light;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *bedroom_open;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_2;

    void setupUi(QWidget *light)
    {
        if (light->objectName().isEmpty())
            light->setObjectName(QStringLiteral("light"));
        light->resize(600, 450);
        widget = new QWidget(light);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 600, 450));
        state = new QLabel(widget);
        state->setObjectName(QStringLiteral("state"));
        state->setGeometry(QRect(560, 15, 20, 20));
        state->setMinimumSize(QSize(20, 20));
        state->setMaximumSize(QSize(20, 20));
        back = new QPushButton(widget);
        back->setObjectName(QStringLiteral("back"));
        back->setGeometry(QRect(20, 10, 30, 30));
        back->setMinimumSize(QSize(30, 30));
        back->setMaximumSize(QSize(30, 30));
        QIcon icon;
        icon.addFile(QStringLiteral(":/timg.ico"), QSize(), QIcon::Normal, QIcon::Off);
        back->setIcon(icon);
        back->setIconSize(QSize(30, 30));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(60, 300, 54, 12));
        line = new QFrame(widget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 50, 600, 3));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(widget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(300, 50, 3, 400));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        widget1 = new QWidget(widget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(1, 51, 301, 401));
        gridLayout = new QGridLayout(widget1);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        draw_light = new QLabel(widget1);
        draw_light->setObjectName(QStringLiteral("draw_light"));
        draw_light->setMinimumSize(QSize(150, 0));
        draw_light->setMaximumSize(QSize(150, 16777215));

        gridLayout->addWidget(draw_light, 1, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        drawing_open = new QPushButton(widget1);
        drawing_open->setObjectName(QStringLiteral("drawing_open"));
        drawing_open->setMinimumSize(QSize(80, 80));
        drawing_open->setMaximumSize(QSize(80, 80));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        drawing_open->setFont(font);
        drawing_open->setStyleSheet(QStringLiteral("#drawing_open{color:rgb(235, 230, 255);border-radius:10px;}"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/chinaz71.ico"), QSize(), QIcon::Normal, QIcon::Off);
        drawing_open->setIcon(icon1);
        drawing_open->setIconSize(QSize(80, 80));
        drawing_open->setFlat(true);

        horizontalLayout->addWidget(drawing_open);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout, 2, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 2, 2, 1, 1);

        label = new QLabel(widget1);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("#label{color:rgb(235, 230, 255)}"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 3);

        widget2 = new QWidget(widget);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(301, 51, 301, 401));
        gridLayout_2 = new QGridLayout(widget2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        bed_light = new QLabel(widget2);
        bed_light->setObjectName(QStringLiteral("bed_light"));
        bed_light->setMinimumSize(QSize(150, 0));
        bed_light->setMaximumSize(QSize(150, 16777215));

        gridLayout_2->addWidget(bed_light, 1, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_7, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        bedroom_open = new QPushButton(widget2);
        bedroom_open->setObjectName(QStringLiteral("bedroom_open"));
        bedroom_open->setMinimumSize(QSize(80, 80));
        bedroom_open->setMaximumSize(QSize(80, 80));
        bedroom_open->setFont(font);
        bedroom_open->setStyleSheet(QStringLiteral("#bedroom_open{color:rgb(235, 230, 255);border-radius:10px;}"));
        bedroom_open->setIcon(icon1);
        bedroom_open->setIconSize(QSize(80, 80));
        bedroom_open->setFlat(true);

        horizontalLayout_2->addWidget(bedroom_open);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        gridLayout_2->addLayout(horizontalLayout_2, 2, 1, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_8, 2, 2, 1, 1);

        label_2 = new QLabel(widget2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("#label_2{color:rgb(235, 230, 255)}"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 3);


        retranslateUi(light);

        QMetaObject::connectSlotsByName(light);
    } // setupUi

    void retranslateUi(QWidget *light)
    {
        light->setWindowTitle(QApplication::translate("light", "Form", 0));
        state->setText(QString());
        back->setText(QString());
        label_5->setText(QString());
        draw_light->setText(QString());
        drawing_open->setText(QString());
        label->setText(QApplication::translate("light", "\345\256\242\345\216\205", 0));
        bed_light->setText(QString());
        bedroom_open->setText(QString());
        label_2->setText(QApplication::translate("light", "\345\215\247\345\256\244", 0));
    } // retranslateUi

};

namespace Ui {
    class light: public Ui_light {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIGHT_H
