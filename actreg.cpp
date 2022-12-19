#include "actreg.h"
#include "ui_actreg.h"

using namespace std;

ActReg::ActReg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ActReg)
{
    ui->setupUi(this);

    setWindowFlag(Qt::WindowStaysOnTopHint, true);
    setFixedSize(483,460);



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

ActReg::~ActReg()
{
    delete ui;
}

void ActReg::on_pushButton_2_clicked()
{
    close();
}


void ActReg::on_pushButton_clicked()
{


   QString field1 = ui->lineE21->text();
   QString field2 = ui->lineE22->text();
   QString field3 = ui->lineE23->text();
   QString field4 = ui->lineE24->text();



   bool flag1 = false;
   bool flag2 = false;
   bool flag3 = false;


   if(field1 != ""){
       if(field1.size() <= 10){
            ui->label_6->setText("");
            flag1 = true;
       }else{
           ui->label_6->setText("Limit 10");
       }
   }else{
       ui->label_6->setText("Fill field");
   }


if(field2 != ""){
    if(field2 == field3){
         ui->label_8->setText("");
         ui->label_7->setText("");
         flag2 = true;
    }else{
        ui->label_8->setText("Pass no match");
    }
}else{
    ui->label_7->setText("Fill field");
}


if(field3 == ""){
    ui->label_8->setText("Fill field");
}



   if(field4 != ""){
       if(field4.size() <= 15){
            ui->label_9->setText("");
            flag3 = true;
       }else{
           ui->label_9->setText("Limit 15");
       }
   }else{
       ui->label_9->setText("Fill field");
   }



   if(flag1 && flag2 && flag3){
        ui->label_11->setText("Send");

        QSqlQuery* s1 = new QSqlQuery(db);


        QString str_q =
                QString("INSERT INTO users (login, pass, email) values('") +  field1 + "', '" + field2 + "', '" + field4 + "')";


         if(!s1->exec(str_q)){
              qDebug() << "error!!!";
              return;
         }


   }






}

