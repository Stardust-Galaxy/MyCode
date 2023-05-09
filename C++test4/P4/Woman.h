#pragma once

#include <iostream>

#include "Man.h"

#include <string>

using namespace std;

class Woman
{
    friend class Marry;
    
    friend class Divorce;

public:
    Woman(string w):name(w)
    {
        married = false;
    }

    Woman(string w,Man* m):name(w)
    {
        husband = m;

        married = false;
    }
private:
    bool married;

    Man* husband = nullptr;

    string name;
};
