#include <iostream>

#include "Man.h"

#include "Woman.h"

using namespace std;

class Marry
{
public:
    static void marry(Man* m,Woman* w)
    {
       if(m->married == false && w->married == false)
       {
           m->wife = w;

           w->husband = m;

           m->married = true;

           w->married = false;

           cout << "I now announce " << m->name << " and " << w->name<<" as husband and wife" << endl;
       }

       else
       {
           cout << "You two can't be married" << endl;
       }
    }

};
