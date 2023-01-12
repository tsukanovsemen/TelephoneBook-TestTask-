/********************************************************************************
** Form generated from reading UI file 'deleteform.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEFORM_H
#define UI_DELETEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DeleteForm
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *labelDelete;
    QLineEdit *lineEditDelete;
    QPushButton *pushButtonDeleteOk;

    void setupUi(QDialog *DeleteForm)
    {
        if (DeleteForm->objectName().isEmpty())
            DeleteForm->setObjectName("DeleteForm");
        DeleteForm->resize(300, 200);
        DeleteForm->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 191);"));
        verticalLayout_2 = new QVBoxLayout(DeleteForm);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        labelDelete = new QLabel(DeleteForm);
        labelDelete->setObjectName("labelDelete");
        labelDelete->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 191);"));

        verticalLayout->addWidget(labelDelete);

        lineEditDelete = new QLineEdit(DeleteForm);
        lineEditDelete->setObjectName("lineEditDelete");
        lineEditDelete->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(lineEditDelete);


        verticalLayout_2->addLayout(verticalLayout);

        pushButtonDeleteOk = new QPushButton(DeleteForm);
        pushButtonDeleteOk->setObjectName("pushButtonDeleteOk");
        QPalette palette;
        QBrush brush(QColor(255, 255, 191, 255));
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
        pushButtonDeleteOk->setPalette(palette);

        verticalLayout_2->addWidget(pushButtonDeleteOk);


        retranslateUi(DeleteForm);

        QMetaObject::connectSlotsByName(DeleteForm);
    } // setupUi

    void retranslateUi(QDialog *DeleteForm)
    {
        DeleteForm->setWindowTitle(QCoreApplication::translate("DeleteForm", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        labelDelete->setText(QCoreApplication::translate("DeleteForm", "<html><head/><body><p>\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\276\320\274\320\265\321\200 \320\272\320\276\320\275\321\202\320\260\320\272\321\202\320\260(\342\204\226), </p><p>\320\272\320\276\321\202\320\276\321\200\321\213\320\271 \321\205\320\276\321\202\320\270\321\202\320\265 \321\203\320\264\320\260\320\273\320\270\321\202\321\214</p></body></html>", nullptr));
        pushButtonDeleteOk->setText(QCoreApplication::translate("DeleteForm", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\201\321\202\321\200\320\276\320\272\321\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeleteForm: public Ui_DeleteForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEFORM_H
