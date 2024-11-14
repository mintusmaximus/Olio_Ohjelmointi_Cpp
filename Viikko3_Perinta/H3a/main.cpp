#include <iostream>
#include <string>
using namespace std;

#include "chef.h"
#include "italianchef.h"

int main()
{
    /*
    Kantaluokka Chef:
    Luotuasi projektin, lisää siihen yllä esitetyn UML-kaavion mukainen luokka Chef. Luo luokka Qt:n toiminnolla "Add New ...C++ Class"
    Toteuta Chef-luokka niin, että jäsenfunktiot mukaan lukien konstruktori ja destruktori tulostavat debug tietoa ruudulle. Konstruktorille annetaan parametrina kokin nimi.
    Luo mainissa Chef-luokasta automaattinen olio (pinomuistiin), anna kokin nimeksi Gordon Ramsay
    Kutsu metodeja makeSalad ja makeSoup
    Suorita sovellus, jolloin tulos pitäisi näyttää seuraavalta *kuva* :
    */
    Chef objChef1 = Chef("Gordon Ramsay"); // tämä tulostaa nimen kanssa
    objChef1.makeSalad(); // kokki *nimi* tekee salaattia
    objChef1.makeSoup(); // kokki *nimi* tekee soppaa

    cout << endl; // erotin chef ja italianchef välille


    /*
    Aliluokka ItalianChef:
    Lisää luokka ItalianChef, joka perii luokan Chef
    Toteuta ItalianChef-luokka niin, että jäsenfunktiot mukaan lukien konstruktori ja destruktori tulostavat debug tietoa ruudulle. Konstruktorille annetaan parametrina kokin nimi. Metodi getName() palauttaa kokin nimen.
    Huomaa, että koska Chef-luokan muodostin ottaa parametrin, sinun on kutsuttava ItalianChef luokan konstruktorissa tuota muodostinta kts. https://peatutor.com/cplus/index.php#inheritance
    Luo mainissa ItalianChef-luokasta automaattinen olio (pinomuistiin), anna kokin nimeksi Anthony Bourdain
    Kutsu metodeja makeSalad, makeSoup, makePasta ja getName (tulosta sen palauttama nimi cout:lla)
    Suorita sovellus, jolloin tulos pitäisi näyttää seuraavalta: Ohjelman tulisi tulostaa edellisen lisäksi seuraavaa
    */

    ItalianChef objItalChef1 = ItalianChef("Anthony Bourdain"); // luodaan italialainen kokki nimen kanssa
    objItalChef1.makePasta(); // kokkaa pastaa, tämä on ItalianChef luokassa
    objItalChef1.makeSalad(); // tekee salaattia, chef luokka
    objItalChef1.makeSoup(); // kokkaa soppaa, chef luokka

    cout << "Italialaisen kokin nimi: " << objItalChef1.getName() << endl; // tulostetaan nimi

    cout << endl; // erotin dekonstruktoreille

    return 0;
}
