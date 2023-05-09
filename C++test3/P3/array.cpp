#include <iostream>

using namespace std;

void f(int n,int m)
{
   int** array = new int*[n];
   
   for(int i = 0;i < m;i++)
   {
      array[i] = new int[m];
   }
    
   int num = 1; 

   for(int i = 0;i < n;i++)
   {
      for(int j = 0;j < m;j++)
      {
          array[i][j] = num++; 
      }
   }

   for(int i = 0;i < n;i++)
   {
      printf("The sum of %d row is:",i + 1);
      
      int sum = 0;

      for(int j = 0;j < m;j++)
      {
          sum += array[i][j];  
      }

      printf("%d\n",sum);
   }

   for(int i = 0;i < m;i++)
   {
      int sum = 0;

      printf("The sum of %d column is:",i + 1);

      for(int j = 0;j < n;j++)
      {
          sum += array[j][i];
      }
      
      cout << sum << endl;

   }

   for(int i = 0;i < m;i++)
   {
      delete[] array[i]; 
   }
    
   delete array; 
}

int main()
{
   int n,m;
   cin >> n >> m;
   f(n,m);
}
