#pragma once

#include "monster.h"

using namespace std;

class Dog:public Monster
{
public:
    Dog(int hit,int da,int de,int sp):Monster(hit,da,de,sp)
    {   
        
    }
    virtual  void attack(Monster& enemy)
    {
        int sub = (damage - (enemy.getdefense() + 5)) * 2;

        if(sub < 2)
            sub = 2;
        
        enemy.hurt(sub);
    }
};
