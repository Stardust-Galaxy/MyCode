#pragma once

#include <iostream>

using namespace std;

class C : private B
{
public:
    C(A* a, int num2, int y):pA(a),B(num2),yyy(y)
    {
        
    }

    C (const C& c):B(c)
    {
        pA = new A(*c.pA);

        cout << "C's copy constructor" << endl;
    }

    C& operator=(const C& c)
    {
        if(this == &c)
            return *this;
        else
        {
            delete pA;

            pA = new A(*c.pA);

            return *this;
        }
    }

    ~C()
    {
        cout << "C's destruction" << endl;
        
        delete pA;
    }


    void MyFuncs()
    {
        BFuncs();
        cout << "This function call B::BFuncs() !" << endl;
    }
public:
    A* pA;

    int yyy;
};
