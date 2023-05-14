#include <iostream>

#include "A.h"

#include "B.h"

#include "C.h"

using namespace std;

int main()
{
   A a(1);

   C c(&a,2,3);

   C c1(c);
    
   cout << c1.pA << endl;

   cout << c.pA <<endl;


}
