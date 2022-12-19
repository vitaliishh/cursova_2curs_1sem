/********************************************************************************
** Form generated from reading UI file 'warehouse.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WAREHOUSE_H
#define UI_WAREHOUSE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Warehouse
{
public:
    QAction *actionInformation;
    QAction *actionAdd;
    QAction *actionInformation_2;
    QAction *actionInformation_3;
    QAction *actionAdd_2;
    QAction *actionInformation_4;
    QAction *actionStart_window;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_13;
    QTableView *tableView;
    QMenuBar *menubar;
    QMenu *menuBank;
    QMenu *menuAuthoration;
    QMenu *menuProfitable_invoice;
    QMenu *menuDirectory;
    QMenu *menuAddirional;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Warehouse)
    {
        if (Warehouse->objectName().isEmpty())
            Warehouse->setObjectName("Warehouse");
        Warehouse->resize(800, 600);
        actionInformation = new QAction(Warehouse);
        actionInformation->setObjectName("actionInformation");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/res/menu/bank (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        actionInformation->setIcon(icon);
        actionAdd = new QAction(Warehouse);
        actionAdd->setObjectName("actionAdd");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/res/menu/free-icon-add-8387523.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd->setIcon(icon1);
        actionInformation_2 = new QAction(Warehouse);
        actionInformation_2->setObjectName("actionInformation_2");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/image/res/menu/authorization.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionInformation_2->setIcon(icon2);
        actionInformation_3 = new QAction(Warehouse);
        actionInformation_3->setObjectName("actionInformation_3");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/image/res/menu/invoice.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionInformation_3->setIcon(icon3);
        actionAdd_2 = new QAction(Warehouse);
        actionAdd_2->setObjectName("actionAdd_2");
        actionAdd_2->setIcon(icon1);
        actionInformation_4 = new QAction(Warehouse);
        actionInformation_4->setObjectName("actionInformation_4");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/image/res/menu/root-directory.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionInformation_4->setIcon(icon4);
        actionStart_window = new QAction(Warehouse);
        actionStart_window->setObjectName("actionStart_window");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/image/res/menu/main-menu (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStart_window->setIcon(icon5);
        centralwidget = new QWidget(Warehouse);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        pushButton_13 = new QPushButton(centralwidget);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setMaximumSize(QSize(30, 30));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/image/res/menu/free-icon-font-refresh-3917293.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_13->setIcon(icon6);
        pushButton_13->setIconSize(QSize(20, 20));

        horizontalLayout_5->addWidget(pushButton_13);


        verticalLayout->addLayout(horizontalLayout_5);

        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");

        verticalLayout->addWidget(tableView);

        Warehouse->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Warehouse);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menuBank = new QMenu(menubar);
        menuBank->setObjectName("menuBank");
        menuAuthoration = new QMenu(menubar);
        menuAuthoration->setObjectName("menuAuthoration");
        menuProfitable_invoice = new QMenu(menubar);
        menuProfitable_invoice->setObjectName("menuProfitable_invoice");
        menuDirectory = new QMenu(menubar);
        menuDirectory->setObjectName("menuDirectory");
        menuAddirional = new QMenu(menubar);
        menuAddirional->setObjectName("menuAddirional");
        Warehouse->setMenuBar(menubar);
        statusbar = new QStatusBar(Warehouse);
        statusbar->setObjectName("statusbar");
        Warehouse->setStatusBar(statusbar);
        toolBar = new QToolBar(Warehouse);
        toolBar->setObjectName("toolBar");
        toolBar->setStyleSheet(QString::fromUtf8("background: white;"));
        toolBar->setMovable(false);
        Warehouse->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuBank->menuAction());
        menubar->addAction(menuAuthoration->menuAction());
        menubar->addAction(menuProfitable_invoice->menuAction());
        menubar->addAction(menuDirectory->menuAction());
        menubar->addAction(menuAddirional->menuAction());
        menuBank->addAction(actionInformation);
        menuBank->addAction(actionAdd);
        menuAuthoration->addAction(actionInformation_2);
        menuProfitable_invoice->addAction(actionInformation_3);
        menuProfitable_invoice->addAction(actionAdd_2);
        menuDirectory->addAction(actionInformation_4);
        menuAddirional->addAction(actionStart_window);
        toolBar->addAction(actionStart_window);
        toolBar->addAction(actionInformation);
        toolBar->addAction(actionInformation_2);
        toolBar->addAction(actionInformation_3);
        toolBar->addAction(actionInformation_4);

        retranslateUi(Warehouse);

        QMetaObject::connectSlotsByName(Warehouse);
    } // setupUi

    void retranslateUi(QMainWindow *Warehouse)
    {
        Warehouse->setWindowTitle(QCoreApplication::translate("Warehouse", "Accounting system", nullptr));
        actionInformation->setText(QCoreApplication::translate("Warehouse", "Information", nullptr));
        actionAdd->setText(QCoreApplication::translate("Warehouse", "Add", nullptr));
        actionInformation_2->setText(QCoreApplication::translate("Warehouse", "Information", nullptr));
        actionInformation_3->setText(QCoreApplication::translate("Warehouse", "Information", nullptr));
        actionAdd_2->setText(QCoreApplication::translate("Warehouse", "Add", nullptr));
        actionInformation_4->setText(QCoreApplication::translate("Warehouse", "Information", nullptr));
        actionStart_window->setText(QCoreApplication::translate("Warehouse", "Start window", nullptr));
        label->setText(QCoreApplication::translate("Warehouse", "Directory (Warehouse)", nullptr));
        pushButton_13->setText(QString());
        menuBank->setTitle(QCoreApplication::translate("Warehouse", "Bank", nullptr));
        menuAuthoration->setTitle(QCoreApplication::translate("Warehouse", "Authoration", nullptr));
        menuProfitable_invoice->setTitle(QCoreApplication::translate("Warehouse", "Profitable invoice", nullptr));
        menuDirectory->setTitle(QCoreApplication::translate("Warehouse", "Directory", nullptr));
        menuAddirional->setTitle(QCoreApplication::translate("Warehouse", "Additional", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("Warehouse", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Warehouse: public Ui_Warehouse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WAREHOUSE_H
