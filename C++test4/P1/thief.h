#pragma once

#include <iostream>

using namespace std;

#include "walker.h"

class Thief
{   
public:
    Thief(int m,int n):money(m),power(n)
    {   
        
    }

    void steal(Walker& victim)
    {
        victim.losemoney(power);

        money += power;
    }

    void display()
    {   
        cout << money;
    }
private:
    int money;

    int power;

};
