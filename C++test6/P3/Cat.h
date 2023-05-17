#pragma once

#include "monster.h"

using namespace std;

class Cat:public Monster
{
public:
    Cat(int hit,int da,int de,int sp):Monster(hit,da,de,sp)
    {
        
    }

    virtual void attack(Monster& enemy)
    {
        int sub = damage * 2 - enemy.getdefense();

        if(sub < 1)
            sub = 1;

        enemy.hurt(sub);
    }
};
