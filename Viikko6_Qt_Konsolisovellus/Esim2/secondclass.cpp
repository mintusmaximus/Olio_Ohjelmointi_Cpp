#include "secondclass.h"

SecondClass::SecondClass(QObject *parent)
    : QObject{parent}
{
    qDebug()<<"SecondClass luokka luotu\n";
}

SecondClass::~SecondClass()
{
    qDebug()<<"SecondClass luokka tuhottu\n";
}
