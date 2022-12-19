/********************************************************************************
** Form generated from reading UI file 'infwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFWINDOW_H
#define UI_INFWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InfWindow
{
public:
    QAction *actionInformation;
    QAction *action;
    QAction *actionInformation_2;
    QAction *actionInformation_3;
    QAction *actionAdd_3;
    QAction *actionInformation_4;
    QAction *actionStart_window;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menuefefe;
    QMenu *menuefe;
    QMenu *menuAdditional_invoice;
    QMenu *menuDirectory;
    QMenu *menuAdditional;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *InfWindow)
    {
        if (InfWindow->objectName().isEmpty())
            InfWindow->setObjectName("InfWindow");
        InfWindow->resize(730, 537);
        actionInformation = new QAction(InfWindow);
        actionInformation->setObjectName("actionInformation");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/res/menu/bank (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        actionInformation->setIcon(icon);
        action = new QAction(InfWindow);
        action->setObjectName("action");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/res/menu/free-icon-add-8387523.png"), QSize(), QIcon::Normal, QIcon::Off);
        action->setIcon(icon1);
        actionInformation_2 = new QAction(InfWindow);
        actionInformation_2->setObjectName("actionInformation_2");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/image/res/menu/authorization.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionInformation_2->setIcon(icon2);
        actionInformation_3 = new QAction(InfWindow);
        actionInformation_3->setObjectName("actionInformation_3");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/image/res/menu/invoice.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionInformation_3->setIcon(icon3);
        actionAdd_3 = new QAction(InfWindow);
        actionAdd_3->setObjectName("actionAdd_3");
        actionAdd_3->setIcon(icon1);
        actionInformation_4 = new QAction(InfWindow);
        actionInformation_4->setObjectName("actionInformation_4");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/image/res/menu/root-directory.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionInformation_4->setIcon(icon4);
        actionStart_window = new QAction(InfWindow);
        actionStart_window->setObjectName("actionStart_window");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/image/res/menu/main-menu (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStart_window->setIcon(icon5);
        centralwidget = new QWidget(InfWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: #afb3b0;"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        InfWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(InfWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 730, 26));
        menubar->setMinimumSize(QSize(0, 0));
        menuefefe = new QMenu(menubar);
        menuefefe->setObjectName("menuefefe");
        menuefe = new QMenu(menubar);
        menuefe->setObjectName("menuefe");
        menuAdditional_invoice = new QMenu(menubar);
        menuAdditional_invoice->setObjectName("menuAdditional_invoice");
        menuDirectory = new QMenu(menubar);
        menuDirectory->setObjectName("menuDirectory");
        menuAdditional = new QMenu(menubar);
        menuAdditional->setObjectName("menuAdditional");
        InfWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(InfWindow);
        statusbar->setObjectName("statusbar");
        InfWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(InfWindow);
        toolBar->setObjectName("toolBar");
        toolBar->setStyleSheet(QString::fromUtf8("background: white;"));
        toolBar->setMovable(false);
        InfWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuefefe->menuAction());
        menubar->addAction(menuefe->menuAction());
        menubar->addAction(menuAdditional_invoice->menuAction());
        menubar->addAction(menuDirectory->menuAction());
        menubar->addAction(menuAdditional->menuAction());
        menuefefe->addAction(actionInformation);
        menuefefe->addAction(action);
        menuefe->addAction(actionInformation_2);
        menuAdditional_invoice->addAction(actionInformation_3);
        menuAdditional_invoice->addAction(actionAdd_3);
        menuDirectory->addAction(actionInformation_4);
        menuAdditional->addAction(actionStart_window);
        toolBar->addAction(actionStart_window);
        toolBar->addAction(actionInformation);
        toolBar->addAction(actionInformation_2);
        toolBar->addAction(actionInformation_3);
        toolBar->addAction(actionInformation_4);

        retranslateUi(InfWindow);

        QMetaObject::connectSlotsByName(InfWindow);
    } // setupUi

    void retranslateUi(QMainWindow *InfWindow)
    {
        InfWindow->setWindowTitle(QCoreApplication::translate("InfWindow", "Accounting system", nullptr));
        actionInformation->setText(QCoreApplication::translate("InfWindow", "Information", nullptr));
        action->setText(QCoreApplication::translate("InfWindow", "Add", nullptr));
        actionInformation_2->setText(QCoreApplication::translate("InfWindow", "Information", nullptr));
        actionInformation_3->setText(QCoreApplication::translate("InfWindow", "Information", nullptr));
        actionAdd_3->setText(QCoreApplication::translate("InfWindow", "Add", nullptr));
        actionInformation_4->setText(QCoreApplication::translate("InfWindow", "Information", nullptr));
        actionStart_window->setText(QCoreApplication::translate("InfWindow", "Start window", nullptr));
        label->setText(QCoreApplication::translate("InfWindow", "Select an action", nullptr));
        menuefefe->setTitle(QCoreApplication::translate("InfWindow", "Bank", nullptr));
        menuefe->setTitle(QCoreApplication::translate("InfWindow", "Authorization", nullptr));
        menuAdditional_invoice->setTitle(QCoreApplication::translate("InfWindow", "Profitable invoice", nullptr));
        menuDirectory->setTitle(QCoreApplication::translate("InfWindow", "Directory", nullptr));
        menuAdditional->setTitle(QCoreApplication::translate("InfWindow", "Additional", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("InfWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InfWindow: public Ui_InfWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFWINDOW_H
