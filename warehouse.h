#ifndef WAREHOUSE_H
#define WAREHOUSE_H

#include <QMainWindow>


#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlTableModel>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlRecord>
#include <QSqlField>
#include <QLabel>


#if defined(Q_OS_WIN)
    #define qUsername QString::fromLocal8Bit (qgetenv ("USERNAME").constData ()).toUtf8 ()
#elif defined(Q_OS_UNIX)
    #define qUsername qgetenv("USER").constData ()
#endif


namespace Ui {
class Warehouse;
}

class Warehouse : public QMainWindow
{
    Q_OBJECT

public:
    explicit Warehouse(QWidget *parent = nullptr);
    ~Warehouse();

private slots:
    void on_actionStart_window_triggered();

    void on_pushButton_13_clicked();

    void on_actionInformation_triggered();

    void on_actionAdd_triggered();

    void on_actionInformation_2_triggered();

    void on_actionInformation_3_triggered();

    void on_actionAdd_2_triggered();

    void on_actionInformation_4_triggered();

private:
    Ui::Warehouse *ui;
    QSqlDatabase db;
    QSqlTableModel* model;
};

#endif // WAREHOUSE_H
