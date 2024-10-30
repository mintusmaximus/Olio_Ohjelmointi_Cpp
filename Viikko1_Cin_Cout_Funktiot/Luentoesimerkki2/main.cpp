#include <iostream>
#include <kertoma.h>

using namespace std;

int main() {
    int num;
    cout << "Kertoman laskin" << endl;
    cout << "Syötä kokonaisluku: ";
    cin >> num;
    int result = fact(num);
    if (result == -1) {
        cout << "ei voi laskea alle 1 kokoisella luvulla" << endl;
    } else {
        printf("Luvun %d kertoma on %d\n", num, result);
    }

    cout << "coefficient laskin:" << endl;
    int n, k;
    cout << "syötä n: ";
    cin >> n;
    cout << "syötä k: ";
    cin >> k;


    cout << "lukujen coefficient: " << coefficient(n, k) << endl;

    return 0;
}
