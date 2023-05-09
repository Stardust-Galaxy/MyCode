#include <stdio.h>

int array[10];

int main()
{
    for(int i = 0;i < 10;i++)
    {
        scanf("%d",&array[i]);
    }

    int max = array[0];

    for(int i = 0;i < 10;i++)
    {
        if(array[i] > max)
        {
            max = array[i];
        }
    }

    printf("%d",max);
}
