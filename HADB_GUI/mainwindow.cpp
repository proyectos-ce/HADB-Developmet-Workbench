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
    ip= ui->getIp->text().toStdString();;
    port= ui->getPort->text().toStdString();;

    QMessageBox messageBox;
    messageBox.critical(0,"Error","An error has occured !");
    messageBox.setFixedSize(500,200);

    menu.show();
    this->hide();
}
