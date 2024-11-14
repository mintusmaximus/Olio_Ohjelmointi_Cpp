#ifndef CHEF_H
#define CHEF_H


// kätevä sijoittaa kaikki includet tänne että menee myös aliluokkiin
#include <string>
#include <iostream>
using namespace std;


class Chef
{
public:
    Chef(); // perus konstruktori
    ~Chef(); // dekonstruktori
    Chef(string s); // konstruktori nimen kanssa
    void makeSalad();
    void makeSoup();

    // uml kaaviossa ei ollut getteriä/setteriä nimelle joten laitetaan suoraan muuttujaan konstruktorissa.


protected:
    string name; // protected nimi joten liittyy myös alaluokkiin

};

#endif // CHEF_H
