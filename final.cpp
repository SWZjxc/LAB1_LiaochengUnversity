#include <QMainWindow>
#include <QLabel>
#include <QDialog>
#include <string>
#include <QPushButton>
#include "dialog.h"
#include "final.h"
#include <QFont>
#include <QThread>

final::final(QWidget *parent):QDialog(parent)
{
    QDialog *dialog4 = new QDialog(this);
    QLabel *label = new QLabel(dialog4);
    QFont ft("Arial",36);
    label->setFont(ft);
    label->setText("登陆成功");
    label->move(120,170);
    dialog4->resize(500,500);
    dialog4->setModal(false);
     label->show();
    dialog4->show();
//    QThread::msleep(1000);
//    dialog4->close();
}
