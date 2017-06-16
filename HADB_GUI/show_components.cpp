#include "show_components.h"
#include "ui_show_components.h"

Show_Components::Show_Components(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Show_Components)
{
    ui->setupUi(this);
}

Show_Components::~Show_Components()
{
    delete ui;
}
