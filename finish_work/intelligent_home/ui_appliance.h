/********************************************************************************
** Form generated from reading UI file 'appliance.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPLIANCE_H
#define UI_APPLIANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_appliance
{
public:
    QWidget *widget;
    QLabel *state;
    QPushButton *back;
    QWidget *widget_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *air_condiction;
    QPushButton *air_open;
    QLabel *ari_state;
    QWidget *widget_4;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *television;
    QPushButton *tele_open;
    QLabel *tele_state;
    QFrame *line;

    void setupUi(QWidget *appliance)
    {
        if (appliance->objectName().isEmpty())
            appliance->setObjectName(QStringLiteral("appliance"));
        appliance->resize(600, 450);
        widget = new QWidget(appliance);
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
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(0, 50, 601, 201));
        layoutWidget = new QWidget(widget_2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(2, 1, 601, 211));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        air_condiction = new QLabel(layoutWidget);
        air_condiction->setObjectName(QStringLiteral("air_condiction"));
        air_condiction->setMinimumSize(QSize(150, 0));
        air_condiction->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_2->addWidget(air_condiction);

        air_open = new QPushButton(layoutWidget);
        air_open->setObjectName(QStringLiteral("air_open"));
        air_open->setMinimumSize(QSize(80, 80));
        air_open->setMaximumSize(QSize(80, 80));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        air_open->setFont(font);
        air_open->setStyleSheet(QStringLiteral("#air_open{color:rgb(235, 230, 255);border-radius:10px;}"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/chinaz71.ico"), QSize(), QIcon::Normal, QIcon::Off);
        air_open->setIcon(icon1);
        air_open->setIconSize(QSize(80, 80));
        air_open->setFlat(true);

        horizontalLayout_2->addWidget(air_open);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);

        horizontalLayout_3->addLayout(horizontalLayout_2);

        ari_state = new QLabel(layoutWidget);
        ari_state->setObjectName(QStringLiteral("ari_state"));
        ari_state->setMinimumSize(QSize(250, 159));
        ari_state->setMaximumSize(QSize(250, 150));

        horizontalLayout_3->addWidget(ari_state);

        widget_4 = new QWidget(widget);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setGeometry(QRect(0, 250, 601, 201));
        layoutWidget1 = new QWidget(widget_4);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(2, 1, 601, 201));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        television = new QLabel(layoutWidget1);
        television->setObjectName(QStringLiteral("television"));
        television->setMinimumSize(QSize(150, 150));
        television->setMaximumSize(QSize(150, 150));

        horizontalLayout->addWidget(television);

        tele_open = new QPushButton(layoutWidget1);
        tele_open->setObjectName(QStringLiteral("tele_open"));
        tele_open->setMinimumSize(QSize(80, 80));
        tele_open->setMaximumSize(QSize(80, 80));
        tele_open->setFont(font);
        tele_open->setStyleSheet(QStringLiteral("#tele_open{color:rgb(235, 230, 255);border-radius:10px;}"));
        tele_open->setIcon(icon1);
        tele_open->setIconSize(QSize(80, 80));
        tele_open->setFlat(true);

        horizontalLayout->addWidget(tele_open);


        horizontalLayout_4->addLayout(horizontalLayout);

        tele_state = new QLabel(layoutWidget1);
        tele_state->setObjectName(QStringLiteral("tele_state"));
        tele_state->setMinimumSize(QSize(250, 150));
        tele_state->setMaximumSize(QSize(250, 150));

        horizontalLayout_4->addWidget(tele_state);

        line = new QFrame(widget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 50, 600, 3));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        retranslateUi(appliance);

        QMetaObject::connectSlotsByName(appliance);
    } // setupUi

    void retranslateUi(QWidget *appliance)
    {
        appliance->setWindowTitle(QApplication::translate("appliance", "Form", 0));
        state->setText(QString());
        back->setText(QString());
        air_condiction->setText(QString());
        air_open->setText(QString());
        ari_state->setText(QString());
        television->setText(QString());
        tele_open->setText(QString());
        tele_state->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class appliance: public Ui_appliance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPLIANCE_H
