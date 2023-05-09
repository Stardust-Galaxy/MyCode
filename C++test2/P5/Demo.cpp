#include <iostream>
#include "Demo.h"
using namespace std;
int main()
{
	Demo* item = Demo::createDemo();
	item->AddValue(5);
	item->ShowValue();
	Demo* newitem = Demo::createDemo();
	newitem->ShowValue();
}
