#pragma once

#include <iostream>

using namespace std;

class A
{
public:
    A(int num):data1(num)
    {
        
    }

    ~A()
    {
        cout <<"Destroy A" << endl;
    }

    void f() const
    {
        cout << "Excute A::f()" << endl;

        cout << "Data1 = " << data1 << endl;
    }

    void g()
    {
        cout <<"Excute A::g()" <<endl;
    }
protected:
    int data1;
};
