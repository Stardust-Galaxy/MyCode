#include <iostream>

#include <cstring>

using namespace std;

char password[30];

char usr_input[10][30];

int maxtime;

int length = 0;

void input()
{
    char ch = getchar();

    while(ch != ' ')
    {
        password[length++] = ch;

        ch = getchar();
    }

    cin >> maxtime;

    ch = getchar();
}

void check_usr_input()
{
    bool flag = false;
    
    int pos = 0;
    
    int length_ = 0;
    
    char ch;

    while(true)
    {
        length_ = 0;
        
        ch = getchar();

        if(ch == '#')
            break;

        while(ch != '\n')
        {
            usr_input[pos][length_++] = ch;

            ch = getchar();
        }
       
        usr_input[pos][length_] = '\0';

        pos++;    
    }

    for(int i = 0;i < maxtime;i++)
    {
        if(strcmp(usr_input[i],password) == 0)
        {
            flag = true;

            break;
        }
        else
        {
            cout << "Wrong password: ";

            for(int j = 0;j < strlen(usr_input[i]);j++)
            {
                cout << usr_input[i][j];
            }

            cout << endl;
        }
    }

    if(flag == true)
        cout << "Welcome in";
    else
        cout << "Accout locked";
}

int main()
{
    input();
    
    check_usr_input();
}
