#pragma once

#include <iostream>

using namespace std;

class A
{
public:
    A()
    {
        cout << "Lines=" << ++ lineno << "Call A::A()" << endl;
    }   

    virtual ~A()
    {
        cout << "Lines=" << ++ lineno << "Call A::~A() " << endl;
    }

    virtual int Func1() const = 0;

    virtual void Func2(int = 500) = 0;

    
protected:
    static int lineno;
};
