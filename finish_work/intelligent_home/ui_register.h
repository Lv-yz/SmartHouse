/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QWidget *widget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *username;
    QLabel *label_2;
    QLineEdit *password;
    QLabel *label_3;
    QLineEdit *password2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *register_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancel;
    QPushButton *pushButton;

    void setupUi(QWidget *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QStringLiteral("Register"));
        Register->resize(500, 400);
        widget = new QWidget(Register);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 500, 400));
        layoutWidget = new QWidget(widget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 30, 441, 221));
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

        gridLayout->addWidget(label, 0, 0, 1, 1);

        username = new QLineEdit(layoutWidget);
        username->setObjectName(QStringLiteral("username"));
        username->setFont(font);

        gridLayout->addWidget(username, 0, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        password = new QLineEdit(layoutWidget);
        password->setObjectName(QStringLiteral("password"));
        password->setFont(font);

        gridLayout->addWidget(password, 1, 1, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        password2 = new QLineEdit(layoutWidget);
        password2->setObjectName(QStringLiteral("password2"));
        password2->setFont(font);

        gridLayout->addWidget(password2, 2, 1, 1, 1);

        layoutWidget1 = new QWidget(widget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(60, 290, 361, 71));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        register_2 = new QPushButton(layoutWidget1);
        register_2->setObjectName(QStringLiteral("register_2"));
        register_2->setFont(font);

        horizontalLayout->addWidget(register_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cancel = new QPushButton(layoutWidget1);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setFont(font);

        horizontalLayout->addWidget(cancel);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(400, 260, 75, 23));

        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QWidget *Register)
    {
        Register->setWindowTitle(QApplication::translate("Register", "Form", 0));
        label->setText(QApplication::translate("Register", "\347\224\250\346\210\267\345\220\215", 0));
        label_2->setText(QApplication::translate("Register", "\345\257\206\347\240\201", 0));
        label_3->setText(QApplication::translate("Register", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", 0));
        register_2->setText(QApplication::translate("Register", "\346\263\250\345\206\214", 0));
        cancel->setText(QApplication::translate("Register", "\345\217\226\346\266\210", 0));
        pushButton->setText(QApplication::translate("Register", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
