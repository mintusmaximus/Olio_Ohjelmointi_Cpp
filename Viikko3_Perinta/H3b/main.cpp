#include "animal.h"
#include "dog.h"

#include <iostream>

using namespace std;

int main()
{
    /*
    Harjoitus3b (perintä/ylikirjoittaminen)
    Ylikirjoittaminen perivässä luokassa

    Luotuasi projektin, lisää siihen kantaluokka nimeltä Animal, joka sisältää virtuaalisen metodin callOut. Tämä metodi tulostaa tekstin "Eläin ääntelee."
    Luo kantaluokasta perivä luokka nimeltä Dog, joka ylikirjoittaa metodin callOut. Ylikirjoitetun metodin tulisi tulostaa teksti "Koira haukkuu!"
    Kirjoita main-funktio, jossa luodaan Animal-luokan olio ja Dog-luokan olio.
    Kutsu molemmissa tapauksissa callOut-metodia ja varmista, että oikea viesti tulostuu.
    Varmista, että luomasi oliot tuhoutuvat.
    */

    Animal objAnimal1;
    objAnimal1.callOut();

    Dog objDog1;
    objDog1.callOut();

    return 0;
}
