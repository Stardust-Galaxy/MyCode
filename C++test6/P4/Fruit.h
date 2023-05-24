#pragma once

using namespace std;

class Fruit
{
public:
    Fruit(int w,int s):weight(w),shrinkage(s),originalweight(w)
    {
        
    }

    virtual Fruit* getType()
    {
        return this;
    }
    
    void put_in_box()
    {
        inbox = true;
    }

    int shrink()
    {
        if(weight > originalweight * 3 / 5)
            weight -= shrinkage;

        return shrinkage;
    }

    int getWeight() const
    {
        return weight;
    }
    
    

private:
    int weight;

    int originalweight;

    bool inbox = false;

    int shrinkage;
};
