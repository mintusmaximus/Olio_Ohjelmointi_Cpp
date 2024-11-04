#include "car.h"
#include "rectangle.h"
#include "student.h"

#include <iostream>
#include <memory>

using namespace std;

int main()
{

    /*
    Vaihe 1: Car-luokka

    Luo C++-ohjelma, jossa määritellään luokka nimeltä Car. Tällä luokalla tulisi olla seuraavat jäsenmuuttujat ja metodit:

        Jäsenmuuttujat:
            brand: merkkijono, joka sisältää auton merkin.
            model: merkkijono, joka sisältää auton mallin.
            yearModel: kokonaisluku, joka sisältää auton valmistusvuoden.
        Metodit:
            printData(): tulostaa auton merkin, mallin ja valmistusvuoden.
            setBrand(string): asettaa auton merkin.
            setModel(string): asettaa auton mallin.
            setYearModel(int): asettaa auton valmistusvuoden.

    Pääohjelmassa:

        Luo Car-olio pinomuistiin ja aseta sille merkki, malli ja vuosi.
        Tulosta auton tiedot käyttämällä printData()-metodia.

    */
    Car carObj1;

    carObj1.setModel("S65 AMG");
    carObj1.setBrand("Mercedez");
    carObj1.setYearModel(2015);
    carObj1.printData();



    /*
    Vaihe 2: Rectangle-luokka

    Tee C++-ohjelma, jossa määritellään luokka nimeltä Rectangle. Tällä luokalla tulisi olla seuraavat jäsenmuuttujat ja metodit:

        Jäsenmuuttujat:
            width: reaaliluku(double), joka määrittää suorakulmion leveyden.
            height: reaaliluku(double), joka määrittää suorakulmion korkeuden.
        Metodit:
            getArea(): laskee ja palauttaa suorakulmion pinta-alan kaavalla width * height.
            getCircum(): laskee ja palauttaa suorakulmion ympärysmitan kaavalla 2 * (width + height).
            setWidth(double): asettaa suorakulmion leveyden.
            setHeight(double): asettaa suorakulmion korkeuden.

    Pääohjelmassa:

        Luo Rectangle-olio kekomuistiin ja aseta sen leveys ja korkeus.
        Tulosta suorakulmion pinta-ala ja ympärysmitta.
        Tuhoa olio.
    */



    Rectangle *rectObj = new Rectangle;

    int rectangleH = 6;
    int rectangleW = 9;

    rectObj->setHeight(rectangleH);
    rectObj->setWidth(rectangleW);

    double circumference = rectObj->getCircum(rectangleH, rectangleW);
    double area = rectObj->getArea(rectangleH, rectangleW);

    // varmaan on olemassa parempi tapa saada nämä muuttujat luokan sisältä eikä main-funktiosta
    rectObj->printInfo(circumference, area);

    delete rectObj;
    rectObj = nullptr;






    /*
    Vaihe 3: Student-luokka

    Luo C++-ohjelma, jossa määritellään luokka nimeltä Student. Tällä luokalla tulisi olla seuraavat jäsenmuuttujat ja metodit:

    Käytä tässä harjoituksessa hyväksesi Qt-Creatorin Refactor toimintoa. Kun olet luonut jäsen muuttujat, klikkaa hiiren oikealla ja valitse "Add Getter and Setter ...".

        Jäsenmuuttujat:
            name: merkkijono, joka sisältää opiskelijan nimen.
            studentNumber: kokonaisluku, joka sisältää opiskelijanumeron.
            average: reaaliluku, joka sisältää opiskelijan keskiarvon.
        Metodit:
        Setterit:
            setName(string): asettaa opiskelijan nimen.
            setStudentNumber(int): asettaa opiskelijanumeron.
            setAverage(double): asettaa opiskelijan keskiarvon.
        Getterit:
            string getName(): palauttaa opiskelijan nimen.
            int getStudentNumber(): palauttaa opiskelijanumeron(merkkimuotoinen tunniste).
            double getAverage(): palauttaa opiskelijan keskiarvon.

    Pääohjelmassa:

        Luo Student-olio smart pointerilla ja aseta sille nimi, opiskelijanumero ja keskiarvo.
        Tulosta opiskelijan tiedot käyttämällä get-metodeja.
    */


    unique_ptr<Student> objStudent1=make_unique<Student>();





    return 0;
}
