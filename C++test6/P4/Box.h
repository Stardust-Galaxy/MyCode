#pragma once

#include "Fruit.h"

#include "Apple.h"

#include "Orange.h"

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

        fruits[total++] = fruit;
    }

    void pass_one_day()
    {
        totalshrinkage = 0;
        for(int i = 0;i < total;i++)
        {
            totalshrinkage += fruits[i]->shrink();
        }

        totalWeight = 0;

        for(int i = 0;i < total;i++)
        {
            totalWeight += fruits[i]->getWeight();
        }

        day += 1;
        
    }
    
    int getShrinkage()
    {
        return totalshrinkage;
    }

    int getTotalWeight()
    {
        return totalWeight;
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
        apple = orange = 0;
        
        for(int i = 0;i < total;i++)
        {
            if(typeid(*(fruits[i]->getType())) == typeid(Apple))
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
};
