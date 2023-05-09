#include <iostream>
#include <cmath>
using namespace std;
int row,column,gap;
int uniquepos[2];
int** input()
{
   cin >> column >> row >> gap;
   int** map = new int*[row];
   
   for(int i = 0;i < row;i++)
   {
      map[i] = new int[column];
   }
   for(int i = 0;i < row ;i++)
   {
      for(int j = 0;j < column;j++)
      {
          cin >> map[i][j];
      }
   
   }
   return map;
}

bool  check_if_less_than_TOL(int** map,int r,int c)
{
   bool flag = true;
   for(int i = -1;i <= 1;i++)   
    {
        for(int j = -1;j <= 1;j++) 
        {
               if(i != 0 && j != 0)
                  if(map[r][c] - map[r + i][c + j] <= gap)
                  {
                      flag = false;
                  }  
        }
    }
    return flag;
}

int find_unique(int** array)
{
    int count_ = 0;
    for(int i = 1;i < row - 1;i++)
    {
        for(int j = 1;j < column - 1;j++)
        {
            if(check_if_less_than_TOL(array,i,j))
            {
              if(count_ == 1)
                  return 2;
                count_++;
                uniquepos[0] = i + 1;
                uniquepos[1] = j + 1;
            }  
        }
    }
    return count_;
}

int main()
{
    int** array = input();
    int count_ = find_unique(array);
    if(count_ == 1)
    {
        printf("(%d, %d): %d",uniquepos[0],uniquepos[1],array[uniquepos[0] - 1][uniquepos[1] - 1]);
    }
    else if(count_ == 2)
        cout << "Not Unique";
    else
        cout << "Not Exits";
}
