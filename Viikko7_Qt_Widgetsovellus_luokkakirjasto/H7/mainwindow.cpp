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

void MainWindow::on_btnCount_clicked()
{
    //qDebug()<<"Painettu";

    counter++;
    QString s = QString::number(counter);
    ui->labelInfo->setText(QString("Painiketta painettu %1 kertaa").arg(s)); // placeholderilla stringiksi muutettu muuttuja tallennetaan näin
    ui->txtResult->setText(s);

    //qDebug()<<counter;
}


void MainWindow::on_btnReset_clicked()
{
    // qDebug()<<"Nollattu";

    counter = 0; // nollataan luku
    QString s = QString::number(counter);    // muutetaan luku qstringiksi
    ui->txtResult->setText(s); // näytetään 0
    ui->labelInfo->setText(QString("Painiketta painettu %1 kertaa").arg(s)); // syötetään teksti labelInfoon

}

