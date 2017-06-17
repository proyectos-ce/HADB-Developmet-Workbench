#include "menu.h"
#include "ui_menu.h"

Menu::Menu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);


}

Menu::~Menu()
{
    delete ui;
}

void Menu::setComunication(Comunication_Handler *value)
{
    comunication = value;
}

void Menu::on_ShowTables_BUTTON_clicked()
{
    show_tables.show_All();
    show_tables.show();
}

void Menu::on_ShowNodes_BUTTON_clicked()
{
    show_nodes.show();
    show_nodes.setComunication(comunication);
}

void Menu::on_ShowMetadata_BUTTON_clicked()
{
    show_database.show();
    show_database.setComunication(comunication);
}

void Menu::on_ShowStructure_BUTTON_clicked()
{
    show_structure.show();
}

void Menu::on_Manage_Database_BUTTON_clicked()
{
    manage_database.show();
    manage_database.setComunication(comunication);
}

void Menu::on_database_clicked()
{
     manage_database.show();
}

void Menu::on_ShowComponents_BUTTON_clicked()
{

}
