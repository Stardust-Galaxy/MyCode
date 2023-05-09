#include <iostream>
class Hero
{
public:
	Hero(int attraction,int fame,int attack,int defense,int magic):Attraction(attraction),Fame(fame),Attack(attack),Defense(defense),Magic(magic)
	{

	}
	
	int getAttraction()
	{
		return Attraction;
	}

	int getFame()
	{
		return Fame;
	}

	int getAttack()
	{
		return Attack;
	}

	int getDefense()
	{
		return Defense;
	}

	int getMagic()
	{
		return Magic;
	}
	
	void Equip_Magic_Items(int n)
	{
		Magic_Items[n - 1] = true;
	}

	void Drop_Magic_Items(int n)
	{
		Magic_Items[n - 1] = false;
	}


private:
	int Attraction;
	int Fame;
	int Attack;
	int Defense;
	int Magic;
	bool Magic_Items[6];
};
