#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlTableModel>
#include "inputform.h"
#include "deleteform.h"
#include "updateform.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    static MainWindow& Instance()
    {
        static MainWindow w;
        return w;
    }
    QSqlQuery* GetQuery();
    QSqlTableModel* GetModel();
    QHash<int,QString> listName;
    QHash<int,QString> listMail;
    QHash<int,QString> listDR;

private slots:
    void on_pushButton_Input_clicked();
    void on_pushButtonDelete_clicked();
    void on_pushButtonChange_clicked();
    void on_tableViewDB_clicked(const QModelIndex &index);
    void on_pushButtonSearch_clicked();
    void on_comboBoxSearch_currentTextChanged(const QString &arg1);
    void on_pushButtonCancelChange_clicked();

private:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    Ui::MainWindow *ui;
    QSqlDatabase database;
    QSqlQuery *query;
    QSqlTableModel *model;
    int _currentColumn;
};
#endif // MAINWINDOW_H
