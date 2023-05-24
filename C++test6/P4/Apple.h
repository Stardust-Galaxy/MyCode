#include <iostream>

#include "Fruit.h"

using namespace std;

class Apple:public Fruit
{
public:
    Apple(int m,int s = 4):Fruit(m,s)
    {
        
    } 

    virtual Apple* getType()
    {
        return this;
    }
};
