#include "form1.h"
#include "form2.h"
#include "persondata.h"

#include "mainwindow.h"
#include "mysingleton.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->buttonForm3->setHidden(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_buttonLogin_clicked()
{
    objLogin = new LoginWindow(this);
    connect(objLogin, SIGNAL(nameSetted()), this, SLOT(fetchUsernameSlot()));
    objLogin->show();
}

void MainWindow::fetchUsernameSlot()
{
    username=objLogin->getUsername();
    ui->labelUsername->setText(username);
}


void MainWindow::on_buttonForm1_clicked()
{
    Form1 *objForm1 = new Form1(this);
    objForm1->show();
    ui->buttonForm3->setHidden(false);

}

void MainWindow::on_buttonForm2_clicked()
{
    Form2 *objForm2 = new Form2(this);
    objForm2->show();
    ui->buttonForm3->setHidden(false);
}


void MainWindow::on_buttonForm3_clicked()
{
    MySingleton *objectSingleton = MySingleton::getInstance();
    ui->labelUName->setText(objectSingleton->getName());
}



void MainWindow::on_buttonPersonData_clicked()
{
    if(username.length() == 0)
    {
        username="Vieras";
    }
    PersonData *objPersonData = new PersonData(username, this);
    objPersonData->show();
}

