#include <iostream>

#include "Man.h"

#include "Woman.h"

using namespace std;

class Divorce
{
public:
    static void divorce(Man* m,Woman* w)
    {
        if(m->wife == w && w->husband == m)
        {
            m->married = false;

            w->married = false;

            m->wife = nullptr;

            w->husband = nullptr;

            cout << "I now announce you two as independent individuals" << endl;
        }
        else
        {
            cout << "You two aren't even married, how can you get divorced!" << endl;
        }

    }
};
    

