#include <iostream>

using namespace std;

#include "thief.h"

#include "walker.h"

int main()
{
    Thief thief(20,10);

    Walker walker(10);

    thief.steal(walker);

    thief.display();

    walker.display();


}
