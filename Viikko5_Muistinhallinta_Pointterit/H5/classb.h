#ifndef CLASSB_H
#define CLASSB_H
#include <iostream>
using namespace std;

class ClassB // class B that is used in association and aggregation 
{
private:
    string info;

public:
    ClassB();
    string getInfo() const;
    void setInfo(const string &newInfo);
};

#endif // CLASSB_H
