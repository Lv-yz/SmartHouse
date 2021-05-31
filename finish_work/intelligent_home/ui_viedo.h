/********************************************************************************
** Form generated from reading UI file 'viedo.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEDO_H
#define UI_VIEDO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_viedo
{
public:
    QWidget *widget;
    QLabel *state;
    QPushButton *back;
    QFrame *line;
    QSlider *horizontalSlider;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QWidget *viedo)
    {
        if (viedo->objectName().isEmpty())
            viedo->setObjectName(QStringLiteral("viedo"));
        viedo->resize(600, 450);
        widget = new QWidget(viedo);
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
        line = new QFrame(widget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 50, 600, 3));
        line->setStyleSheet(QStringLiteral("#line{color:rgb(235, 230, 255)}"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        horizontalSlider = new QSlider(widget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(60, 400, 521, 31));
        horizontalSlider->setOrientation(Qt::Horizontal);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 400, 32, 32));
        pushButton->setMinimumSize(QSize(32, 32));
        pushButton->setMaximumSize(QSize(32, 32));
        pushButton->setStyleSheet(QStringLiteral("#pushButtion{border-radius:4px;}"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/chinaz37.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(32, 32));
        pushButton->setFlat(true);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 50, 600, 331));

        retranslateUi(viedo);

        QMetaObject::connectSlotsByName(viedo);
    } // setupUi

    void retranslateUi(QWidget *viedo)
    {
        viedo->setWindowTitle(QApplication::translate("viedo", "Form", 0));
        state->setText(QString());
        back->setText(QString());
        pushButton->setText(QString());
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class viedo: public Ui_viedo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEDO_H
