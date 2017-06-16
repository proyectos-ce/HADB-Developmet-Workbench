#ifndef DROP_TABLE_H
#define DROP_TABLE_H

#include <QDialog>

namespace Ui {
class Drop_Table;
}

class Drop_Table : public QDialog
{
    Q_OBJECT

public:
    explicit Drop_Table(QWidget *parent = 0);
    ~Drop_Table();

private:
    Ui::Drop_Table *ui;
};

#endif // DROP_TABLE_H
