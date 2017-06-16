#include "show_tables.h"
#include "ui_show_tables.h"

Show_Tables::Show_Tables(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Show_Tables)
{
    ui->setupUi(this);
}

Show_Tables::~Show_Tables()
{
    delete ui;
}
