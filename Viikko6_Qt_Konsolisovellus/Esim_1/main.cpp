#include "myhttp.h"

#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    Users *objUsers = new Users;
    objUsers->getUsers(2);

    return a.exec();
}
