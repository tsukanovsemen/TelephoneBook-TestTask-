#ifndef UPDATEFORM_H
#define UPDATEFORM_H

#include <QDialog>

namespace Ui {
class UpdateForm;
}

class UpdateForm : public QDialog
{
    Q_OBJECT

public:
    static UpdateForm& Instance()
    {
        static UpdateForm upForm;
        return upForm;
    }

private slots:
    void on_pushButtonUpdate_clicked();

private:
    explicit UpdateForm(QWidget *parent = nullptr);
    ~UpdateForm();

    Ui::UpdateForm *ui;
};

#endif // UPDATEFORM_H
