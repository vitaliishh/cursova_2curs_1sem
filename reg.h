#ifndef REG_H
#define REG_H

#include <QMainWindow>

#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QSqlField>

using namespace std;


#if defined(Q_OS_WIN)
    #define qUsername QString::fromLocal8Bit (qgetenv ("USERNAME").constData ()).toUtf8 ()
#elif defined(Q_OS_UNIX)
    #define qUsername qgetenv("USER").constData ()
#endif


QT_BEGIN_NAMESPACE
namespace Ui { class Reg; }
QT_END_NAMESPACE

class Reg : public QMainWindow
{
    Q_OBJECT

public:
    Reg(QWidget *parent = nullptr);
    ~Reg();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

private:
    Ui::Reg *ui;
     QSqlDatabase db;
};
#endif // REG_H
