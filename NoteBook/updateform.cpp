#include "updateform.h"
#include "ui_updateform.h"
#include <QMessageBox>
#include "mainwindow.h"
#include <QDate>

UpdateForm::UpdateForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UpdateForm)
{
    ui->setupUi(this);
}

UpdateForm::~UpdateForm()
{
    delete ui;
}

void UpdateForm::on_pushButtonUpdate_clicked()
{
    QString number = ui->lineEditNumber->text();
    if(number == "")
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Внимание");
        msgBox.setText("Обязательно введите номер изменяемой строки");
        msgBox.exec();
        close();
    }
    if(ui->lineEditName->text() != "")
    {
        QString name = ui->lineEditName->text();  
        QString sqlCommand = "UPDATE NoteBook SET ФИО = '" +name+ "' WHERE № = "+number;
        MainWindow::Instance().GetQuery()->exec(sqlCommand);
        MainWindow::Instance().GetModel()->select();
    }
    if(ui->lineEditMail->text()!="")
    {
         QString mail = ui->lineEditMail->text();
         QString sqlCommand = "UPDATE NoteBook SET [e-mail@] = '" +mail+ "' WHERE № = "+number;
         MainWindow::Instance().GetQuery()->exec(sqlCommand);
         MainWindow::Instance().GetModel()->select();
    }
    if(ui->dateEdit->text()!="")
    {
        QString  dr = ui->dateEdit->text();
        QString sqlCommand = "UPDATE NoteBook SET [День рождения] = '" +dr+ "' WHERE № = "+number;
        MainWindow::Instance().GetQuery()->exec(sqlCommand);
        MainWindow::Instance().GetModel()->select();
    }
    ui->lineEditName->setText("");
    ui->lineEditMail->setText("");
    close();
}

