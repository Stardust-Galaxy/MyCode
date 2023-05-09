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
        cout << money << endl;
    }

    void caught()
    {
        money = 0;

        power = 0;
    }
private:
    int money;

    int power;

};
