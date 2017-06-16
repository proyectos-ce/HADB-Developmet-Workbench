#ifndef SHOW_COMPONENTS_H
#define SHOW_COMPONENTS_H

#include <QDialog>

namespace Ui {
class Show_Components;
}

class Show_Components : public QDialog
{
    Q_OBJECT

public:
    explicit Show_Components(QWidget *parent = 0);
    ~Show_Components();

private:
    Ui::Show_Components *ui;
};

#endif // SHOW_COMPONENTS_H
