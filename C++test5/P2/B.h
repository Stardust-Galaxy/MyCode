#pragma once

#include <iostream>

using namespace std;

class B
{
public:
    B(int num) :value(num) {}
    void BFuncs() { cout << "This is B \'s public function!" << endl; }
protected:
    int value;
};
