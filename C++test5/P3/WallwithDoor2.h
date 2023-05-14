#include <iostream>

#include "Wall.h"

#include "Door.h"

#define red 1

#define green 2

using namespace std;

class WallwithDoor2:public Door
{
public:
    
    WallwithDoor2()
    {
        wall = new Wall();
    }

    void Paint(int newColor)
    {
        if(newColor == red)
        {
            Close();
        }

        else if(newColor == green)
        {
            Open();
        }

        wall->Paint(newColor);
    }

private:
    Wall* wall;
};
