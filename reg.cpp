#include "reg.h"
#include "ui_reg.h"
#include "actreg.h"
#include "infwindow.h"

Reg::Reg(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Reg)
{
    ui->setupUi(this);


    db = QSqlDatabase::addDatabase("QSQLITE");
    QString path = QString("C:\\Users\\") + qUsername + "\\AppData\\Local\\account_system_db\\Exp.db";
    db.setDatabaseName(path);


    if(db.open()){
        //qDebug() << "Eccess conn";

    }else{
        QString err = QString("NO Eccess conn :") + db.lastError().databaseText();
        qDebug() << err;
    }

}

Reg::~Reg()
{
    //db.close();
    //QSqlDatabase::removeDatabase("con1");
    delete ui;
}


void Reg::on_pushButton_3_clicked()
{
    ActReg actReg;
    actReg.exec();
}


void Reg::on_pushButton_clicked()
{
    QString log = ui->lineEdit->text();
    QString pass = ui->lineEdit_2->text();


    QSqlQuery* s1 = new QSqlQuery(db);



    QString str_q = QString("SELECT EXISTS(SELECT login, pass FROM users WHERE login = '") + log + "' and pass = '" + pass + "')";

    int res = s1->exec(str_q);





    vector<QSqlRecord> vec;

    while(s1->next()){
        QSqlRecord rec;
        rec = s1->record();
        vec.push_back(rec);
    }


    QSqlRecord resQ = vec[0];

    QString resS = resQ.field(0).value().toString();



    bool flag1_2 = false;
    bool flag2_2 = false;

    if(log == ""){
        ui->label_err_2->setText("Not filled");
    }else{
        ui->label_err_2->setText("");
        flag1_2 = true;
    }

    if(pass == ""){
        ui->label_err_3->setText("Not filled");
    }else{
        ui->label_err_3->setText("");
        flag2_2 = true;
    }



    if(flag1_2 && flag2_2){
        if(resS == "1"){
            InfWindow* infW = new InfWindow;

            //infW->showMaximized();
            infW->show();
            close();
        }else{
             ui->label_err->setText("User does not exist");
        }
    }










}

