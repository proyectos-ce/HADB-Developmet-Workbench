#include "manage_database.h"
#include "ui_manage_database.h"
#include <iostream>
#include <string>
#include "table.h"
#include <vector>
#include "create_index.h"
#include "create_table.h"
#include "drop_table.h"

using namespace std;

Manage_Database::Manage_Database(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Manage_Database)
{
    ui->setupUi(this);
    table_onScreen=false;

      myTable.insertColumn("id", INT );
      myTable.insertColumn("nombre", STRING );
      myTable.insertColumn("altura", DOUBLE );


    //  std::cout << myTable.toString();
      Row newRow;
      newRow.insertColumn("1");
      newRow.insertColumn("Tavo");
      newRow.insertColumn("170.1");
      myTable.insertRow(newRow);
      newRow.reset();
      newRow.insertColumn("2");
      newRow.insertColumn("Daniel");
      newRow.insertColumn("170.2");
      myTable.insertRow(newRow);
      newRow.reset();
      newRow.insertColumn("3");
      newRow.insertColumn("Jimena");
      newRow.insertColumn("170.3");
      myTable.insertRow(newRow);
      newRow.reset();
     // std::cout << myTable.toString()<<"\n";

     // myTable.removeColumn(1);
     // std::cout << myTable.toString()<<"\n";

}

Manage_Database::~Manage_Database()
{
    delete ui;
}

void Manage_Database::on_buttonBox_accepted()
{

}

void Manage_Database::on_pushButton_clicked(){
    entered_string = ui->LineEntry->text().toStdString();
     message_printer(entered_string);


//    entered_string = ui->LineEntry->text().toStdString();
//    std::cout << entered_string << std::endl;
//    parser(entered_string);

//   // ui->tableWidget->clear();
//    ui->tableWidget->setColumnCount(1);
//    ui->tableWidget->setColumnWidth(0,851);

//    ui->tableWidget->insertRow(ui->tableWidget->rowCount());
//    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,0, new QTableWidgetItem(entered_string.c_str()));
}
void Manage_Database::message_printer(string command) {
    if (table_onScreen){
        on_pushButton_4_clicked();
    }
    ui->tableWidget->setColumnCount(1);
    ui->tableWidget->setColumnWidth(0,851);
    ui->tableWidget->insertRow(ui->tableWidget->rowCount());
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,0, new QTableWidgetItem(command.c_str()));

}
void Manage_Database::showTable(Table table){
    table_onScreen=true;
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(table.getTotalColumns());
    for(int i = 0; i < table.getTotalColumns(); i++){
        ui->tableWidget->setColumnWidth(i,830/table.getTotalColumns());
    }
    matrix = table.getTableAsMatrix();
    QStringList rowList2;
    string dato;
    for(int i = 0; i < table.getTotalColumns(); i++){
        dato=matrix[0][i];
        std::cout << dato.c_str() <<std::endl;
        rowList2<< dato.c_str();
    }
    ui->tableWidget->setHorizontalHeaderLabels(rowList2);

    for(int j = 0; j < table.getTotalRows(); j++){
        ui->tableWidget->insertRow(j);
        for(int i = 0; i < table.getTotalColumns(); i++){
        dato=matrix[j+1][i];
            ui->tableWidget->setItem(j,i, new QTableWidgetItem(dato.c_str()));
        }
    }
}

void Manage_Database::on_pushButton_4_clicked()
{
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(0);
}

void Manage_Database::on_pushButton_3_clicked()
{
    create_table.show();
}

void Manage_Database::on_pushButton_2_clicked()
{
    drop_table.show();
}

void Manage_Database::on_pushButton_5_clicked()
{
    create_index.show();
}
