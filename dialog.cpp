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
#include <QFileDialog>
#include <QMessageBox>


dialog::dialog(QWidget *parent) :
    QDialog(parent)
    {
//        QDialog *dialog1 = new QDialog(dialog_1);
        QLabel *label = new QLabel(this);
        QLabel *label2 = new QLabel(this);
        QLabel *label3 = new QLabel(this);
//        QLineEdit *lineEdit = new QLineEdit(this);
//        QLineEdit *lineEdit2 = new QLineEdit(this);
        QFont ft("Arial",24);
        QFont ft2("Arial",12);
        label->setFont(ft);
        label->setText("登陆");
        label->move(195,70);
        label2->setFont(ft2);
        label2->setText("用户名：");
        label2->move(80,150);
        label3->setFont(ft2);
        label3->setText("密码：");
        label3->move(80,190);
        dialog1->resize(500,500);
        dialog1->setModal(false);
        lineEdit->setPlaceholderText("Enter your ID");
        lineEdit->setGeometry(160, 150, 200, 30);
        lineEdit2->setPlaceholderText("Enter your PWD");
        lineEdit2->setEchoMode(QLineEdit::Password);
        lineEdit2->setGeometry(160, 190, 200, 30);

        button2->setGeometry(300, 250, 80, 50);
        button->setGeometry(100, 250, 80, 50);
        QObject::connect(button2, &QPushButton::clicked, this, &QWidget::close);
        QObject::connect(button, &QPushButton::clicked, this, &dialog::Button_Clicked);
        //dialog1->show();
    }


//label->setPixmap
//(QPixmap("/Users/michael/Desktop/QT_Project/test_02/p1.png"));
void dialog::Button_Clicked()
{
    QString username = lineEdit->text();
    QString password = lineEdit2->text();
    if (username == "2021400839" & password == "Lcdx@123")
    {
        lineEdit->clear();
        lineEdit2->clear();
        final *f = new final(this);
        QString filename = QFileDialog ::getOpenFileName(this,"打开文件",
        "E:/QtTemplate/template_lab1/lab_1","haeder(*.h);;src(*.cpp)");
        lineEdit->setText(filename);



    }
    else
    {
        //fall *fa = new fall(this);
        QMessageBox::warning(this,"警告","用户名或密码错误");
        lineEdit->clear();
        lineEdit2->clear();
    }
    //f->show();
}
