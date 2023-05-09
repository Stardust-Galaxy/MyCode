#include <iostream>

#include "A.h"

#include "B.h"

using namespace std;

int main()
{
    B b(5);
    
    cout << b.GetData() << endl;
    
    b.SetData(4);
    
    cout << b.GetData() << endl;
    
    B a = B(b);

    cout << "a: " << a.GetData() << endl;

    a.SetData(3);
    
    cout << a->GetData() << endl;
}


