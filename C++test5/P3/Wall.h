#pragma once

#include <iostream>

using namespace std;

class Wall
{
public:
    Wall() :color(0) { cout << "����һ��ǽ" << endl; }
    void Paint(int newColor) {
        color = newColor;
        cout << "������ɫ��ˢǽ" << endl;
    }
    int GetColor() const { return color; }
private:
    int  color;
};
