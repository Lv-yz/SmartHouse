/********************************************************************************
** Form generated from reading UI file 'music.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUSIC_H
#define UI_MUSIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_music
{
public:
    QWidget *widget;
    QLabel *state;
    QPushButton *back;
    QFrame *line;
    QLineEdit *lineEdit3_3;
    QListWidget *listWidget_3;
    QPushButton *pushButton1_3;
    QPushButton *pushButton3_3;
    QLabel *label_5;
    QSlider *Slider_3;
    QPushButton *pushButton2_3;
    QPushButton *pushButton4_3;
    QLabel *label_6;

    void setupUi(QWidget *music)
    {
        if (music->objectName().isEmpty())
            music->setObjectName(QStringLiteral("music"));
        music->resize(600, 450);
        widget = new QWidget(music);
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
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        lineEdit3_3 = new QLineEdit(widget);
        lineEdit3_3->setObjectName(QStringLiteral("lineEdit3_3"));
        lineEdit3_3->setGeometry(QRect(10, 330, 261, 31));
        listWidget_3 = new QListWidget(widget);
        new QListWidgetItem(listWidget_3);
        new QListWidgetItem(listWidget_3);
        new QListWidgetItem(listWidget_3);
        new QListWidgetItem(listWidget_3);
        new QListWidgetItem(listWidget_3);
        new QListWidgetItem(listWidget_3);
        listWidget_3->setObjectName(QStringLiteral("listWidget_3"));
        listWidget_3->setGeometry(QRect(10, 80, 256, 241));
        pushButton1_3 = new QPushButton(widget);
        pushButton1_3->setObjectName(QStringLiteral("pushButton1_3"));
        pushButton1_3->setGeometry(QRect(320, 290, 93, 28));
        pushButton3_3 = new QPushButton(widget);
        pushButton3_3->setObjectName(QStringLiteral("pushButton3_3"));
        pushButton3_3->setGeometry(QRect(320, 330, 93, 28));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(330, 260, 72, 21));
        Slider_3 = new QSlider(widget);
        Slider_3->setObjectName(QStringLiteral("Slider_3"));
        Slider_3->setGeometry(QRect(350, 90, 22, 160));
        Slider_3->setValue(50);
        Slider_3->setOrientation(Qt::Vertical);
        pushButton2_3 = new QPushButton(widget);
        pushButton2_3->setObjectName(QStringLiteral("pushButton2_3"));
        pushButton2_3->setGeometry(QRect(460, 290, 93, 28));
        pushButton4_3 = new QPushButton(widget);
        pushButton4_3->setObjectName(QStringLiteral("pushButton4_3"));
        pushButton4_3->setGeometry(QRect(460, 330, 93, 28));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(400, 140, 131, 81));
        QFont font;
        font.setFamily(QStringLiteral("Monotype Corsiva"));
        font.setPointSize(36);
        font.setBold(false);
        font.setItalic(true);
        font.setWeight(50);
        label_6->setFont(font);

        retranslateUi(music);

        QMetaObject::connectSlotsByName(music);
    } // setupUi

    void retranslateUi(QWidget *music)
    {
        music->setWindowTitle(QApplication::translate("music", "Form", 0));
        state->setText(QString());
        back->setText(QString());

        const bool __sortingEnabled = listWidget_3->isSortingEnabled();
        listWidget_3->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget_3->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("music", "\346\255\214\346\233\262\345\210\227\350\241\250", 0));
        QListWidgetItem *___qlistwidgetitem1 = listWidget_3->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("music", "1.\345\207\241\344\272\272\346\255\214", 0));
        QListWidgetItem *___qlistwidgetitem2 = listWidget_3->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("music", "2.\346\210\220\351\203\275", 0));
        QListWidgetItem *___qlistwidgetitem3 = listWidget_3->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("music", "3.\345\267\246\346\211\213\346\214\207\346\234\210", 0));
        QListWidgetItem *___qlistwidgetitem4 = listWidget_3->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("music", "4.\345\267\256\344\270\211\345\262\201", 0));
        QListWidgetItem *___qlistwidgetitem5 = listWidget_3->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("music", "5.\347\233\227\345\260\206\350\241\214", 0));
        listWidget_3->setSortingEnabled(__sortingEnabled);

        pushButton1_3->setText(QApplication::translate("music", "\346\222\255\346\224\276", 0));
        pushButton3_3->setText(QApplication::translate("music", "\344\270\212\344\270\200\351\246\226", 0));
        label_5->setText(QApplication::translate("music", "\351\237\263\351\207\217\346\216\247\345\210\266", 0));
        pushButton2_3->setText(QApplication::translate("music", "\345\201\234\346\255\242", 0));
        pushButton4_3->setText(QApplication::translate("music", "\344\270\213\344\270\200\351\246\226", 0));
        label_6->setText(QApplication::translate("music", "music", 0));
    } // retranslateUi

};

namespace Ui {
    class music: public Ui_music {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSIC_H
