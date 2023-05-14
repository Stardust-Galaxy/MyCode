#include <iostream>

#include "B.h"

int main()
{
    A a(1);

    A* p = new B(1,2);
    
    p->f();

    B* q = new B(1,2);

    q->f();

    q->f(1);

    p->g();

    delete p;
    
    //B b(1,2);

    //a.f();

    //b.f();

    //a.g();

    //b.g();

    //b.f(1);

    //b.h();
}
