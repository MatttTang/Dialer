#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFileDialog>
#include <iostream>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    myModel( new MyAddressBookModel(this))
{
    ui->setupUi(this);
    ui -> tableView -> setModel(myModel);

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_actionOpen_an_adress_book_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this,
        tr("Open Address Book"), "",
        tr("Address Book (*csv);; All Files (*)"));


    myModel -> OpenFile(fileName);

}

void MainWindow::on_tableView_clicked(const QModelIndex &index)
{
    ui -> number -> setText(myModel -> getPhoneNumber(index.row()));
    userNum = myModel -> getPhoneNumber(index.row());
}


void MainWindow::on_seven_clicked()
{
    if (userNum.size() < 10)
    {
        userNum = userNum + "7";
        ui -> number -> setText(userNum);
    }
}

void MainWindow::on_eight_clicked()
{
    if (userNum.size() < 10)
    {
        userNum = userNum + "8";
        ui -> number -> setText(userNum);
    }
}

void MainWindow::on_nine_clicked()
{
    if (userNum.size() < 10)
    {
        userNum = userNum + "9";
        ui -> number -> setText(userNum);
    }
}

void MainWindow::on_four_clicked()
{
    if (userNum.size() < 10)
    {
        userNum = userNum + "4";
        ui -> number -> setText(userNum);
    }
}

void MainWindow::on_five_clicked()
{
    if (userNum.size() < 10)
    {
        userNum = userNum + "5";
        ui -> number -> setText(userNum);
    }
}

void MainWindow::on_six_clicked()
{
    if (userNum.size() < 10)
    {
        userNum = userNum + "6";
        ui -> number -> setText(userNum);
    }
}

void MainWindow::on_one_clicked()
{
    if (userNum.size() < 10)
    {
        userNum = userNum + "1";
        ui -> number -> setText(userNum);
    }
}

void MainWindow::on_two_clicked()
{
    if (userNum.size() < 10)
    {
        userNum = userNum + "2";
        ui -> number -> setText(userNum);
    }
}

void MainWindow::on_three_clicked()
{
    if (userNum.size() < 10)
    {
        userNum = userNum + "3";
        ui -> number -> setText(userNum);
    }
}

void MainWindow::on_star_clicked()
{
    if (userNum.size() < 10)
    {
        userNum = userNum + "*";
        ui -> number -> setText(userNum);
    }
}

void MainWindow::on_zero_clicked()
{
    if (userNum.size() < 10)
    {
        userNum = userNum + "0";
        ui -> number -> setText(userNum);
    }
}

void MainWindow::on_pound_clicked()
{
    if (userNum.size() < 10)
    {
        userNum = userNum + "#";
        ui -> number -> setText(userNum);
    }
}

void MainWindow::on_Undo_clicked()
{
    userNum = userNum.remove(userNum.size() - 1,1);
    ui -> number -> setText(userNum);
}

bool MainWindow::Contains(QString line, QString cell)
{
    cell.remove(QChar('-'));
    for (int i = 0; i < line.size(); i++)
    {

        if (line.at(i) != cell.at(i))
           return false;
    }

    return true;
}

void MainWindow::ConvertName(QString name)
{
    contactName = "";

    if (name.at(0) == "A" || name.at(0) == "B" || name.at(0) == "C")
        contactName = "2";

    else if (name.at(0) == "D" || name.at(0) == "E" || name.at(0) == "F")
        contactName = "3";

    else if (name.at(0) == "G" || name.at(0) == "H" || name.at(0) == "I")
        contactName = "4";

    else if (name.at(0) == "J" || name.at(0) == "K" || name.at(0) == "L")
        contactName = "5";

    else if (name.at(0) == "M" || name.at(0) == "N" || name.at(0) == "O")
        contactName = "6";

    else if (name.at(0) == "P" || name.at(0) == "Q" || name.at(0) == "R" || name.at(0) == "S")
        contactName = "7";

    else if (name.at(0) == "T" || name.at(0) == "U" || name.at(0) == "V")
        contactName = "8";

    else if (name.at(0) == "W" || name.at(0) == "X" || name.at(0) == "Y" || name.at(0) == "Z")
        contactName = "9";

    for (int i = 1; i < name.size(); i++)
    {
        if (name.at(i) == "a" || name.at(i) == "b" || name.at(i) == "c")
            contactName = contactName + "2";

        else if (name.at(i) == "d" || name.at(i) == "e" || name.at(i) == "f")
            contactName = contactName + "3";

        else if (name.at(i) == "g" || name.at(i) == "h" || name.at(i) == "i")
            contactName = contactName + "4";

        else if (name.at(i) == "j" || name.at(i) == "k" || name.at(i) == "l")
            contactName = contactName + "5";

        else if (name.at(i) == "m" || name.at(i) == "n" || name.at(i) == "o")
            contactName = contactName + "6";

        else if (name.at(i) == "p" || name.at(i) == "q" || name.at(i) == "r" || name.at(i) == "s")
            contactName = contactName + "7";

        else if (name.at(i) == "t" || name.at(i) == "u" || name.at(i) == "v")
            contactName = contactName + "8";

        else if (name.at(i) == "w" || name.at(i) == "x" || name.at(i) == "y" || name.at(i) == "z")
            contactName = contactName + "9";
    }
}

