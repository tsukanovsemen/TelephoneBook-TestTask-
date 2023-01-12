/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_5;
    QGroupBox *groupBoxSort;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_7;
    QPushButton *pushButtonSearch;
    QComboBox *comboBoxSearch;
    QLineEdit *lineEditSearch;
    QLabel *labelSearch;
    QGroupBox *groupBoxBook;
    QGridLayout *gridLayout_4;
    QTableView *tableViewDB;
    QGroupBox *groupBoxActions;
    QGridLayout *gridLayout_6;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_Input;
    QPushButton *pushButtonDelete;
    QPushButton *pushButtonChange;
    QPushButton *pushButtonCancelChange;
    QPushButton *pushButtonExit;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(750, 427);
        QPalette palette;
        QBrush brush(QColor(255, 255, 191, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(255, 188, 71, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        MainWindow->setPalette(palette);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 191);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_5 = new QGridLayout(centralwidget);
        gridLayout_5->setObjectName("gridLayout_5");
        groupBoxSort = new QGroupBox(centralwidget);
        groupBoxSort->setObjectName("groupBoxSort");
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        QBrush brush3(QColor(208, 176, 132, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush3);
        QBrush brush4(QColor(0, 0, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        QBrush brush5(QColor(120, 120, 120, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        groupBoxSort->setPalette(palette1);
        groupBoxSort->setStyleSheet(QString::fromUtf8("background-color: rgb(208, 176, 132);\n"
"font: 700 9pt \"Candara\";"));
        groupBoxSort->setAlignment(Qt::AlignCenter);
        gridLayout_8 = new QGridLayout(groupBoxSort);
        gridLayout_8->setObjectName("gridLayout_8");
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName("gridLayout_7");
        pushButtonSearch = new QPushButton(groupBoxSort);
        pushButtonSearch->setObjectName("pushButtonSearch");
        pushButtonSearch->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(254, 247, 242);\n"
"}\n"
"QPushButton:pressed {\n"
"   \n"
"	background-color: rgb(226, 219, 169);\n"
"}\n"
"font: 700 9pt \"Candara\";"));

        gridLayout_7->addWidget(pushButtonSearch, 3, 1, 1, 1);

        comboBoxSearch = new QComboBox(groupBoxSort);
        comboBoxSearch->addItem(QString());
        comboBoxSearch->addItem(QString());
        comboBoxSearch->addItem(QString());
        comboBoxSearch->addItem(QString());
        comboBoxSearch->addItem(QString());
        comboBoxSearch->addItem(QString());
        comboBoxSearch->setObjectName("comboBoxSearch");
        comboBoxSearch->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_7->addWidget(comboBoxSearch, 2, 1, 1, 1);

        lineEditSearch = new QLineEdit(groupBoxSort);
        lineEditSearch->setObjectName("lineEditSearch");
        lineEditSearch->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEditSearch->sizePolicy().hasHeightForWidth());
        lineEditSearch->setSizePolicy(sizePolicy);
        lineEditSearch->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 250, 246);"));

        gridLayout_7->addWidget(lineEditSearch, 1, 1, 1, 1);

        labelSearch = new QLabel(groupBoxSort);
        labelSearch->setObjectName("labelSearch");
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        labelSearch->setPalette(palette2);

        gridLayout_7->addWidget(labelSearch, 0, 1, 1, 1);


        gridLayout_8->addLayout(gridLayout_7, 0, 0, 1, 1);


        gridLayout_5->addWidget(groupBoxSort, 0, 0, 1, 1);

        groupBoxBook = new QGroupBox(centralwidget);
        groupBoxBook->setObjectName("groupBoxBook");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBoxBook->sizePolicy().hasHeightForWidth());
        groupBoxBook->setSizePolicy(sizePolicy1);
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        groupBoxBook->setPalette(palette3);
        groupBoxBook->setStyleSheet(QString::fromUtf8("background-color: rgb(208, 176, 132);\n"
"font: 700 9pt \"Candara\";"));
        gridLayout_4 = new QGridLayout(groupBoxBook);
        gridLayout_4->setObjectName("gridLayout_4");
        tableViewDB = new QTableView(groupBoxBook);
        tableViewDB->setObjectName("tableViewDB");
        tableViewDB->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tableViewDB->sizePolicy().hasHeightForWidth());
        tableViewDB->setSizePolicy(sizePolicy2);
        tableViewDB->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 250, 246);"));
        tableViewDB->setGridStyle(Qt::CustomDashLine);

        gridLayout_4->addWidget(tableViewDB, 0, 0, 1, 1);


        gridLayout_5->addWidget(groupBoxBook, 0, 1, 2, 1);

        groupBoxActions = new QGroupBox(centralwidget);
        groupBoxActions->setObjectName("groupBoxActions");
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        groupBoxActions->setPalette(palette4);
        groupBoxActions->setStyleSheet(QString::fromUtf8("background-color: rgb(208, 176, 132);\n"
"font: 700 9pt \"Candara\";"));
        groupBoxActions->setAlignment(Qt::AlignCenter);
        gridLayout_6 = new QGridLayout(groupBoxActions);
        gridLayout_6->setObjectName("gridLayout_6");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        pushButton_Input = new QPushButton(groupBoxActions);
        pushButton_Input->setObjectName("pushButton_Input");
        pushButton_Input->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(254, 247, 242);\n"
