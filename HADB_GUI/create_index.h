#ifndef CREATE_INDEX_H
#define CREATE_INDEX_H

#include <QDialog>
#include "comunication_handler.h"

namespace Ui {
class Create_Index;
}

class Create_Index : public QDialog
{
    Q_OBJECT

public:
    explicit Create_Index(QWidget *parent = 0);
    ~Create_Index();
    Comunication_Handler* comunication;

    void setComunication(Comunication_Handler *value);

private:
    Ui::Create_Index *ui;
};

#endif // CREATE_INDEX_H
