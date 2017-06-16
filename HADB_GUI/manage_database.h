#ifndef MANAGE_DATABASE_H
#define MANAGE_DATABASE_H

#include <QDialog>
#include <iostream>
#include <string>
#include "table.h"
#include <vector>
#include "create_index.h"
#include "create_table.h"
#include "drop_table.h"


using namespace std;

namespace Ui {
class Manage_Database;
}

class Manage_Database : public QDialog
{
    Q_OBJECT

public:

    Create_Index create_index;
    Create_Table create_table;
    Drop_Table drop_table;
    explicit Manage_Database(QWidget *parent = 0);
    ~Manage_Database();

private slots:
    void on_buttonBox_accepted();

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

private:
    void showTable (Table table);
    Table myTable;
    void message_printer(string command);
    string entered_string;
    Ui::Manage_Database *ui;
     std::vector<std::vector<std::string> > matrix;
    QStringList rowList;
    bool table_onScreen;

};

#endif // MANAGE_DATABASE_H
