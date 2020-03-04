/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen_an_adress_book;
    QAction *actionExit;
    QWidget *centralWidget;
    QTableView *tableView;
    QPushButton *seven;
    QPushButton *eight;
    QPushButton *nine;
    QPushButton *four;
    QPushButton *five;
    QPushButton *six;
    QPushButton *one;
    QPushButton *two;
    QPushButton *three;
    QPushButton *star;
    QPushButton *zero;
    QPushButton *pound;
    QLineEdit *number;
    QPushButton *Call;
    QPushButton *Undo;
    QMenuBar *menuBar;
    QMenu *menuTools;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(988, 691);
        actionOpen_an_adress_book = new QAction(MainWindow);
        actionOpen_an_adress_book->setObjectName(QString::fromUtf8("actionOpen_an_adress_book"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(550, 30, 421, 591));
        tableView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableView->horizontalHeader()->setVisible(false);
        tableView->verticalHeader()->setVisible(false);
        seven = new QPushButton(centralWidget);
        seven->setObjectName(QString::fromUtf8("seven"));
        seven->setGeometry(QRect(140, 310, 100, 100));
        seven->setStyleSheet(QString::fromUtf8("background-color: white;\n"
" border-width:1px;\n"
" border-radius:50px;\n"
" max-width:100px;\n"
" max-height:100px;\n"
" min-width:100px;\n"
" min-height:100px;"));
        eight = new QPushButton(centralWidget);
        eight->setObjectName(QString::fromUtf8("eight"));
        eight->setGeometry(QRect(240, 310, 100, 100));
        eight->setStyleSheet(QString::fromUtf8("background-color: white;\n"
" border-width:1px;\n"
" border-radius:50px;\n"
" max-width:100px;\n"
" max-height:100px;\n"
" min-width:100px;\n"
" min-height:100px;"));
        nine = new QPushButton(centralWidget);
        nine->setObjectName(QString::fromUtf8("nine"));
        nine->setGeometry(QRect(340, 310, 100, 100));
        nine->setStyleSheet(QString::fromUtf8("background-color: white;\n"
" border-width:1px;\n"
" border-radius:50px;\n"
" max-width:100px;\n"
" max-height:100px;\n"
" min-width:100px;\n"
" min-height:100px;"));
        four = new QPushButton(centralWidget);
        four->setObjectName(QString::fromUtf8("four"));
        four->setGeometry(QRect(140, 210, 100, 100));
        four->setStyleSheet(QString::fromUtf8("background-color: white;\n"
" border-width:1px;\n"
" border-radius:50px;\n"
" max-width:100px;\n"
" max-height:100px;\n"
" min-width:100px;\n"
" min-height:100px;"));
        five = new QPushButton(centralWidget);
        five->setObjectName(QString::fromUtf8("five"));
        five->setGeometry(QRect(240, 210, 100, 100));
        five->setStyleSheet(QString::fromUtf8("background-color: white;\n"
" border-width:1px;\n"
" border-radius:50px;\n"
" max-width:100px;\n"
" max-height:100px;\n"
" min-width:100px;\n"
" min-height:100px;"));
        six = new QPushButton(centralWidget);
        six->setObjectName(QString::fromUtf8("six"));
        six->setGeometry(QRect(340, 210, 100, 100));
        six->setStyleSheet(QString::fromUtf8("background-color: white;\n"
" border-width:1px;\n"
" border-radius:50px;\n"
" max-width:100px;\n"
" max-height:100px;\n"
" min-width:100px;\n"
" min-height:100px;"));
        one = new QPushButton(centralWidget);
        one->setObjectName(QString::fromUtf8("one"));
        one->setGeometry(QRect(140, 110, 100, 100));
        one->setStyleSheet(QString::fromUtf8("background-color: white;\n"
" border-width:1px;\n"
" border-radius:50px;\n"
" max-width:100px;\n"
" max-height:100px;\n"
" min-width:100px;\n"
" min-height:100px;"));
        two = new QPushButton(centralWidget);
        two->setObjectName(QString::fromUtf8("two"));
        two->setGeometry(QRect(240, 110, 100, 100));
        two->setStyleSheet(QString::fromUtf8("background-color: white;\n"
" border-width:1px;\n"
" border-radius:50px;\n"
" max-width:100px;\n"
" max-height:100px;\n"
" min-width:100px;\n"
" min-height:100px;\n"
""));
        three = new QPushButton(centralWidget);
        three->setObjectName(QString::fromUtf8("three"));
        three->setGeometry(QRect(340, 110, 100, 100));
        three->setStyleSheet(QString::fromUtf8("background-color: white;\n"
" border-width:1px;\n"
" border-radius:50px;\n"
" max-width:100px;\n"
" max-height:100px;\n"
" min-width:100px;\n"
" min-height:100px;"));
        star = new QPushButton(centralWidget);
        star->setObjectName(QString::fromUtf8("star"));
        star->setGeometry(QRect(140, 410, 100, 100));
        star->setStyleSheet(QString::fromUtf8("background-color: white;\n"
" border-width:1px;\n"
" border-radius:50px;\n"
" max-width:100px;\n"
" max-height:100px;\n"
" min-width:100px;\n"
" min-height:100px;"));
        zero = new QPushButton(centralWidget);
        zero->setObjectName(QString::fromUtf8("zero"));
        zero->setGeometry(QRect(240, 410, 100, 100));
        zero->setStyleSheet(QString::fromUtf8("background-color: white;\n"
" border-width:1px;\n"
" border-radius:50px;\n"
" max-width:100px;\n"
" max-height:100px;\n"
" min-width:100px;\n"
" min-height:100px;"));
        pound = new QPushButton(centralWidget);
        pound->setObjectName(QString::fromUtf8("pound"));
        pound->setGeometry(QRect(340, 410, 100, 100));
        pound->setStyleSheet(QString::fromUtf8("background-color: white;\n"
" border-width:1px;\n"
" border-radius:50px;\n"
" max-width:100px;\n"
" max-height:100px;\n"
" min-width:100px;\n"
" min-height:100px;"));
        number = new QLineEdit(centralWidget);
        number->setObjectName(QString::fromUtf8("number"));
        number->setGeometry(QRect(90, 30, 351, 51));
        QFont font;
        font.setPointSize(15);
        number->setFont(font);
        number->setMaxLength(13);
        number->setAlignment(Qt::AlignCenter);
        Call = new QPushButton(centralWidget);
        Call->setObjectName(QString::fromUtf8("Call"));
        Call->setGeometry(QRect(240, 520, 100, 100));
        Call->setStyleSheet(QString::fromUtf8("background-color: white;\n"
" border-width:1px;\n"
" border-radius:50px;\n"
" max-width:100px;\n"
" max-height:100px;\n"
" min-width:100px;\n"
" min-height:100px;"));
        Undo = new QPushButton(centralWidget);
        Undo->setObjectName(QString::fromUtf8("Undo"));
        Undo->setGeometry(QRect(340, 520, 100, 100));
        Undo->setStyleSheet(QString::fromUtf8("background-color: white;\n"
" border-width:1px;\n"
" border-radius:50px;\n"
" max-width:100px;\n"
" max-height:100px;\n"
" min-width:100px;\n"
" min-height:100px;"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 988, 26));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuTools->menuAction());
        menuTools->addAction(actionOpen_an_adress_book);
        menuTools->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOpen_an_adress_book->setText(QApplication::translate("MainWindow", "Open an adress book...", nullptr));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        seven->setText(QApplication::translate("MainWindow", "7 \n"
"P Q R S", nullptr));
        eight->setText(QApplication::translate("MainWindow", "8 \n"
"T U V", nullptr));
        nine->setText(QApplication::translate("MainWindow", "9 \n"
"W X Y Z", nullptr));
        four->setText(QApplication::translate("MainWindow", "4 \n"
"G H I", nullptr));
        five->setText(QApplication::translate("MainWindow", "5 \n"
"J K L", nullptr));
        six->setText(QApplication::translate("MainWindow", "6 \n"
"M N O", nullptr));
        one->setText(QApplication::translate("MainWindow", "1", nullptr));
        two->setText(QApplication::translate("MainWindow", "2\n"
"A B C", nullptr));
        three->setText(QApplication::translate("MainWindow", "3\n"
"D E F", nullptr));
        star->setText(QApplication::translate("MainWindow", "*", nullptr));
        zero->setText(QApplication::translate("MainWindow", "0", nullptr));
        pound->setText(QApplication::translate("MainWindow", "#", nullptr));
        number->setInputMask(QApplication::translate("MainWindow", " XXX-XXX-XXXX", nullptr));
        Call->setText(QApplication::translate("MainWindow", "Call", nullptr));
        Undo->setText(QApplication::translate("MainWindow", "Undo", nullptr));
        menuTools->setTitle(QApplication::translate("MainWindow", "Tools", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
