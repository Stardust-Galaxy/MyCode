#pragma once

#include <iostream>

#include "A.h"

class B
{
public:
    B(int num = 0):pa(new A(num))
    {
        puse = new int(1);
    }
    
    ~B()
    {
        ReleaseRef();
    }

    B(const B& rhs)
    {
        pa = rhs.pa;
        
        puse = rhs.puse;

        AddRef();

    }

    B& operator=(const B& rhs)
    {
        if(this != &rhs)
        {
            ReleaseRef();

            pa = rhs.pa;

            puse = rhs.puse;

            AddRef();
        }
        return *this;
    }

    A* operator->() const
    {
        return pa;
    }

    int GetData() const
    {
        return pa->GetData();
    }

    void SetData(int data)
    {
        if(*puse == 1)
            pa->SetData(data);
        else
        {
            std::cout << "I'm changing target!" << std::endl;

            ReleaseRef();

            puse = new int(1);

            pa = new A(*pa);

            pa->SetData(data);
        }
    }

    void AddRef()
    {
        ++(*puse);
    }

    void ReleaseRef()
    {
        if(--(*puse) == 0)
        {
            delete pa;

            delete puse;
        }
    }
private:
    A* pa;
    
    int* puse;
};
