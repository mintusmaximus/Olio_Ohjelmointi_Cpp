#include "persondata.h"
#include "ui_persondata.h"

PersonData::PersonData(QString value, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::PersonData)
{
    username = value;
    ui->setupUi(this);
    ui->labelPersonUsername->setText(username);

}

PersonData::~PersonData()
{
    delete ui;
}
