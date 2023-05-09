#include <iostream>

using namespace std;

class A
{
public:

    A(int n):data(n)
    {

    }

    int Data() const
    {
      return data;
    }

private:
    int data;
};
