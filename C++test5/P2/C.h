#pragma once

#include <iostream>

using namespace std;

class C :public A, private B
{
public:
    C(int num1, int num2, int y);
    void MyFuncs()
    {
        BFuncs();
        cout << "This function call B::BFuncs() !" << endl;
    }
private:
    int yyy;
};
