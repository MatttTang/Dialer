#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "myaddressbookmodel.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionOpen_an_adress_book_triggered();

    void on_tableView_clicked(const QModelIndex &index);

    void on_seven_pressed();

    void on_number_textChanged(const QString &arg1);

    void on_seven_clicked();

    void on_eight_clicked();

    void on_nine_clicked();

    void on_four_clicked();

    void on_five_clicked();

    void on_six_clicked();

    void on_one_clicked();

    void on_two_clicked();

    void on_three_clicked();

    void on_star_clicked();

    void on_zero_clicked();

    void on_pound_clicked();

    void on_Undo_clicked();

    bool Contains(QString line, QString cell);

    void ConvertName(QString name);

    bool nameContains(QString input, QString code);
    void on_Call_clicked();

    void on_two_pressed();

    void on_two_released();

    void on_one_pressed();

    void on_one_released();

    void on_three_pressed();

    void on_four_pressed();

    void on_five_pressed();

    void on_six_pressed();

    void on_eight_pressed();

    void on_nine_pressed();

    void on_zero_released();

    void on_zero_pressed();

    void on_star_pressed();

    void on_pound_pressed();

    void on_Call_pressed();

    void on_three_released();

    void on_four_released();

    void on_five_released();

    void on_six_released();

    void on_seven_released();

    void on_eight_released();

    void on_nine_released();

    void on_star_released();

    void on_pound_released();

    void on_Call_released();

    void on_Undo_pressed();

    void on_Undo_released();

private:
    Ui::MainWindow *ui;
    MyAddressBookModel *myModel;
    QString userNum = "";
    QString contactName;
};

#endif // MAINWINDOW_H
