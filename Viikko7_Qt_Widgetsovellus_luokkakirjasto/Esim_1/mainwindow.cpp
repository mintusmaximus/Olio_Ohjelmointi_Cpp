#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_buttonSaveName_clicked()
{
    nameInput = ui->fieldInputName->text();
    qDebug()<<nameInput;
    ui->labelResult->setText("Terve " + nameInput);
}


void MainWindow::on_buttonOpenCalc_clicked()
{
    objCalculator = new Calculator(this); // set current object as parent
    //objCalculator->show(); // can still use mainwindow when having a calculator open
    objCalculator->open(); // cant use mainwindow when using open

    objCalculator->setUsername(nameInput);
}



