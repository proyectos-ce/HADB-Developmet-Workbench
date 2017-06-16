#ifndef CREATE_INDEX_H
#define CREATE_INDEX_H

#include <QDialog>

namespace Ui {
class Create_Index;
}

class Create_Index : public QDialog
{
    Q_OBJECT

public:
    explicit Create_Index(QWidget *parent = 0);
    ~Create_Index();

private:
    Ui::Create_Index *ui;
};

#endif // CREATE_INDEX_H
