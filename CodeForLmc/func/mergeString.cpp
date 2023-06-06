#include <stdio.h>

#include <string.h>

void join(char* a,char* b,int length)
{   
    if(length > strlen(b)) 
        length = strlen(b);

    int pos = strlen(a);
    for(int i = 0;i < length;i++)
    {
        a[pos++] = b[i];
    }
}

int main()
{
    char a[66] = "i love";
    char b[] = " study very much cai guai";

    join(a,b,6);
    for(int i = 0;i < strlen(a);i++)
    {
        printf("%c",a[i]);
    }
}
