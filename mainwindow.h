#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <iostream>
#include <QApplication>
#include <QDialog>
#include <QPushButton>
#include <QLabel>
#include <QMainWindow>
#include "dialog.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    void showtext(char str[]);

    ~MainWindow();
private:
    dialog *dialog0 = new dialog(this);
    QPushButton *button = new QPushButton("登录", dialog0);
    QPushButton *button2 = new QPushButton("退出", dialog0);

};

#endif // MAINWINDOW_H
