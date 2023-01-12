#include "inputform.h"
#include "ui_inputform.h"
#include <QMessageBox>
#include <QDate>

InputForm::InputForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InputForm)
{
    ui->setupUi(this);
}

InputForm::~InputForm()
{
    delete ui;
}

void InputForm::on_pushButtonOk_clicked()
{
    QString number = ui->lineEditN->text();
    QString name = ui->lineEditName->text();
    QString mail = ui->lineEditMail->text();
    QString dr = ui->dateEdit->text();
    QString date = QDate::currentDate().toString("yyyy-MM-dd");

    MainWindow::Instance().listName[number.toInt()]=name;
    MainWindow::Instance().listMail[number.toInt()]=mail;
    MainWindow::Instance().listDR[number.toInt()]=dr;

    if(name == "" || number == "")
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Внимание");
        msgBox.setText("Обязательно введите ФИО и №");
        msgBox.exec();
        close();
        return;
    }
    sqlCommand = "INSERT INTO NoteBook (№, ФИО, [e-mail@], [День рождения], [Дата внесения]) VALUES ('"+number+"','"+name+"','"+mail+"','"+dr+"','"+date+"')";
    MainWindow::Instance().GetQuery()->exec(sqlCommand);
    MainWindow::Instance().GetModel()->select();
    ui->lineEditN->setText("");
    ui->lineEditName->setText("");
    ui->lineEditMail->setText("");
    close();
}

