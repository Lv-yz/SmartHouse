/********************************************************************************
** Form generated from reading UI file 'start.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_START_H
#define UI_START_H

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

class Ui_Start
{
public:
    QPushButton *back;
    QWidget *widget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *checkpoint;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *goal;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLCDNumber *score;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QDialog *Start)
    {
        if (Start->objectName().isEmpty())
            Start->setObjectName(QStringLiteral("Start"));
        Start->resize(600, 450);
        back = new QPushButton(Start);
        back->setObjectName(QStringLiteral("back"));
        back->setGeometry(QRect(20, 10, 30, 30));
        back->setMinimumSize(QSize(30, 30));
        back->setMaximumSize(QSize(30, 30));
        QIcon icon;
        icon.addFile(QStringLiteral(":/timg.ico"), QSize(), QIcon::Normal, QIcon::Off);
        back->setIcon(icon);
        back->setIconSize(QSize(30, 30));
        widget = new QWidget(Start);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(140, 0, 320, 450));
        layoutWidget = new QWidget(widget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(90, 10, 101, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("#label_2{color:rgb(235, 230, 255)}"));

        horizontalLayout->addWidget(label_2);

        checkpoint = new QLabel(layoutWidget);
        checkpoint->setObjectName(QStringLiteral("checkpoint"));
        checkpoint->setFont(font);
        checkpoint->setStyleSheet(QStringLiteral("#checkpoint{color:rgb(235, 230, 255)}"));

        horizontalLayout->addWidget(checkpoint);

        layoutWidget1 = new QWidget(widget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 80, 101, 31));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("#label{color:rgb(235, 230, 255)}"));

        horizontalLayout_2->addWidget(label);

        goal = new QLabel(layoutWidget1);
        goal->setObjectName(QStringLiteral("goal"));
        goal->setFont(font);
        goal->setStyleSheet(QStringLiteral("#goal{color:rgb(235, 230, 255)}"));

        horizontalLayout_2->addWidget(goal);

        layoutWidget2 = new QWidget(widget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(170, 80, 132, 31));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);
        label_3->setStyleSheet(QStringLiteral("#label_3{color:rgb(235, 230, 255)}"));

        horizontalLayout_3->addWidget(label_3);

        score = new QLCDNumber(layoutWidget2);
        score->setObjectName(QStringLiteral("score"));

        horizontalLayout_3->addWidget(score);

        line = new QFrame(Start);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(140, 0, 3, 450));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(Start);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(460, 0, 3, 450));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(Start);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(0, 50, 140, 3));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_4 = new QLabel(Start);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 220, 121, 221));
        label_5 = new QLabel(Start);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(470, 200, 121, 221));

        retranslateUi(Start);

        QMetaObject::connectSlotsByName(Start);
    } // setupUi

    void retranslateUi(QDialog *Start)
    {
        Start->setWindowTitle(QApplication::translate("Start", "Dialog", 0));
        back->setText(QString());
        label_2->setText(QApplication::translate("Start", "\345\205\263\345\215\241\357\274\232", 0));
        checkpoint->setText(QString());
        label->setText(QApplication::translate("Start", "\347\233\256\346\240\207\357\274\232", 0));
        goal->setText(QString());
        label_3->setText(QApplication::translate("Start", "\345\210\206\346\225\260\357\274\232", 0));
        label_4->setText(QString());
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Start: public Ui_Start {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_START_H
