#include <iostream>
#include "random.h"
using namespace std;
/*void Coder(unsigned char  data[],int len,unsigned long key)
{
	TRandom randomnumber(key);
	int* keyarray = new int[len];
	for(int i = 0;i < len;i++)
	{
		keyarray[i] = randomnumber.Integer(0,1);
	}
	for(int i = 0;i < len;i++)
	{
		if(keyarray[i] == 0 && data[i] != '0' || keyarray[i] == 0 && data[i] == '1')
		{
			data[i] = '1';
		}
		else
			data[i] = '0';
	}
}*/

void Coder(unsigned char data[],int len,TRandom& rand,unsigned long key)
{
	rand.Seed(key);
	int* keyarray = new int[len];
	for(int i = 0;i < len;i++)
	{
		keyarray[i] = rand.Integer(0,1);
	}
	for(int i = 0;i < len;i++)
	{
		if(keyarray[i] == 0 && data[i] == '1' || keyarray[i] == 1 && data[i] == '0')
		{
			data[i] = '1';
		}
		else 
			data[i] = '0';
	}
}
int main()
{
	TRandom randomnumber;
	unsigned char data[10] = {'1','1','0','1','0','1','0','1','0','0'};
	Coder(data,10,randomnumber,4567);
	Coder(data,10,randomnumber,4567);
	for(int i = 0;i < 10;i++)
	{
		printf("%c",data[i]);
	}
	cout << endl;
}

