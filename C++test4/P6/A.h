#pragma once

#include <iostream>


class A
{
public:
    A(int num):mData(num)
    {
        existCount = newCount - deleteCount - 1;
    }
    
    A (const A& rhs)
    {
        existCount = newCount - deleteCount - 1;
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

    void ShowExistingA()
    {
        std::cout << existCount << std::endl;
    }
    
    static void* operator new(size_t);

    static void operator delete(void* , size_t);

private:
    int mData;

    static int newCount; 

    static int deleteCount; 

    int existCount;

};

int A::newCount = 0;
int A::deleteCount = 0;;
