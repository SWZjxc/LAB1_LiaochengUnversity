#ifndef FINAL_H
#define FINAL_H
#include <QMainWindow>
#include <QLabel>
#include <QDialog>
#include <string>
#include <QPushButton>
#include "dialog.h"

namespace Ui {
class final;
}

class final : public QDialog
{
    Q_OBJECT
public:
    explicit final(QWidget *parent = 0);
};

#endif
