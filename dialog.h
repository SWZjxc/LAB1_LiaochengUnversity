#ifndef DIALOG_H
#define DIALOG_H

#include <QMainWindow>
#include <QLabel>
#include <QDialog>
#include <string>
#include <QPushButton>
#include "final.h"
#include <QLineEdit>
namespace Ui_dialog {
class dialog;
}

class dialog : public QDialog
{

public:
     explicit dialog(QWidget *parent = nullptr);
     void Button_Clicked();

private:
     QDialog *dialog1 = new QDialog(this);
     QLineEdit *lineEdit = new QLineEdit(this);
     QLineEdit *lineEdit2 = new QLineEdit(this);
     QPushButton *button = new QPushButton("登录", this);
     QPushButton *button2 = new QPushButton("退出", this);

};

#endif // DIALOG_H
