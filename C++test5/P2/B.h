#pragma once

#include <iostream>

using namespace std;

class B
{
public:
    B(int num) :value(num) {
        cout << "B::constructor()" << endl;
    }
    void BFuncs() { cout << "This is B \'s public function!" << endl; }

    ~B()
    {
        cout << "B's destruction" << endl;
    }
protected:
    int value;
};
