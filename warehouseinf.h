#ifndef WAREHOUSEINF_H
#define WAREHOUSEINF_H

#include <QMainWindow>

namespace Ui {
class warehouseinf;
}

class warehouseinf : public QMainWindow
{
    Q_OBJECT

public:
    explicit warehouseinf(QWidget *parent = nullptr);
    ~warehouseinf();

private:
    Ui::warehouseinf *ui;
};

#endif // WAREHOUSEINF_H
