#include <iostream>

#include "confrac.h"

using namespace std;

int main()
{
  double number;
  
  cin >> number;
  
  confrac fraction(number);
  
  fraction.print_fraction();
}
