#include <iostream>

#include "A.h"

using namespace std;

void g(int n)
{
    A** array = new A*[n];

    for(int i = 0;i < n;i++)
    {
        array[i] = new A(i + 1);
    }

    for(int i = 0;i < n;i++)
    {
        cout << array[i]->Data();
    }

    for(int i = 0;i < n;i++)
    {
        delete array[i];
    }

    delete array;
}

int main()
{
    int n;
    cin >> n;
    g(n);
}
