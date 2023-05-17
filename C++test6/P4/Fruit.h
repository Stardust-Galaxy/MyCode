#pragma once

using namespace std;

class Fruit
{
public:
    Fruit(int w,int s):weight(w),shrinkage(s)
    {
        
    }

    void put_in_box()
    {
        inbox = true;
    }

    int shrink()
    {
        weight -= shrinkage;

        return shrinkage;
    }

    int getWeight() const
    {
        return weight;
    }
    
    

private:
    int weight;

    bool inbox = false;

    int shrinkage;
};
