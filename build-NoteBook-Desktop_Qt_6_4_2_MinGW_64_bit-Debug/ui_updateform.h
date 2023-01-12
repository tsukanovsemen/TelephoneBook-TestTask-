/********************************************************************************
** Form generated from reading UI file 'updateform.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEFORM_H
#define UI_UPDATEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_UpdateForm
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *labelNumber;
    QLineEdit *lineEditNumber;
    QGroupBox *groupBoxUpdateData;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelName;
    QLineEdit *lineEditName;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelMail;
    QLineEdit *lineEditMail;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelDr;
    QDateEdit *dateEdit;
    QPushButton *pushButtonUpdate;

    void setupUi(QDialog *UpdateForm)
    {
        if (UpdateForm->objectName().isEmpty())
            UpdateForm->setObjectName("UpdateForm");
        UpdateForm->resize(300, 200);
        UpdateForm->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 191);"));
        verticalLayout_2 = new QVBoxLayout(UpdateForm);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        labelNumber = new QLabel(UpdateForm);
        labelNumber->setObjectName("labelNumber");

        horizontalLayout->addWidget(labelNumber);

        lineEditNumber = new QLineEdit(UpdateForm);
        lineEditNumber->setObjectName("lineEditNumber");
        lineEditNumber->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(lineEditNumber);


        verticalLayout_2->addLayout(horizontalLayout);

        groupBoxUpdateData = new QGroupBox(UpdateForm);
        groupBoxUpdateData->setObjectName("groupBoxUpdateData");
        verticalLayout = new QVBoxLayout(groupBoxUpdateData);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        labelName = new QLabel(groupBoxUpdateData);
        labelName->setObjectName("labelName");

        horizontalLayout_2->addWidget(labelName);

        lineEditName = new QLineEdit(groupBoxUpdateData);
        lineEditName->setObjectName("lineEditName");
        lineEditName->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(lineEditName);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        labelMail = new QLabel(groupBoxUpdateData);
        labelMail->setObjectName("labelMail");

        horizontalLayout_3->addWidget(labelMail);

        lineEditMail = new QLineEdit(groupBoxUpdateData);
        lineEditMail->setObjectName("lineEditMail");
        lineEditMail->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(lineEditMail);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        labelDr = new QLabel(groupBoxUpdateData);
        labelDr->setObjectName("labelDr");

        horizontalLayout_4->addWidget(labelDr);

        dateEdit = new QDateEdit(groupBoxUpdateData);
        dateEdit->setObjectName("dateEdit");

        horizontalLayout_4->addWidget(dateEdit);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addWidget(groupBoxUpdateData);

        pushButtonUpdate = new QPushButton(UpdateForm);
        pushButtonUpdate->setObjectName("pushButtonUpdate");
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButtonUpdate->setPalette(palette);
        pushButtonUpdate->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(pushButtonUpdate);


        retranslateUi(UpdateForm);

        QMetaObject::connectSlotsByName(UpdateForm);
    } // setupUi

    void retranslateUi(QDialog *UpdateForm)
    {
        UpdateForm->setWindowTitle(QCoreApplication::translate("UpdateForm", "\320\230\320\267\320\274\320\265\320\275\320\265\320\275\320\270\320\265 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
        labelNumber->setText(QCoreApplication::translate("UpdateForm", "\320\235\320\276\320\274\320\265\321\200 \342\204\226", nullptr));
        groupBoxUpdateData->setTitle(QCoreApplication::translate("UpdateForm", "\320\230\320\267\320\274\320\265\320\275\321\217\320\265\320\274\321\213\320\265 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
        labelName->setText(QCoreApplication::translate("UpdateForm", "\320\244\320\230\320\236", nullptr));
        labelMail->setText(QCoreApplication::translate("UpdateForm", "e-mail", nullptr));
        labelDr->setText(QCoreApplication::translate("UpdateForm", "\320\224\320\260\321\202\320\260 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        pushButtonUpdate->setText(QCoreApplication::translate("UpdateForm", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpdateForm: public Ui_UpdateForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEFORM_H