bool MainWindow::nameContains(QString input, QString code)
{
    for (int i = 0; i < input.size(); i++)
    {
        if (i >= code.size())
            return true;

        if (input.at(i) == "1" || input.at(i) == "0")
            return false;

        if (input.at(i) != code.at(i))
            return false;
    }

    return true;
}


void MainWindow::on_number_textChanged(const QString &arg1)
{
    for (int j = 0; j < 500; j++)
        ui -> tableView -> showRow(j);

    for (int i = 0; i < 500; i++)
    {
        ConvertName(ui -> tableView -> model() -> data(ui->tableView->model() -> index(i, 0)).toString());

        if (!Contains(userNum, ui -> tableView -> model() -> data(ui->tableView->model() -> index(i, 2)).toString()) && !nameContains(userNum, contactName))
            ui -> tableView -> hideRow(i);

    }

}

void MainWindow::on_Call_clicked()
{
    if (userNum.size() == 10)
    {
        QMessageBox msg1;
        msg1.setText("This Program is not a Functioning Dialer, Thank You");
        msg1.setWindowTitle("Dialer Calling...");
        msg1.exec();
    }

    else {
        QMessageBox msg2;
        msg2.setText("The Number you are Trying to Reach is Invalid, Please Enter a Valid Number");
        msg2.setWindowTitle("Error");
        msg2.exec();
    }
}

void MainWindow::on_two_pressed()
{
    ui -> two -> setStyleSheet("background-color:green; \nborder-width:1px; \nborder-radius:50px; \nmax-width:100px; \n max-height:100px; \nmin-width:100px; \nmin-height:100px;");
}

void MainWindow::on_two_released()
{
    ui -> two -> setStyleSheet("background-color:white; \nborder-width:1px; \nborder-radius:50px; \nmax-width:100px; \n max-height:100px; \nmin-width:100px; \nmin-height:100px;");

}

void MainWindow::on_one_pressed()
{
    ui -> one -> setStyleSheet("background-color:green; \nborder-width:1px; \nborder-radius:50px; \nmax-width:100px; \n max-height:100px; \nmin-width:100px; \nmin-height:100px;");
}

void MainWindow::on_one_released()
{
    ui -> one -> setStyleSheet("background-color:white; \nborder-width:1px; \nborder-radius:50px; \nmax-width:100px; \n max-height:100px; \nmin-width:100px; \nmin-height:100px;");
}

void MainWindow::on_three_pressed()
{
    ui -> three -> setStyleSheet("background-color:green; \nborder-width:1px; \nborder-radius:50px; \nmax-width:100px; \n max-height:100px; \nmin-width:100px; \nmin-height:100px;");
}

void MainWindow::on_four_pressed()
{
    ui -> four -> setStyleSheet("background-color:green; \nborder-width:1px; \nborder-radius:50px; \nmax-width:100px; \n max-height:100px; \nmin-width:100px; \nmin-height:100px;");
}

void MainWindow::on_five_pressed()
{
    ui -> five -> setStyleSheet("background-color:green; \nborder-width:1px; \nborder-radius:50px; \nmax-width:100px; \n max-height:100px; \nmin-width:100px; \nmin-height:100px;");
}

void MainWindow::on_six_pressed()
{
    ui -> six -> setStyleSheet("background-color:green; \nborder-width:1px; \nborder-radius:50px; \nmax-width:100px; \n max-height:100px; \nmin-width:100px; \nmin-height:100px;");
}

void MainWindow::on_seven_pressed()
{
    ui -> seven -> setStyleSheet("background-color:green; \nborder-width:1px; \nborder-radius:50px; \nmax-width:100px; \n max-height:100px; \nmin-width:100px; \nmin-height:100px;");

}

void MainWindow::on_eight_pressed()
{
    ui -> eight -> setStyleSheet("background-color:green; \nborder-width:1px; \nborder-radius:50px; \nmax-width:100px; \n max-height:100px; \nmin-width:100px; \nmin-height:100px;");
}

