#include <stdio.h>

#include <climits>

int array[10];

int main()
{
    for(int i = 0;i < 10;i++)
    {
        scanf("%d",&array[i]);
    }

    int max = INT_MIN;

    for(int i = 0;i < 10;i++)
    {
        if(array[i] > max)
        {
            max = array[i];
        }
    }

    printf("%d",max);
}
