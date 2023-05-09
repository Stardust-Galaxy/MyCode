#include <iostream>

#include <math.h>

using namespace std;

#define MAXLEN 30

struct frac
{
  long long numerator;
  
  long long denominator;

};

class confrac
{
public:
  confrac(long double number):num(number)
  {
    
    fraction[0] = (long long)number;

    long double sub = number - fraction[0];

    while(sub != 0 && length <= MAXLEN)
    {
      
      long double current = 1 / sub;
      
      sub = current - (int)current;

      fraction[length++] =  (int)current;
    }
  
  }
    
  long long get_ai(int i)
  {
    return fraction[i - 1];
  }
      
  void print_fraction()
  {
     for(int i = 1;i <= length;i++)
     {
        printf("The first %d item is ",i);

        for(int j = 0;j < i;j++)
        {
            if(j != 0)
                printf("+");
            printf("%lld",fraction[j]);
        }

        cout << endl;

        printf("The corresponding fraction form of the first %d item is:",i);

        frac temp = calcufrac(i);

        printf("%lld/%lld",temp.numerator,temp.denominator);

        cout << endl;

        printf("The value of the fraction is:");

        long double result = (long double)temp.numerator / temp.denominator;

        cout << result << endl;

        long double sub = num - result;

        printf("The gap between the fraction and the number %Lf is: %10e",num,sub);

        cout << endl;
     }
   
  }
  
  frac calcufrac(int pos)
  {
    frac result;
    
    result.numerator = 1;
    
    result.denominator = fraction[pos - 1];

    for(int i = pos - 2;i >= 0;i--)
    {
      
      result.numerator += fraction[i] * result.denominator;

      long long temp = result.numerator;

      result.numerator = result.denominator;
      
      result.denominator = temp;

    }

    long long temp = result.numerator;

    result.numerator = result.denominator;

    result.denominator = temp;

    return result;
  
  }

    
private:
  long long fraction[50];
  
  long double num;

  int length = 1;
};
