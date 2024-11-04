#include "car.h"

#include <iostream>
#include <vector>

using namespace std;



/*

Luo C++-ohjelma, jossa määritellään luokka nimeltä Car. Tällä luokalla tulisi olla seuraavat jäsenmuuttujat ja metodit:

    Jäsenmuuttujat:
        brand: merkkijono, joka sisältää auton merkin.
        model: merkkijono, joka sisältää auton mallin.
        yearModel: kokonaisluku, joka sisältää auton valmistusvuoden.
    Metodit:
        printData(): tulostaa auton merkin, mallin ja valmistusvuoden.
        Car(string, string, int): konstruktori, jolla voidaan alustaa kaikki jäsenmuuttujat

Pääohjelmassa:

    Luo vektori nimeltään carList. (Luo lista pinoon. Et siis tarvitse smart pointteria.)
    Luo kolme Car-luokan oliota (keksi itse merkit, mallit ja vuosimallit)
    Lisää oliot listaan.
    Tulosta listan toisen alkion tiedot.
    Tulosta kaikkien autojen tiedot käyttämällä for-silmukkaa.

*/


int main()
{
    // luo oliot autoille
    Car *objCar1 = new Car;
    Car *objCar2 = new Car;
    Car *objCar3 = new Car;


    // lisätään tiedot
    objCar1->setBrand("Toyota");
    objCar1->setModel("Corolla");
    objCar1->setYearModel(2010);

    objCar2->setBrand("Ford");
    objCar2->setModel("Focus");
    objCar2->setYearModel(2015);

    objCar3->setBrand("Audi");
    objCar3->setModel("A4");
    objCar3->setYearModel(2018);

    vector<Car> carList; // luodaan vektori auto-objekteille
    carList.push_back(*objCar1); // viedään objektit vektoriin
    carList.push_back(*objCar2);
    carList.push_back(*objCar3);



    cout << "Listan toisen alkion tiedot" << endl;
    carList[1].printData();

    cout << "\n\nTulostus for loopilla:" << endl;
    for (int i = 0; i < carList.size(); i++){
        carList[i].printData();
    }

    // olioiden poisto käytön jälkeen
    delete objCar1;
    objCar1 = nullptr;
    delete objCar2;
    objCar2 = nullptr;
    delete objCar3;
    objCar3 = nullptr;
    return 0;
}
