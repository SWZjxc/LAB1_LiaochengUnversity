#ifndef FALL_H
#define FALL_H
#include <QMainWindow>
#include <QLabel>
#include <QDialog>
#include <string>
#include <QPushButton>
#include "dialog.h"

class fall: public QDialog
{
    Q_OBJECT
public:
    explicit fall(QWidget *parent = 0);
};

#endif // FALL_H
