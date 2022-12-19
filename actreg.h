#ifndef ACTREG_H
#define ACTREG_H

#include <QDialog>
#include <QDebug>

#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

#if defined(Q_OS_WIN)
    #define qUsername QString::fromLocal8Bit (qgetenv ("USERNAME").constData ()).toUtf8 ()
#elif defined(Q_OS_UNIX)
    #define qUsername qgetenv("USER").constData ()
#endif

using namespace std;

namespace Ui {
class ActReg;
}

class ActReg : public QDialog
{
    Q_OBJECT

public:
    explicit ActReg(QWidget *parent = nullptr);
    ~ActReg();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::ActReg *ui;
    QSqlDatabase db;
};

#endif // ACTREG_H
