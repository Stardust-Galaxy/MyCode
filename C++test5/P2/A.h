#pragma once

#include <iostream>

using namespace std;

class A
{
public:
    A(int num) :data(num) {}
    void AFuncs() { cout << "This is A \'s public function!" << endl; }

    ~A()
    {
        cout << "A's destruction" << endl;
    }
protected:
    int data;
};
