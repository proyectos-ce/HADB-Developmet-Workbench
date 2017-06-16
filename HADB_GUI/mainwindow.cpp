#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "iostream"
#include "menu.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Conect_BUTTON_clicked()
{
    menu.show();
    this->hide();
}
