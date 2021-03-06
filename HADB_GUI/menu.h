#ifndef MENU_H
#define MENU_H

#include <QWidget>

#include "manage_database.h"

#include "show_database.h"
#include "show_nodes.h"
#include "show_structure.h"
#include "show_tables.h"
#include "comunication_handler.h"
namespace Ui {
class Menu;
}

class Menu : public QWidget
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = 0);
    ~Menu();
    Manage_Database manage_database;
    Show_Database show_database;
    Show_Nodes show_nodes;
    Show_Structure show_structure;
    Show_Tables show_tables;

    Comunication_Handler* comunication;



    void setComunication(Comunication_Handler *value);

private slots:
    void on_ShowTables_BUTTON_clicked();

    void on_ShowNodes_BUTTON_clicked();

    void on_ShowMetadata_BUTTON_clicked();

    void on_ShowComponents_BUTTON_clicked();

    void on_ShowStructure_BUTTON_clicked();

    void on_Manage_Database_BUTTON_clicked();

    void on_database_clicked();

private:
    Ui::Menu *ui;
};

#endif // MENU_H
