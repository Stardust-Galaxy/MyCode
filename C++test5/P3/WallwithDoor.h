#include <iostream>

#include "Wall.h"

#include "Door.h"

#define red 1

#define green 2

using namespace std;

class WallwithDoor:public Wall,public Door
{
public:
    WallwithDoor()
    {
        
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

        Wall::Paint(newColor);

    }




};
