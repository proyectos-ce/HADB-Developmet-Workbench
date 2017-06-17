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
#include <iostream>
#include <string>

//class Create_Table;
using namespace std;


class Create_Table;

namespace Ui {
class Manage_Database;
}

class Manage_Database : public QDialog
{
    Q_OBJECT

public:

    Create_Index create_index;


    Create_Table* create_table = new Create_Table;


    void message_printer(string command);

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

    string entered_string;
    Ui::Manage_Database *ui;
     std::vector<std::vector<std::string> > matrix;
    QStringList rowList;
    bool table_onScreen;

};

#endif // MANAGE_DATABASE_H
