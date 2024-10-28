#include <iostream>
#include "myFunctions.h"

using namespace std;

void fun1();

int main()
{
    cout << "Hello World!" << endl;
    cout << "testi1\n";
    cout << "Testi2" << endl;
    fun1();
    fun2();
    fun3("Testinimi");
    return 0;
}

void fun1(){
    cout << "Olen funktio" << endl;
}
