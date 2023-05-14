#pragma once

#include <iostream>

using namespace std;

class Wall
{
public:
    Wall() :color(0) { cout << "Construct a wall." << endl; }
    void Paint(int newColor) {
        color = newColor;
        cout << "Use newcolor to paint the wall." << endl;
    }
    int GetColor() const { return color; }
private:
    int  color;
};
