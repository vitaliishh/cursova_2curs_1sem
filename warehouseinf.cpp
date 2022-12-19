#include "warehouseinf.h"
#include "ui_warehouseinf.h"

warehouseinf::warehouseinf(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::warehouseinf)
{
    ui->setupUi(this);
}

warehouseinf::~warehouseinf()
{
    delete ui;
}
