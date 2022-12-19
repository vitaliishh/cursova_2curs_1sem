#include "warehouse.h"
#include "ui_warehouse.h"


#include "warehouse.h"

#include "infwindow.h"
#include "bankinf.h"
#include "bankform.h"
#include "authorizationinf.h"
#include "invoiceinf.h"
#include "invoiceform.h"

Warehouse::Warehouse(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Warehouse)
{
    ui->setupUi(this);


    db = QSqlDatabase::addDatabase("QSQLITE");
    QString path = QString("C:\\Users\\") + qUsername + "\\AppData\\Local\\account_system_db\\Exp.db";
    db.setDatabaseName(path);

    if(db.open()){
        ui->statusbar->showMessage("Successful connection");

        model = new QSqlTableModel(this, db);

        model->setTable("invoice");
        model->select();



        model->setHeaderData(1, Qt::Horizontal, "From", Qt::DisplayRole);
        model->setHeaderData(2, Qt::Horizontal, "To", Qt::DisplayRole);
        model->setHeaderData(3, Qt::Horizontal, "Product", Qt::DisplayRole);
        model->setHeaderData(4, Qt::Horizontal, "Price", Qt::DisplayRole);
        model->setHeaderData(5, Qt::Horizontal, "Count", Qt::DisplayRole);
        model->setHeaderData(6, Qt::Horizontal, "Order id", Qt::DisplayRole);



        ui->tableView->setSortingEnabled(true);
        ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);

        ui->tableView->setModel(model);


         ui->tableView->setColumnHidden(0,true);


        ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
        ui->tableView->setShowGrid(true);


    }else{
        ui->statusbar->showMessage("NO Eccess conn :" + db.lastError().databaseText());
    }

}

Warehouse::~Warehouse()
{
    delete ui;
}

void Warehouse::on_actionStart_window_triggered()
{
    InfWindow* infWindow = new InfWindow;
    infWindow->show();
    close();

}


void Warehouse::on_pushButton_13_clicked()
{
    model->select();
}


void Warehouse::on_actionInformation_triggered()
{
    BankInf* bankInf = new BankInf;
    bankInf->show();
    close();
}


void Warehouse::on_actionAdd_triggered()
{
    BankForm bankForm;
    bankForm.exec();
}


void Warehouse::on_actionInformation_2_triggered()
{
    AuthorizationInf* authorizationInf = new AuthorizationInf;
    authorizationInf->show();
    close();
}


void Warehouse::on_actionInformation_3_triggered()
{
    InvoiceInf* invoiceInf = new InvoiceInf;
    invoiceInf->show();
    close();
}


void Warehouse::on_actionAdd_2_triggered()
{
    InvoiceForm invoiceForm;
    invoiceForm.exec();
}


void Warehouse::on_actionInformation_4_triggered()
{
    Warehouse* warehouse = new Warehouse;
    warehouse->show();
    close();
}

