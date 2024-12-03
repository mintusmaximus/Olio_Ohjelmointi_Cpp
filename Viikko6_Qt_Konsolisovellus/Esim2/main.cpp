#include <QCoreApplication>
#include "firstclass.h"
#include "secondclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    FirstClass *objFirstClass = new FirstClass;


    delete objFirstClass;
    objFirstClass = nullptr;

    return a.exec();
}
