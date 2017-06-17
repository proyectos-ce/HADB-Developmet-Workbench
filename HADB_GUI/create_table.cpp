#include "create_table.h"
#include "ui_create_table.h"
//#include"manage_database.h"
Create_Table::Create_Table( QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Create_Table)
{
    ui->setupUi(this);

}

Create_Table::~Create_Table()
{
    delete ui;
}


void Create_Table::on_buttonBox_accepted()
{
    std::string name= ui->lineEdit->text().toStdString();
    std::string parameters = ui->lineEdit_2->text().toStdString();
    parent->message_printer("Create Table request sent");




}

void Create_Table::setParent(Manage_Database *value)
{
    parent = value;
}

