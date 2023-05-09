#pragma once

#include <iostream>

using namespace std;

class PD
{
public:
    PD(int n = 100):reputation(n)
    {

    }
    
    void add_reputation();
    
    void display()
    {
        cout << reputation << endl;
    }
private:
    int reputation;
};