void MainWindow::on_nine_pressed()
{
    ui -> nine -> setStyleSheet("background-color:green; \nborder-width:1px; \nborder-radius:50px; \nmax-width:100px; \n max-height:100px; \nmin-width:100px; \nmin-height:100px;");
}

void MainWindow::on_zero_released()
{
    ui -> zero -> setStyleSheet("background-color:white; \nborder-width:1px; \nborder-radius:50px; \nmax-width:100px; \n max-height:100px; \nmin-width:100px; \nmin-height:100px;");
}

void MainWindow::on_zero_pressed()
{
    ui -> zero -> setStyleSheet("background-color:green; \nborder-width:1px; \nborder-radius:50px; \nmax-width:100px; \n max-height:100px; \nmin-width:100px; \nmin-height:100px;");
}

void MainWindow::on_star_pressed()
{
    ui -> star -> setStyleSheet("background-color:green; \nborder-width:1px; \nborder-radius:50px; \nmax-width:100px; \n max-height:100px; \nmin-width:100px; \nmin-height:100px;");
}

void MainWindow::on_pound_pressed()
{
    ui -> pound -> setStyleSheet("background-color:green; \nborder-width:1px; \nborder-radius:50px; \nmax-width:100px; \n max-height:100px; \nmin-width:100px; \nmin-height:100px;");
}

void MainWindow::on_Call_pressed()
{
    ui -> Call -> setStyleSheet("background-color:green; \nborder-width:1px; \nborder-radius:50px; \nmax-width:100px; \n max-height:100px; \nmin-width:100px; \nmin-height:100px;");
}

void MainWindow::on_three_released()
{
    ui -> three -> setStyleSheet("background-color:white; \nborder-width:1px; \nborder-radius:50px; \nmax-width:100px; \n max-height:100px; \nmin-width:100px; \nmin-height:100px;");
}

void MainWindow::on_four_released()
{
    ui -> four -> setStyleSheet("background-color:white; \nborder-width:1px; \nborder-radius:50px; \nmax-width:100px; \n max-height:100px; \nmin-width:100px; \nmin-height:100px;");
}

void MainWindow::on_five_released()
{
    ui -> five -> setStyleSheet("background-color:white; \nborder-width:1px; \nborder-radius:50px; \nmax-width:100px; \n max-height:100px; \nmin-width:100px; \nmin-height:100px;");
}

void MainWindow::on_six_released()
{
    ui -> six -> setStyleSheet("background-color:white; \nborder-width:1px; \nborder-radius:50px; \nmax-width:100px; \n max-height:100px; \nmin-width:100px; \nmin-height:100px;");
}

void MainWindow::on_seven_released()
{
    ui -> seven -> setStyleSheet("background-color:white; \nborder-width:1px; \nborder-radius:50px; \nmax-width:100px; \n max-height:100px; \nmin-width:100px; \nmin-height:100px;");
}

void MainWindow::on_eight_released()
{
    ui -> eight -> setStyleSheet("background-color:white; \nborder-width:1px; \nborder-radius:50px; \nmax-width:100px; \n max-height:100px; \nmin-width:100px; \nmin-height:100px;");
}

void MainWindow::on_nine_released()
{
    ui -> nine -> setStyleSheet("background-color:white; \nborder-width:1px; \nborder-radius:50px; \nmax-width:100px; \n max-height:100px; \nmin-width:100px; \nmin-height:100px;");
}

void MainWindow::on_star_released()
{
    ui -> star -> setStyleSheet("background-color:white; \nborder-width:1px; \nborder-radius:50px; \nmax-width:100px; \n max-height:100px; \nmin-width:100px; \nmin-height:100px;");
}

void MainWindow::on_pound_released()
{
    ui -> pound -> setStyleSheet("background-color:white; \nborder-width:1px; \nborder-radius:50px; \nmax-width:100px; \n max-height:100px; \nmin-width:100px; \nmin-height:100px;");
}

void MainWindow::on_Call_released()
{
    ui -> Call -> setStyleSheet("background-color:white; \nborder-width:1px; \nborder-radius:50px; \nmax-width:100px; \n max-height:100px; \nmin-width:100px; \nmin-height:100px;");
}

void MainWindow::on_Undo_pressed()
{
    ui -> Undo -> setStyleSheet("background-color:red; \nborder-width:1px; \nborder-radius:50px; \nmax-width:100px; \n max-height:100px; \nmin-width:100px; \nmin-height:100px;");
}

void MainWindow::on_Undo_released()
{
    ui -> Undo -> setStyleSheet("background-color:white; \nborder-width:1px; \nborder-radius:50px; \nmax-width:100px; \n max-height:100px; \nmin-width:100px; \nmin-height:100px;");
}
