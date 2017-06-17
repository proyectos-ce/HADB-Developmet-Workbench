#ifndef DROP_TABLE_H
#define DROP_TABLE_H

#include <QDialog>
#include "comunication_handler.h"

namespace Ui {
class Drop_Table;
}

class Drop_Table : public QDialog
{
    Q_OBJECT

public:
    explicit Drop_Table(QWidget *parent = 0);
    ~Drop_Table();
    Comunication_Handler* comunication;

    void setComunication(Comunication_Handler *value);

private:
    Ui::Drop_Table *ui;
};

#endif // DROP_TABLE_H
