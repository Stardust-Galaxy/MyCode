#include <iostream>

#include "Wall.h"

#include "Door.h"

#define red 1

#define green 2

using namespace std;

class WallwithDoor3
{
public:
    
    WallwithDoor3()
    {
        wall = new Wall();

        door = new Door();

    }

    void Paint(int newColor)
    {
        if(newColor == red)
            door->Close();

        else if(newColor == green)
            door->Open();

        wall->Paint(newColor);    
    }
    
private:

    Wall* wall;

    Door* door;
};
