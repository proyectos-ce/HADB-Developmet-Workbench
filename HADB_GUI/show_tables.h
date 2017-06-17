#ifndef SHOW_TABLES_H
#define SHOW_TABLES_H

#include <QDialog>
#include <vector>
#include <string>
#include "table.h"
#include "iostream"

namespace Ui {
class Show_Tables;
}

class Show_Tables : public QDialog
{
    Q_OBJECT

public:
    explicit Show_Tables(QWidget *parent = 0);
    ~Show_Tables();
    Table myTable;
    std::string entered_string;
    std::vector<std::string> table_names;
    QStringList rowList;

    void show_All();

private:
    Ui::Show_Tables *ui;
};

#endif // SHOW_TABLES_H
