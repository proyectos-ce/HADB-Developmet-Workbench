#ifndef SHOW_DATABASE_H
#define SHOW_DATABASE_H

#include <QDialog>
#include <iostream>
#include <string>
#include "comunication_handler.h"


using namespace std;

namespace Ui {
class Show_Database;
}

class Show_Database : public QDialog
{
    Q_OBJECT

public:
    explicit Show_Database(QWidget *parent = 0);
    ~Show_Database();
    Comunication_Handler* comunication;

    void setComunication(Comunication_Handler *value);

private:
    Ui::Show_Database *ui;

};

#endif // SHOW_DATABASE_H
