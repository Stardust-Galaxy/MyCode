#pragma once

#include  <iostream>

using namespace std; 

class Monster
{
public:
    virtual ~Monster();

    Monster(int hit,int da,int de,int sp):hitpoint(hit),damage(da),defense(de),speed(sp)
    {
        
    }

    virtual attack(Monster& enemy)
    {
        enemy.hitpoint -= (attack - enemy.defense);
    }

    void Fight(Monster& enemy)
    {
        if(speed > enemy.speed)
        {
            while(hitpoint > 0)
            {
                attack(enemy);

                if(enemy.hitpoint <= 0)
                    break;
                
                enemy.attack(*this);

            }
        }
    }
private:
    int hitpoint;

    int damage;

    int defense;

    int speed;
};
