#include <iostream>
#include <QApplication>
#include <QDialog>
#include <QPushButton>
#include <QLabel>
#include "dialog.h"
#include "final.h"
#include <QInputDialog>
#include <QLineEdit>
#include "fall.h"
fall::fall(QWidget *parent):QDialog(parent)
{
    QDialog *dialog5 = new QDialog(this);
    QLabel *label = new QLabel(dialog5);
    QFont ft("Arial",10);
    label->setFont(ft);
    label->setText("登陆失败，请重新登录");
    label->move(10,10);

    dialog5->resize(190,50);
    dialog5->setModal(false);
     label->show();
    dialog5->show();
}
