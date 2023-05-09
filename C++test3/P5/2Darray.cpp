#include <iostream>

#include "2Darray.h"

using namespace std;

int main()
{
    TDarray arr(3,4);

    arr[0][0] = 1;
    
    cout << arr[0][0];
}
