#ifndef SHOW_STRUCTURE_H
#define SHOW_STRUCTURE_H

#include <QDialog>
#include <QtWidgets>

namespace Ui {
class Show_Structure;
}

class Show_Structure : public QDialog
{
    Q_OBJECT


public:
    explicit Show_Structure(QWidget *parent = 0);
    ~Show_Structure();

     QMovie *movie= new QMovie("structure.gif");

private:
    Ui::Show_Structure *ui;
};

#endif // SHOW_STRUCTURE_H
