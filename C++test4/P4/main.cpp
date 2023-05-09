#include <iostream>

#include "Man.h"

#include "Woman.h"

#include "Marry.h"

#include "Divorce.h"

using namespace std;

int main()
{
    Man m1("Ross");
    
    Woman w1("Rachel");
    
    Marry::marry(&m1,&w1);
}
