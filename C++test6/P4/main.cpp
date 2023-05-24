#include <iostream>

#include "Box.h"

#include "Fruit.h"

using namespace std;

int main()
{
    Apple apple(30);

    Box box;

    box.addFruit(&apple);

    box.pass_one_day();

    cout << box.getShrinkage() << endl;

    cout << box.getTotalWeight() << endl;

    cout << box.getAppleAmount();
}
