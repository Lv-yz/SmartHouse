/********************************************************************************
** Form generated from reading UI file 'numgame.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NUMGAME_H
#define UI_NUMGAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_NumGame
{
public:
    QPushButton *back;
    QLCDNumber *score;
    QFrame *line;
    QFrame *line_2;
    QLabel *label;
    QLabel *come_on;

    void setupUi(QDialog *NumGame)
    {
        if (NumGame->objectName().isEmpty())
            NumGame->setObjectName(QStringLiteral("NumGame"));
        NumGame->resize(600, 450);
        back = new QPushButton(NumGame);
        back->setObjectName(QStringLiteral("back"));
        back->setGeometry(QRect(20, 10, 30, 30));
        back->setMinimumSize(QSize(30, 30));
        back->setMaximumSize(QSize(30, 30));
        back->setFocusPolicy(Qt::NoFocus);
        QIcon icon;
        icon.addFile(QStringLiteral(":/timg.ico"), QSize(), QIcon::Normal, QIcon::Off);
        back->setIcon(icon);
        back->setIconSize(QSize(30, 30));
        score = new QLCDNumber(NumGame);
        score->setObjectName(QStringLiteral("score"));
        score->setGeometry(QRect(460, 140, 131, 51));
        score->setDigitCount(6);
        line = new QFrame(NumGame);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 50, 600, 3));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(NumGame);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(400, 50, 3, 400));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label = new QLabel(NumGame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(523, 101, 61, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("#label{color:rgb(235, 230, 255)}"));
        come_on = new QLabel(NumGame);
        come_on->setObjectName(QStringLiteral("come_on"));
        come_on->setGeometry(QRect(420, 220, 161, 211));

        retranslateUi(NumGame);

        QMetaObject::connectSlotsByName(NumGame);
    } // setupUi

    void retranslateUi(QDialog *NumGame)
    {
        NumGame->setWindowTitle(QApplication::translate("NumGame", "Dialog", 0));
        back->setText(QString());
        label->setText(QApplication::translate("NumGame", "score", 0));
        come_on->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class NumGame: public Ui_NumGame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NUMGAME_H
