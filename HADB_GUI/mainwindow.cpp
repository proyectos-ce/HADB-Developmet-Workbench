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
    ip= ui->getIp->text().toStdString();
    portstr= ui->getPort->text().toStdString();
    try{
    port = std::stoi(portstr);

        comunication = new Comunication_Handler();
        connection = new ConnectionManager(ip, port);
        comunication->setConnection(connection);






    if (true){

        menu.show();
        menu.setComunication(comunication);
        this->hide();

    }

    }catch (exception& e){
        QMessageBox messageBox;
        messageBox.critical(0,"Error","Please Check the IP and the Port");
        messageBox.setFixedSize(700,500);
    }




}
