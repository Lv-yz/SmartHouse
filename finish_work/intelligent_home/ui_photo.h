/********************************************************************************
** Form generated from reading UI file 'photo.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHOTO_H
#define UI_PHOTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_photo
{
public:
    QWidget *widget;
    QLabel *state;
    QPushButton *back;

    void setupUi(QWidget *photo)
    {
        if (photo->objectName().isEmpty())
            photo->setObjectName(QStringLiteral("photo"));
        photo->resize(600, 450);
        widget = new QWidget(photo);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 600, 450));
        state = new QLabel(widget);
        state->setObjectName(QStringLiteral("state"));
        state->setGeometry(QRect(560, 10, 20, 20));
        state->setMinimumSize(QSize(20, 20));
        state->setMaximumSize(QSize(20, 20));
        back = new QPushButton(widget);
        back->setObjectName(QStringLiteral("back"));
        back->setGeometry(QRect(10, 10, 75, 23));

        retranslateUi(photo);

        QMetaObject::connectSlotsByName(photo);
    } // setupUi

    void retranslateUi(QWidget *photo)
    {
        photo->setWindowTitle(QApplication::translate("photo", "Form", 0));
        state->setText(QApplication::translate("photo", "TextLabel", 0));
        back->setText(QApplication::translate("photo", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class photo: public Ui_photo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHOTO_H
