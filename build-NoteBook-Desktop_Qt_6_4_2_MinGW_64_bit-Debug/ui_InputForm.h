/********************************************************************************
** Form generated from reading UI file 'inputform.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTFORM_H
#define UI_INPUTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_InputForm
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelName;
    QLineEdit *lineEditName;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelMail;
    QLineEdit *lineEditMail;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_DR;
    QDateEdit *dateEdit;
    QPushButton *pushButtonOk;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelN;
    QLineEdit *lineEditN;

    void setupUi(QDialog *InputForm)
    {
        if (InputForm->objectName().isEmpty())
            InputForm->setObjectName("InputForm");
        InputForm->resize(300, 200);
        InputForm->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 191);"));
        gridLayout_2 = new QGridLayout(InputForm);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        labelName = new QLabel(InputForm);
        labelName->setObjectName("labelName");

        horizontalLayout->addWidget(labelName);

        lineEditName = new QLineEdit(InputForm);
        lineEditName->setObjectName("lineEditName");

        horizontalLayout->addWidget(lineEditName);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        labelMail = new QLabel(InputForm);
        labelMail->setObjectName("labelMail");

        horizontalLayout_2->addWidget(labelMail);

        lineEditMail = new QLineEdit(InputForm);
        lineEditMail->setObjectName("lineEditMail");

        horizontalLayout_2->addWidget(lineEditMail);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_DR = new QLabel(InputForm);
        label_DR->setObjectName("label_DR");

        horizontalLayout_3->addWidget(label_DR);

        dateEdit = new QDateEdit(InputForm);
        dateEdit->setObjectName("dateEdit");

        horizontalLayout_3->addWidget(dateEdit);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);

        pushButtonOk = new QPushButton(InputForm);
        pushButtonOk->setObjectName("pushButtonOk");
        pushButtonOk->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));

        gridLayout->addWidget(pushButtonOk, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        labelN = new QLabel(InputForm);
        labelN->setObjectName("labelN");

        horizontalLayout_4->addWidget(labelN);

        lineEditN = new QLineEdit(InputForm);
        lineEditN->setObjectName("lineEditN");

        horizontalLayout_4->addWidget(lineEditN);


        gridLayout->addLayout(horizontalLayout_4, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(InputForm);

        QMetaObject::connectSlotsByName(InputForm);
    } // setupUi

    void retranslateUi(QDialog *InputForm)
    {
        InputForm->setWindowTitle(QCoreApplication::translate("InputForm", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
        labelName->setText(QCoreApplication::translate("InputForm", "\320\244\320\230\320\236:", nullptr));
        labelMail->setText(QCoreApplication::translate("InputForm", "e-mail", nullptr));
        label_DR->setText(QCoreApplication::translate("InputForm", "\320\224\320\265\320\275\321\214 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        pushButtonOk->setText(QCoreApplication::translate("InputForm", "\320\236\320\232", nullptr));
        labelN->setText(QCoreApplication::translate("InputForm", "\342\204\226", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InputForm: public Ui_InputForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTFORM_H
