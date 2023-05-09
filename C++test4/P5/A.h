#pragma once

#include <iostream>

class A
{
public:
    A(int num):mData(num)
    {

    }

    ~A(){}

    int GetData() const
    {
        return mData;
    }
    
    void SetData(int data)
    {
        mData = data;
    }
private:
    int mData;
};
