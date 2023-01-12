#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("./testDB.db");
    if(database.open())
    {
        qDebug("opened");
    }
    else
    {
        qDebug("noOpen");
    }

    query = new QSqlQuery(database);

    model = new QSqlTableModel(this, database);
    model->setTable("NoteBook");
    model->select();

    ui->tableViewDB->setModel(model);
    ui->tableViewDB->setSortingEnabled(true);

    if(ui->tableViewDB->model()->rowCount()> 0)
    {
        for(int i = 0; i < model->rowCount();i++)
        {
            QModelIndex idx = model->index( i, 1 );
            listName[model->index(i,0).data().toInt()] = model->data(idx).toString();
            idx = model->index(i,2);
            listMail[model->index(i,0).data().toInt()] = model->data(idx).toString();
            idx = model->index(i,3);
            listDR[model->index(i,0).data().toInt()] = model->data(idx).toString();
        }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_Input_clicked()
{
    InputForm::Instance().show();
}



QSqlTableModel* MainWindow::GetModel()
{
    return model;
}
QSqlQuery* MainWindow::GetQuery()
{
    return query;
}

void MainWindow::on_pushButtonDelete_clicked()
{
    DeleteForm::Instance().show();
}


void MainWindow::on_pushButtonChange_clicked()
{
    UpdateForm::Instance().show();
}


void MainWindow::on_tableViewDB_clicked(const QModelIndex &index)
{
    _currentColumn = index.column();//под вопросом
}


void MainWindow::on_pushButtonSearch_clicked()
{
    int row_count = model->rowCount();
    for(int i = 0;i < row_count;i++)
    {
        ui->tableViewDB->showRow(i);
    }

    if(ui->comboBoxSearch->currentText()=="Колонка: Без поиска")
    {
        int row_count = model->rowCount();
        for(int i = 0;i < row_count;i++)
        {
            ui->tableViewDB->showRow(i);
        }
    }
    else if(ui->comboBoxSearch->currentText()=="№")
    {
        int row_count = model->rowCount();
        for(int i = 0;i < row_count;i++)
        {
            QModelIndex idx = model->index( i, 0 );
                if( model->data( idx ).toString() != ui->lineEditSearch->text() )
                {
                   ui->tableViewDB->hideRow(i);
                }
        }
    }
    else if(ui->comboBoxSearch->currentText()=="ФИО")
    {
        int row_count = model->rowCount();
        for(int i = 0;i < row_count;i++)
        {
            QModelIndex idx = model->index( i, 1 );
                if( model->data( idx ).toString() != ui->lineEditSearch->text() )
                {
                   ui->tableViewDB->hideRow(i);
                }
        }
    }
    else if(ui->comboBoxSearch->currentText()=="e-mail@")
    {
        int row_count = model->rowCount();
        for(int i = 0;i < row_count;i++)
        {
            QModelIndex idx = model->index( i, 2 );
                if( model->data( idx ).toString() != ui->lineEditSearch->text() )
                {
                   ui->tableViewDB->hideRow(i);
                }
        }
    }
    else if(ui->comboBoxSearch->currentText()=="День рождения")
    {
        int row_count = model->rowCount();
        for(int i = 0;i < row_count;i++)
        {
            QModelIndex idx = model->index( i, 3 );
                if( model->data( idx ).toString() != ui->lineEditSearch->text() )
                {
                   ui->tableViewDB->hideRow(i);
                }
        }
    }
    else if(ui->comboBoxSearch->currentText()=="Дата внесения")
    {
        int row_count = model->rowCount();
        for(int i = 0;i < row_count;i++)
        {
            QModelIndex idx = model->index( i, 4 );
                if( model->data( idx ).toString() != ui->lineEditSearch->text() )
                {
                   ui->tableViewDB->hideRow(i);
                }
        }
    }

}



void MainWindow::on_comboBoxSearch_currentTextChanged(const QString &arg1)
{
    int row_count = model->rowCount();
    for(int i = 0;i < row_count;i++)
    {
        ui->tableViewDB->showRow(i);
    }
}





void MainWindow::on_pushButtonCancelChange_clicked()
{
    int row_count = model->rowCount();
    for(int i = 0;i < row_count;i++)
    {
        QString currentN = model->index(i,0).data().toString();
        QString name = listName[currentN.toInt()];
        QString mail = listMail[currentN.toInt()];
        QString dr = listDR[currentN.toInt()];
        query->exec("UPDATE NoteBook SET ФИО = '"+ name +"', [e-mail@] = '"+ mail +"', [День рождения] ='"+ dr +"'  WHERE № = " + currentN);
        model->select();
    }
}

