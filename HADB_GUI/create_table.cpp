#include "create_table.h"
#include "ui_create_table.h"

Create_Table::Create_Table(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Create_Table)
{
    ui->setupUi(this);
}

Create_Table::~Create_Table()
{
    delete ui;
}

