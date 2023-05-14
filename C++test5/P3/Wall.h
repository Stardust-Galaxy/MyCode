#pragma once

#include <iostream>

using namespace std;

class Wall
{
public:
    Wall() :color(0) { cout << "构造一面墙" << endl; }
    void Paint(int newColor) {
        color = newColor;
        cout << "用新颜色粉刷墙" << endl;
    }
    int GetColor() const { return color; }
private:
    int  color;
};
