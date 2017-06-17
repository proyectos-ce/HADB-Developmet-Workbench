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

void Show_Tables::setComunication(Comunication_Handler *value)
{
    comunication = value;
}
void Show_Tables::show_All(){
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(2);
    ui->tableWidget->setColumnWidth(0,250);
    ui->tableWidget->setColumnWidth(1,501);
    QStringList l;
    l<<"Table Number"<<"Table Name";
    ui->tableWidget->setHorizontalHeaderLabels(l);

    table_names.push_back("estudiantes");
    table_names.push_back("mocos");
    table_names.push_back("casas");
    table_names.push_back("somos guapos");

    for(int j = 0; j < table_names.size(); j++){
        ui->tableWidget->insertRow(j);}


//    ui->tableWidget->setItem(0,0, new QTableWidgetItem("0"));
//    std::string name = table_names[0];
//    ui->tableWidget->setItem(0,1, new QTableWidgetItem(name.c_str()));
    for(int i=0; i<table_names.size();i++){
    int number = i+1;
    ui->tableWidget->setItem(i,0, new QTableWidgetItem(std::to_string(number).c_str()));
    std::string name = table_names[i];
    ui->tableWidget->setItem(i,1, new QTableWidgetItem(name.c_str()));
    }
}
