#ifndef CREATE_TABLE_H
#define CREATE_TABLE_H

#include <QDialog>
#include <string>
#include "manage_database.h"



class Manage_Database;

namespace Ui {
class Create_Table;
}

class Create_Table : public QDialog
{
    Q_OBJECT
private:
    Ui::Create_Table *ui;
    Manage_Database *parent;

public:
    explicit Create_Table(QWidget *parent = 0);
    ~Create_Table();


    void setParent(Manage_Database *value);

private slots:
    void on_buttonBox_accepted();



};

#endif // CREATE_TABLE_H
