#ifndef INFWINDOW_H
#define INFWINDOW_H

#include <QMainWindow>

#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>


#if defined(Q_OS_WIN)
    #define qUsername QString::fromLocal8Bit (qgetenv ("USERNAME").constData ()).toUtf8 ()
#elif defined(Q_OS_UNIX)
    #define qUsername qgetenv("USER").constData ()
#endif

namespace Ui {
class InfWindow;
}

class InfWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit InfWindow(QWidget *parent = nullptr);
    ~InfWindow();

private slots:
    void on_actionInformation_4_triggered();

    void on_actionInformation_triggered();

    void on_action_triggered();

    void on_actionInformation_2_triggered();

    void on_actionInformation_3_triggered();

    void on_actionAdd_3_triggered();

private:
    Ui::InfWindow *ui;
     QSqlDatabase db;
};

#endif // INFWINDOW_H
