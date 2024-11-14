#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"

class ItalianChef : public Chef
{
public:
    ItalianChef();
    ItalianChef(string); // konstruktori nimen kanssa
    ~ItalianChef();

    string getName(); // tämä oli uml-kaaviossa, ei setNamea.
    void makePasta();

};

#endif // ITALIANCHEF_H