"}\n"
"QPushButton:pressed {\n"
"   \n"
"	background-color: rgb(226, 219, 169);\n"
"}"));

        verticalLayout_2->addWidget(pushButton_Input);

        pushButtonDelete = new QPushButton(groupBoxActions);
        pushButtonDelete->setObjectName("pushButtonDelete");
        pushButtonDelete->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(254, 247, 242);\n"
"}\n"
"QPushButton:pressed {\n"
"   \n"
"	background-color: rgb(226, 219, 169);\n"
"}"));

        verticalLayout_2->addWidget(pushButtonDelete);

        pushButtonChange = new QPushButton(groupBoxActions);
        pushButtonChange->setObjectName("pushButtonChange");
        pushButtonChange->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(254, 247, 242);\n"
"}\n"
"QPushButton:pressed {\n"
"   \n"
"	background-color: rgb(226, 219, 169);\n"
"}"));

        verticalLayout_2->addWidget(pushButtonChange);

        pushButtonCancelChange = new QPushButton(groupBoxActions);
        pushButtonCancelChange->setObjectName("pushButtonCancelChange");
        pushButtonCancelChange->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(254, 247, 242);\n"
"}\n"
"QPushButton:pressed {\n"
"   \n"
"	background-color: rgb(226, 219, 169);\n"
"}"));

        verticalLayout_2->addWidget(pushButtonCancelChange);

        pushButtonExit = new QPushButton(groupBoxActions);
        pushButtonExit->setObjectName("pushButtonExit");
        pushButtonExit->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(254, 247, 242);\n"
"}\n"
"QPushButton:pressed {\n"
"   \n"
"	background-color: rgb(226, 219, 169);\n"
"}"));

        verticalLayout_2->addWidget(pushButtonExit);


        gridLayout_6->addLayout(verticalLayout_2, 0, 0, 1, 1);


        gridLayout_5->addWidget(groupBoxActions, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 750, 22));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());

        retranslateUi(MainWindow);
        QObject::connect(pushButtonExit, &QPushButton::clicked, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\273\320\265\321\204\320\276\320\275\320\275\320\260\321\217 \320\272\320\275\320\270\320\263\320\260", nullptr));
        groupBoxSort->setTitle(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        pushButtonSearch->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        comboBoxSearch->setItemText(0, QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\276\320\275\320\272\320\260: \320\221\320\265\320\267 \320\277\320\276\320\270\321\201\320\272\320\260", nullptr));
        comboBoxSearch->setItemText(1, QCoreApplication::translate("MainWindow", "\342\204\226", nullptr));
        comboBoxSearch->setItemText(2, QCoreApplication::translate("MainWindow", "\320\244\320\230\320\236", nullptr));
        comboBoxSearch->setItemText(3, QCoreApplication::translate("MainWindow", "e-mail@", nullptr));
        comboBoxSearch->setItemText(4, QCoreApplication::translate("MainWindow", "\320\224\320\265\320\275\321\214 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        comboBoxSearch->setItemText(5, QCoreApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260 \320\262\320\275\320\265\321\201\320\265\320\275\320\270\321\217", nullptr));

        comboBoxSearch->setCurrentText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\276\320\275\320\272\320\260: \320\221\320\265\320\267 \320\277\320\276\320\270\321\201\320\272\320\260", "\320\232\320\276\320\273\320\276\320\275\320\272\320\260"));
        labelSearch->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:8pt; font-style:italic;\">\320\237\320\276\320\270\321\201\320\272 (\320\277\320\276 \320\262\321\213\320\261\321\200\320\260\320\275\320\275\320\276\320\271 \320\272\320\276\320\273\320\276\320\275\320\272\320\265):</span></p></body></html>", nullptr));
        groupBoxBook->setTitle(QCoreApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\276\321\207\320\275\320\270\320\272", nullptr));
        groupBoxActions->setTitle(QCoreApplication::translate("MainWindow", "\320\224\320\265\320\271\321\201\321\202\320\262\320\270\321\217", nullptr));
        pushButton_Input->setText(QCoreApplication::translate("MainWindow", "\320\222\320\275\320\265\321\201\321\202\320\270 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
        pushButtonDelete->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        pushButtonChange->setText(QCoreApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
        pushButtonCancelChange->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\274\320\265\320\275\320\270\321\202\321\214 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217", nullptr));
        pushButtonExit->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
