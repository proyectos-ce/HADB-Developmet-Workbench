#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "menu.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    Menu menu;

    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_Conect_BUTTON_clicked();

private:
    Ui::MainWindow *ui;
    string port;
    string ip;
};

#endif // MAINWINDOW_H
