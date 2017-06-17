#ifndef SHOW_NODES_H
#define SHOW_NODES_H

#include <QDialog>
#include "comunication_handler.h"

namespace Ui {
class Show_Nodes;
}

class Show_Nodes : public QDialog
{
    Q_OBJECT

public:
    explicit Show_Nodes(QWidget *parent = 0);
    ~Show_Nodes();
    Comunication_Handler* comunication;

    void setComunication(Comunication_Handler *value);

private:
    Ui::Show_Nodes *ui;
};

#endif // SHOW_NODES_H
