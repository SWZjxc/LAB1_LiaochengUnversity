#include <iostream>
#include <QApplication>
#include <QDialog>
#include <QPushButton>
#include <QLabel>
#include "dialog.h"
#include "final.h"
#include <QFont>
int main(int argc,char* argv[])
{
    QApplication a(argc,argv);

    dialog dia;

    //dia.show();
    return dia.exec();

}


