#include <iostream>

using namespace std;

class TDarray
{
public:
    TDarray(int m,int n):row(m),column(n)
    {
        array = new int*[row];

        for(int i =0;i < column;i++)
        {
            array[i] = new int[column];
        }
    }

    int* operator [](int i)
    {
        return array[i];
    }


private:
    int** array;
    
    int row;

    int column;

};
