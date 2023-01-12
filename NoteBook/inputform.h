#ifndef INPUTFORM_H
#define INPUTFORM_H

#include <QDialog>
#include "mainwindow.h"
#include <QSqlQuery>
#include <QSqlDatabase>

namespace Ui {
class InputForm;
}

class InputForm : public QDialog
{
    Q_OBJECT

public:
    static InputForm& Instance()
    {
        static InputForm inputForm;
        return inputForm;
    }

private slots:
    void on_pushButtonOk_clicked();

private:
    explicit InputForm(QWidget *parent = nullptr);
    ~InputForm();
    QString sqlCommand = "";
    Ui::InputForm *ui;
};

#endif // INPUTFORM_H
