/********************************************************************************
** Form generated from reading UI file 'recreation.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECREATION_H
#define UI_RECREATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_recreation
{
public:
    QWidget *widget;
    QPushButton *back;
    QLabel *state;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QFrame *line;

    void setupUi(QWidget *recreation)
    {
        if (recreation->objectName().isEmpty())
            recreation->setObjectName(QStringLiteral("recreation"));
        recreation->resize(600, 450);
        widget = new QWidget(recreation);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 600, 450));
        back = new QPushButton(widget);
        back->setObjectName(QStringLiteral("back"));
        back->setGeometry(QRect(20, 10, 30, 30));
        back->setMinimumSize(QSize(30, 30));
        back->setMaximumSize(QSize(30, 30));
        QIcon icon;
        icon.addFile(QStringLiteral(":/timg.ico"), QSize(), QIcon::Normal, QIcon::Off);
        back->setIcon(icon);
        back->setIconSize(QSize(30, 30));
        state = new QLabel(widget);
        state->setObjectName(QStringLiteral("state"));
        state->setGeometry(QRect(560, 15, 20, 20));
        state->setMinimumSize(QSize(20, 20));
        state->setMaximumSize(QSize(20, 20));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(40, 100, 80, 80));
        pushButton->setMinimumSize(QSize(80, 80));
        pushButton->setMaximumSize(QSize(80, 80));
        pushButton->setStyleSheet(QStringLiteral("#pushButton{border-radius:10px;}"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/game1.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(80, 80));
        pushButton->setFlat(true);
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(180, 100, 80, 80));
        pushButton_2->setMinimumSize(QSize(80, 80));
        pushButton_2->setMaximumSize(QSize(80, 80));
        pushButton_2->setStyleSheet(QStringLiteral("#pushButton_2{border-radius:10px;}"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/game2.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);
        pushButton_2->setIconSize(QSize(80, 80));
        pushButton_2->setFlat(true);
        line = new QFrame(widget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 50, 600, 3));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        retranslateUi(recreation);

        QMetaObject::connectSlotsByName(recreation);
    } // setupUi

    void retranslateUi(QWidget *recreation)
    {
        recreation->setWindowTitle(QApplication::translate("recreation", "Form", 0));
        back->setText(QString());
        state->setText(QString());
        pushButton->setText(QString());
        pushButton_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class recreation: public Ui_recreation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECREATION_H
