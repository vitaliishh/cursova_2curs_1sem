#ifndef BANKFORM_H
#define BANKFORM_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

using namespace std;


#if defined(Q_OS_WIN)
    #define qUsername QString::fromLocal8Bit (qgetenv ("USERNAME").constData ()).toUtf8 ()
#elif defined(Q_OS_UNIX)
    #define qUsername qgetenv("USER").constData ()
#endif


namespace Ui {
class BankForm;
}

class BankForm : public QDialog
{
    Q_OBJECT

public:
    explicit BankForm(QWidget *parent = nullptr);
    ~BankForm();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::BankForm *ui;
    QSqlDatabase db;
};

#endif // BANKFORM_H
