#include "infwindow.h"
#include "ui_infwindow.h"
#include "bankinf.h"
#include "authorizationinf.h"
#include "invoiceinf.h"
#include "warehouse.h"

#include "bankform.h"
#include "invoiceform.h"

InfWindow::InfWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::InfWindow)
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

InfWindow::~InfWindow()
{
    delete ui;
}

void InfWindow::on_actionInformation_4_triggered()
{
    Warehouse* warehouse = new Warehouse;
    warehouse->show();
    close();
}


void InfWindow::on_actionInformation_triggered()
{
    BankInf* bankInf = new BankInf;
    bankInf->show();
    close();
}


void InfWindow::on_action_triggered()
{
    BankForm bankForm;
    bankForm.exec();
}


void InfWindow::on_actionInformation_2_triggered()
{
    AuthorizationInf* authorizationInf = new AuthorizationInf;
    authorizationInf->show();
    close();
}


void InfWindow::on_actionInformation_3_triggered()
{
    InvoiceInf* invoiceInf = new InvoiceInf;
    invoiceInf->show();
    close();
}


void InfWindow::on_actionAdd_3_triggered()
{
    InvoiceForm invoiceForm;
    invoiceForm.exec();
}

