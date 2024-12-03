#include "firstclass.h"

FirstClass::FirstClass(QObject *parent) : QObject{parent}
{
    qDebug()<<"FirstClass olio luotu\n";
    objSecondClass = new SecondClass(this); // this lause varmistaa että secondclass tuhoutuu firstclass olion mukana, ilman deleteä
}

FirstClass::~FirstClass()
{
    qDebug()<<"FirstClass olio tuhottu\n";
}
