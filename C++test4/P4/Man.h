#pragma once

#include <iostream>

#include <string>

using namespace std;

class Woman;

class Man
{
    friend class Marry;
    
    friend class Divorce;

public:
    Man(string m):name(m)
    {
        married = false;
    }

    Man(string m,Woman* w):name(m)
    {
        wife = w;

        married = true;
    }

       



private:
    Woman* wife = nullptr;
    
    string name;

    bool married;
};
