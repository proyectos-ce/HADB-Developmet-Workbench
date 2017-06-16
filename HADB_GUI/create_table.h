#ifndef CREATE_TABLE_H
#define CREATE_TABLE_H

#include <QDialog>

namespace Ui {
class Create_Table;
}

class Create_Table : public QDialog
{
    Q_OBJECT

public:
    explicit Create_Table(QWidget *parent = 0);
    ~Create_Table();

private:
     Ui::Create_Table *ui;
};

#endif // CREATE_TABLE_H
