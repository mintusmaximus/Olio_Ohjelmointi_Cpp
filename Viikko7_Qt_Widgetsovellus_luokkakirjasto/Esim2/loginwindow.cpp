#include "loginwindow.h"
#include "ui_loginwindow.h"

LoginWindow::LoginWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_buttonLogin_clicked()
{
    username = ui->label->text();
    emit nameSetted();
    this->close();
}

QString LoginWindow::getUsername() const
{
    return username;
}

void LoginWindow::setUsername(const QString &newUsername)
{
    username = newUsername;
}

