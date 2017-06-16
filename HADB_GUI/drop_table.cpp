#include "drop_table.h"
#include "ui_drop_table.h"

Drop_Table::Drop_Table(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Drop_Table)
{
    ui->setupUi(this);
}

Drop_Table::~Drop_Table()
{
    delete ui;
}
