#include "calculator.h"
#include "ui_calculator.h"

Calculator::Calculator(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);
}

Calculator::~Calculator()
{
    delete ui;
    qDebug()<<"calculator tuhottu";
}

void Calculator::setUsername(const QString &newUsername)
{
    username = newUsername;
    ui->labelUsername->setText(username);
}



void Calculator::on_pushButtonCalcSum_clicked()
{
    QString st1 = ui->lineOp1->text();
    QString st2 = ui->lineOp2->text(); // get data from input fields
    int result = st1.toInt() + st2.toInt();
    QString resultString = QVariant(result).toString();
    ui->labelResult->setText(resultString);
}

