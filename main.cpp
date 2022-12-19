#include "reg.h"
#include "QFile"
#include "QDir"
#include <conio.h>
#include <iostream>

#include <QApplication>

#if defined(Q_OS_WIN)
    #define qUsername QString::fromLocal8Bit (qgetenv ("USERNAME").constData ()).toUtf8 ()
#elif defined(Q_OS_UNIX)
    #define qUsername qgetenv("USER").constData ()
#endif


int main(int argc, char *argv[])
{

    //QString f = "C:\\Users\\vitaliish\\AppData\\Roaming\\account_system_db";
    QString f = QString("C:\\Users\\") + qUsername + "\\AppData\\Local\\account_system_db";

    QDir qdir;
    qdir.mkdir(f);


    qDebug() << f;

    //QString source = "db/Exp.db";

     QString source = ":/data_b/db/Exp.db";


    if(!QFile(source).exists()){
        qWarning("The sourrse doesnt exist");
        return 1;
    }


    QString f2 = QString("C:\\Users\\") + qUsername + "\\AppData\\Local\\account_system_db\\Exp.db";

   //QString destin("C:\\Users\\vitaliish\\AppData\\Roaming\\account_system_db\\Exp.db");
    QString destin(f2);

    QFile::copy(source, destin);

    QFile::setPermissions(f2, QFile::WriteOwner | QFile::ReadOwner);



    QApplication a(argc, argv);
    Reg* w = new Reg;
    w->setFixedSize(493,399);




    w->show();
    return a.exec();
}
