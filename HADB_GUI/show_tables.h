#ifndef SHOW_TABLES_H
#define SHOW_TABLES_H

#include <QDialog>

namespace Ui {
class Show_Tables;
}

class Show_Tables : public QDialog
{
    Q_OBJECT

public:
    explicit Show_Tables(QWidget *parent = 0);
    ~Show_Tables();

private:
    Ui::Show_Tables *ui;
};

#endif // SHOW_TABLES_H
