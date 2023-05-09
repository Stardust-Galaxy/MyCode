#include <iostream>

#include "A.h"


void* A::operator new(size_t size)
{
    char* p = new char[size + sizeof(int)];

    *(int *)(p + size) = newCount - deleteCount;

    ++newCount;

    std::cout << "I am born!"<< std::endl;

    return p;
}

void A::operator delete(void* p,size_t size)
{
    ++deleteCount;

    std::cout << "I am gone!"<< std::endl;

    delete[] (char*)p;
}


int main()
{
    A* a = new A(1);
    
    a->ShowExistingA();

    std::cout << a->GetData() << std::endl;

    a->ShowExistingA();

    delete a;


}
