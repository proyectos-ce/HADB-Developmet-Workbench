#include "create_index.h"
#include "ui_create_index.h"

Create_Index::Create_Index(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Create_Index)
{
    ui->setupUi(this);
}

Create_Index::~Create_Index()
{
    delete ui;
}

void Create_Index::setComunication(Comunication_Handler *value)
{
    comunication = value;
}
