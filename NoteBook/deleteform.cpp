#include "deleteform.h"
#include "ui_deleteform.h"
#include "MainWindow.h"
#include <QMessageBox>

DeleteForm::DeleteForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DeleteForm)
{
    ui->setupUi(this);
}

DeleteForm::~DeleteForm()
{
    delete ui;
}

void DeleteForm::on_pushButtonDeleteOk_clicked()
{
    QString numberId = ui->lineEditDelete->text();
    MainWindow::Instance().GetQuery()->exec("DELETE FROM NoteBook WHERE № = "+numberId);
    MainWindow::Instance().GetModel()->select();
    MainWindow::Instance().listName.remove(numberId.toInt());
    close();
    ui->lineEditDelete->setText("");

}

