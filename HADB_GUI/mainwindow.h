#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "menu.h"
#include "connectionmanager.h"
#include "comunication_handler.h"

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
    string portstr;
    string ip;
    int port;
    ConnectionManager* connection;
    Comunication_Handler* comunication;

};

#endif // MAINWINDOW_H
