/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *widget;
    QLabel *welecome;
    QLabel *state;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *username;
    QLabel *label_2;
    QLineEdit *password;
    QSpacerItem *horizontalSpacer;
    QPushButton *login;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *cancel;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(600, 450);
        widget = new QWidget(Login);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 600, 450));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        welecome = new QLabel(widget);
        welecome->setObjectName(QStringLiteral("welecome"));
        welecome->setGeometry(QRect(160, 50, 181, 71));
        state = new QLabel(widget);
        state->setObjectName(QStringLiteral("state"));
        state->setGeometry(QRect(560, 15, 20, 20));
        state->setMinimumSize(QSize(20, 20));
        state->setMaximumSize(QSize(20, 20));
        state->setStyleSheet(QStringLiteral(""));
        layoutWidget = new QWidget(widget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(110, 200, 371, 201));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("#label{color:rgb(235, 230, 255)}"));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        username = new QLineEdit(layoutWidget);
        username->setObjectName(QStringLiteral("username"));
        username->setFont(font);
        username->setStyleSheet(QLatin1String("#username{\n"
"background-color:rgb(241, 235, 255);\n"
"border-radius:5px;\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-color: rgb(231,231,231);\n"
"}"));

        gridLayout->addWidget(username, 0, 2, 1, 4);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("#label_2{color:rgb(235, 230, 255)}"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        password = new QLineEdit(layoutWidget);
        password->setObjectName(QStringLiteral("password"));
        password->setFont(font);
        password->setStyleSheet(QLatin1String("#password{\n"
"background-color:rgb(241, 235, 255);\n"
"border-radius:5px;\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-color: rgb(231,231,231);\n"
"}"));
        password->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(password, 1, 2, 1, 4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        login = new QPushButton(layoutWidget);
        login->setObjectName(QStringLiteral("login"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(login->sizePolicy().hasHeightForWidth());
        login->setSizePolicy(sizePolicy1);
        login->setFont(font);
        login->setStyleSheet(QLatin1String("#login{\n"
"color:rgb(235, 230, 255);\n"
"border-radius:5px;\n"
"background-color:rgb(126, 182, 255);\n"
"margin:3px;\n"
"padding:3px;\n"
"}"));

        gridLayout->addWidget(login, 2, 1, 1, 2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 2, 3, 1, 1);

        cancel = new QPushButton(layoutWidget);
        cancel->setObjectName(QStringLiteral("cancel"));
        sizePolicy1.setHeightForWidth(cancel->sizePolicy().hasHeightForWidth());
        cancel->setSizePolicy(sizePolicy1);
        cancel->setFont(font);
        cancel->setStyleSheet(QLatin1String("#cancel{\n"
"color:rgb(235, 230, 255);\n"
"border-radius:5px;\n"
"background-color:rgb(255, 101, 101);\n"
"margin:3px;\n"
"padding:3px;\n"
"}"));

        gridLayout->addWidget(cancel, 2, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 5, 1, 1);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Form", 0));
        welecome->setText(QString());
        state->setText(QString());
        label->setText(QApplication::translate("Login", "\347\224\250\346\210\267\345\220\215", 0));
        label_2->setText(QApplication::translate("Login", "\345\257\206\347\240\201", 0));
        login->setText(QApplication::translate("Login", "\347\231\273\351\231\206", 0));
        cancel->setText(QApplication::translate("Login", "\351\200\200\345\207\272", 0));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
