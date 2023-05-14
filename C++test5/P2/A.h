#pragma once

#include <iostream>

using namespace std;

class A
{
public:
    A(int num) :data(num) {}
    void AFuncs() { cout << "This is A \'s public function!" << endl; }
protected:
    int data;
};
class B
{
public:
    B(int num) :value(num) {}
    void BFuncs() { cout << "This is B \'s public function!" << endl; }
protected:
    int value;
};
