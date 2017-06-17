#ifndef CREATE_TABLE_H
#define CREATE_TABLE_H

#include <QDialog>
#include <string>
#include"comunication_handler.h"




namespace Ui {
class Create_Table;
}

class Create_Table : public QDialog
{
    Q_OBJECT
private:
    Ui::Create_Table *ui;


public:
    explicit Create_Table(QWidget *parent = 0);
    ~Create_Table();
    Comunication_Handler* comunication;



    void setComunication(Comunication_Handler *value);

private slots:
    void on_buttonBox_accepted();



};

#endif // CREATE_TABLE_H
