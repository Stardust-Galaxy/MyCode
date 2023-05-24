#include <iostream>

#include "Fruit.h"

using namespace std;

class Orange:public Fruit
{
public:
    Orange(int m,int s = 3):Fruit(m,s)
    {
        
    }

    virtual Orange* getType()
    {
        return this;
    }
};
