#include "show_nodes.h"
#include "ui_show_nodes.h"

Show_Nodes::Show_Nodes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Show_Nodes)
{
    ui->setupUi(this);
}

Show_Nodes::~Show_Nodes()
{
    delete ui;
}
