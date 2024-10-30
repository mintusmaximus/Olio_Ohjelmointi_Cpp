#include <iostream>
#include <iomanip>
using namespace std;

void calcSum(float a, float b);
void calcDiv(float a, float b);

float retSum(float a, float b);
float retDiv(float a, float b);



int main()
{
    float a, b;

    cout << "Syötä luku 1: ";
    cin >> a;

    cout << "Syötä luku 2: ";
    cin >> b;

    calcSum(a, b);
    calcDiv(a, b);


    float foo = retSum(a,b);
    cout << foo << endl;

    float bar = retDiv(a,b);
    cout << bar << endl;


    return 0;
}

void calcDiv(float a, float b){
    if (b != 0) {
        cout << setprecision(2);
        cout << "Lukujen jakolasku: " << a/b << endl;
    }

    else {
        cout << "Ei voi jakaa nollalla" << endl;
    }
}

void calcSum(float a, float b){
    cout << setprecision(2);
    cout << "Lukujen summa: " << a+b << endl;
}


float retSum(float a, float b){
    if (b != 0){
        return a+b;
    }
}

float retDiv(float a, float b){
    return a/b;
}
