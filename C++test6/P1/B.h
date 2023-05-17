#pragma once

#include <iostream>

#include "A.h"

using namespace std;

class B: public A
{
public:
    B()
    {
        cout << "Lines=" << ++lineno<<"Call B::B()" << endl;
    }

    ~B()
    {
        cout << "Lines=" << ++lineno << "Call B::~B()" << endl;
    }

    virtual int Func1(int n)const
    {
        return num + n;
    }

    virtual int Func1() const
    {
        cout << "Lines=" << ++lineno << "Call B::Func1() const" << endl;

        return num;
    }

    virtual void Func2(int n = 1000)
    {
        cout << "Lines=" << ++lineno << "Call B::Func2(int )const n = " << n << endl;

        num = n;
    }

    virtual void Func3(int n)
    {
        num = n;
    }
 
protected:
    int num;
};
