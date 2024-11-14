#include "chef.h"
#include <iostream>

Chef::Chef() { // nimetön konstruktori
    // cout << "Nimeton kokki luotu" << endl; // tämä tulostuu myös jos tekee ItalianChef olion joten laitoin kommentin taakse siistiyttä varten
}

Chef::~Chef() // dekonstruktori tulostaa nimen, jos se on
{
    cout << "Kokki " << name << " tuhottu" << endl;
}

Chef::Chef(string s) // konstruktori joka tulostaa nimen ja asettaa sen luokkaan
{
    cout << "Kokki " << s << " luotu" << endl;
    name = s; // laitetaan nimi luokkaan ilman setteriä
}

void Chef::makeSalad()
{
    cout << "Kokki " << name << " tekee salaattia" << endl;
}

void Chef::makeSoup()
{
    cout << "Kokki " << name << " tekee soppaa" << endl;
}


