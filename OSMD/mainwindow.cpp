#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->ButtonAddUser,SIGNAL(clicked()),SLOT(openAdmAddUser()));
    connect(ui->ButtonRegUser,SIGNAL(clicked()),SLOT(openAdmChangeUser()));
    connect(ui->ButtonChangePriv,SIGNAL(clicked()),SLOT(openAdmChangePriv()));
    connect(ui->ButtonCHangePrices,SIGNAL(clicked()),SLOT(openAdmChangePrice()));
    connect(ui->ButtonAddNews,SIGNAL(clicked()),SLOT(openAdmAddNews()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::openAdmAddUser(){
    admchange.openFrame(1);
    admchange.show();
}

void MainWindow::openAdmChangeUser(){
    admchange.openFrame(2);
    admchange.show();
}

void MainWindow::openAdmChangePriv(){
    admchange.openFrame(3);
    admchange.show();
}

void MainWindow::openAdmChangePrice(){
    admchange.openFrame(4);
    admchange.show();
}

void MainWindow::openAdmAddNews(){
    admchange.openFrame(5);
    admchange.show();
}
