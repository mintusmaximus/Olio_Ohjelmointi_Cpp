#include "aggregationa.h"
#include "associationa.h"
#include "classb.h"

#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int b = 10;
    cout << "A:n arvo on " << a << " ja osoite on " << &a << endl;
    cout << "b:n arvo on " << b << " ja osoite on " << &b << endl << endl;

    int* myPointer = &a;
    cout << "Pointterin osoittama osoite: " << myPointer << endl;
    cout << "Pointterin osoittaman muistipaikan arvo : " << *myPointer << endl << endl;;

    myPointer = &b;
    cout << "Pointterin osoittama osoite: " << myPointer << endl;
    cout << "Pointterin osoittaman muistipaikan arvo : " << *myPointer << endl << endl;;


    int &refA = a;
    cout << "refA osoittaa osoitteeseen: " << &refA << endl;
    cout << "refA:n osoittaman muistipaikan arvo on: " << refA << endl;

    cout << "\n\n**********************************************" << endl << endl;


    ClassB objB; // objB object of class B to be used in association and aggregation
    objB.setInfo("Olion B asettama info"); // set info for objB object 

    AssosiationA objAssociation(objB); // objAssociation uses objB object 
    objAssociation.setBinfo("Olion objAssociation asettama info");

    cout<<"Assosiaatio esimerkki:"<<endl;
    cout<<"objB: "<<objB.getInfo()<<endl; // get info from objB object
    cout<<"objAssociation: "<<objAssociation.getBinfo()<<endl; // get info from objAssociation object (uses objB object, calls objB.getInfo())


    cout << "\n\n**********************************************" << endl << endl;


    cout<<"Aggregaatio esimerkki:"<<endl;
    
    ClassB &refB=objB; // reference to objB object 
    AggregationA objAggr(refB); // objAggr has a reference to objB object 

    objAggr.setBinfo("Olion Agr asettama info");
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAggr "<<objAggr.getBinfo()<<endl; // get info from objAggr object (has a reference to objB object, calls objB.getInfo())

    cout<<endl;

    return 0;
}
