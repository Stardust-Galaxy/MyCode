#pragma once

#include <iostream>

#include "PD.h"

#include "thief.h"

using namespace std;

class cop
{
public:
    cop(PD* my):mydp(my)
    {
        
    }

    void catch_thief(Thief& t);

    void display()
    {
        cout << money << endl;
    }

private:
    int money = 0;
    
    PD* mydp;
};
