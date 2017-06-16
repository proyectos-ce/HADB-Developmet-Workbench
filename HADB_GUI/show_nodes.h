#ifndef SHOW_NODES_H
#define SHOW_NODES_H

#include <QDialog>

namespace Ui {
class Show_Nodes;
}

class Show_Nodes : public QDialog
{
    Q_OBJECT

public:
    explicit Show_Nodes(QWidget *parent = 0);
    ~Show_Nodes();

private:
    Ui::Show_Nodes *ui;
};

#endif // SHOW_NODES_H
