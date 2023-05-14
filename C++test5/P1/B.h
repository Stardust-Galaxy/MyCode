#pragma once

#include <iostream>

#include "A.h"

using namespace std;

class B:public A
{
public:
    B(int num1,int num2):A(num1),data2(num2)
    {
        
    }
    
    B(const B& other):A(other)
    {
        data2 = other.data2;
        cout << "B's copy constructor" << endl;
    }

    B& operator=(const B& other)
    {
        if(this != &other)
        {
            data2 = other.data2;
            A::operator=(other);
        }
        return *this;
    }

    ~B()
    {
        cout << "Destroy B" << endl;
    }

    void f() const
    {
        cout << "Excute B::f()" << endl;
        cout << "Data1 = " << data1 << endl;
        cout << "Data2 = " << data2 << endl;
    }

    void f(int n) const
    {
        cout << "Excute B::f(int)" << endl;

        cout << "n = " << n << endl;

        cout << "Data1 = " << data1 << endl;

        cout << "Data2 = " << data2 << endl;
    }

    void h()
    {
        cout << "Excute B::h()" << endl;
    }

private:
    int data2;
};
