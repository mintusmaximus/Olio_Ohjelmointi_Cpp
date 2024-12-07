#include "exampleclass.h"

#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    ExampleClass objExClass;
    objExClass.startToWait();
    return a.exec();
}
