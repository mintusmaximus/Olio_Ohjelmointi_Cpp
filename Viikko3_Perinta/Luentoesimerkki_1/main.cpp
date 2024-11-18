#include "cat.h"
#include "elephant.h"

#include <iostream>

using namespace std;

int main()
{
    Cat objCat1;
    objCat1.setColor("Valkoinen"); // kaikki animal luokan public metodit toimii
    objCat1.setOwner("Matti");
    objCat1.setWeight(5);

    Elephant objElephant;

    objElephant.setZooName("Korkeasaari");
    objElephant.setColor("Harmaa");
    objElephant.setWeight(4000);

    Cat objCat2=Cat(3, "musta", "Teppo"); // lisätään muodostimessa tiedot
    // jossa paino ja väri tulee Animal luokasta, owner Cat luokasta

    cout << "\nekan kissan omistaja: " << objCat1.getOwner() << endl;
    cout << "toisen kissan omistaja: " << objCat2.getOwner() << endl;
    objElephant.printData();
    objCat2.printData();
    objCat1.printData();
    cout << endl;

    return 0;
}
