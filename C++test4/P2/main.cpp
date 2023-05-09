#include <iostream>

#include "PD.h"

#include "cop.h"

#include "thief.h"

using namespace std;

void PD:: add_reputation()
{
    reputation++;
}


void cop::catch_thief(Thief& t)
{
    t.caught();

    mydp->add_reputation();
    
    money += 100;
}
int main()
{
    PD NCPD(100);

    cop p1(&NCPD);

    cop p2(&NCPD);

    cop p3(&NCPD);

    Thief t1(500,100);

    Thief t2(800,100);

    Thief t3(300,100);

    Thief t4(1000,100);

    p1.catch_thief(t2);

    p1.catch_thief(t3);

    p2.catch_thief(t4);

    p1.display();

    p2.display();

    p3.display();

    NCPD.display();

    t2.display();
    
    t1.display();
}
