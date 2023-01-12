#ifndef DELETEFORM_H
#define DELETEFORM_H

#include <QDialog>

namespace Ui {
class DeleteForm;
}

class DeleteForm : public QDialog
{
    Q_OBJECT

public:
    static DeleteForm& Instance()
    {
        static DeleteForm delForm;
        return delForm;
    }


private slots:
    void on_pushButtonDeleteOk_clicked();

private:
    Ui::DeleteForm *ui;
    explicit DeleteForm(QWidget *parent = nullptr);
    ~DeleteForm();
};

#endif // DELETEFORM_H
