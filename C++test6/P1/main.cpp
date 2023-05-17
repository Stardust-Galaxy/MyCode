#include <iostream>

#include "B.h"

#include "A.h"

using namespace std;

int A::lineno = 0;

int main()
{
    A* p = new B;

    p->Func2(50);

    p->Func2();

    p->Func1();

    p->Func3(100);

    //p->Func1(100);

    delete p;


}
