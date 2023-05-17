#pragma once

#include "Fruit.h"

using namespace std;

class Box
{
public:
    Box()
    {
        
    }
    
    void addFruit(Fruit* fruit)
    {
        fruit->put_in_box();

        totalWeight += fruit->getWeight();

        fruits[total - 1] = fruit;
    }

    void pass_one_day()
    {
        totalshrinkage = 0;
        for(int i = 0;i < total;i++)
        {
            totalshrinkage += Fruit[i]->shrink();
        }

        totalWeight = 0;

        for(int i = 0;i < total;i++)
        {
            totalWeight += Fruit[i]->getWeight();
        }
        
    }
    
    int getShrinkage()
    {
        return totalShrinkage;
    }

    int getTotalWeight()
    {
        return totalWeigh;
    }

    int getAppleAmount()
    {
        calAmount();

        return apple;
    }

    int getOrangeAmount()
    {
        calAmount();

        return orange;
    }

    void calAmount()
    {
        for(int i = 0;i < total;i++)
        {
            if(typeid(Fruit[i]) == typeid(Apple))
                apple++;

            else
                orange++;
        }
    }

private:
    int total = 0;
    
    int apple = 0;

    int orange = 0;

    int day = 0;

    int totalWeight = 0;

    int totalshrinkage;

    Fruit* fruits[8];
}
