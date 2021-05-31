/********************************************************************************
** Form generated from reading UI file 'curtain.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CURTAIN_H
#define UI_CURTAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_curtain
{
public:
    QWidget *widget;
    QLabel *state;
    QPushButton *back;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *curtain_state;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QLabel *label_open;
    QPushButton *open;
    QPushButton *close;
    QLabel *label_close;
    QFrame *line;
    QFrame *line_2;

    void setupUi(QWidget *curtain)
    {
        if (curtain->objectName().isEmpty())
            curtain->setObjectName(QStringLiteral("curtain"));
        curtain->resize(600, 450);
        widget = new QWidget(curtain);
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
        layoutWidget = new QWidget(widget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(300, 50, 291, 381));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(0, 150));
        label->setMaximumSize(QSize(16777215, 150));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("#label{color:rgb(235, 230, 255)}"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        curtain_state = new QLabel(layoutWidget);
        curtain_state->setObjectName(QStringLiteral("curtain_state"));
        curtain_state->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(curtain_state);

        layoutWidget1 = new QWidget(widget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 50, 291, 381));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_open = new QLabel(layoutWidget1);
        label_open->setObjectName(QStringLiteral("label_open"));
        label_open->setMinimumSize(QSize(0, 100));
        label_open->setMaximumSize(QSize(16777215, 100));

        gridLayout->addWidget(label_open, 0, 0, 1, 1);

        open = new QPushButton(layoutWidget1);
        open->setObjectName(QStringLiteral("open"));
        open->setMinimumSize(QSize(80, 80));
        open->setMaximumSize(QSize(80, 80));
        open->setFont(font);
        open->setStyleSheet(QStringLiteral("#open{color:rgb(235, 230, 255);border-radius:10px;}"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/chinaz71.ico"), QSize(), QIcon::Normal, QIcon::Off);
        open->setIcon(icon1);
        open->setIconSize(QSize(80, 80));
        open->setFlat(true);

        gridLayout->addWidget(open, 0, 1, 1, 1);

        close = new QPushButton(layoutWidget1);
        close->setObjectName(QStringLiteral("close"));
        close->setMinimumSize(QSize(80, 80));
        close->setMaximumSize(QSize(80, 80));
        close->setFont(font);
        close->setStyleSheet(QStringLiteral("#close{color:rgb(235, 230, 255);border-radius:10px;}"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/chinaz70.ico"), QSize(), QIcon::Normal, QIcon::Off);
        close->setIcon(icon2);
        close->setIconSize(QSize(80, 80));
        close->setFlat(true);

        gridLayout->addWidget(close, 1, 1, 1, 1);

        label_close = new QLabel(layoutWidget1);
        label_close->setObjectName(QStringLiteral("label_close"));
        label_close->setMinimumSize(QSize(0, 100));
        label_close->setMaximumSize(QSize(16777215, 100));

        gridLayout->addWidget(label_close, 1, 0, 1, 1);

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

        retranslateUi(curtain);

        QMetaObject::connectSlotsByName(curtain);
    } // setupUi

    void retranslateUi(QWidget *curtain)
    {
        curtain->setWindowTitle(QApplication::translate("curtain", "Form", 0));
        state->setText(QString());
        back->setText(QString());
        label->setText(QApplication::translate("curtain", "\347\252\227\345\270\230\347\212\266\346\200\201", 0));
        curtain_state->setText(QString());
        label_open->setText(QString());
        open->setText(QString());
        close->setText(QString());
        label_close->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class curtain: public Ui_curtain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CURTAIN_H
