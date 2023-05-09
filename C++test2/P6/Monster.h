#include <iostream>
using namespace std;
class Monster
{
public:
	Monster(int speed,int hitpoint,int damage,int defense):Speed(speed),Hitpoint(hitpoint),Damage(damage),Defense(defense)
	{
		
	}
	
	int getSpeed()
	{
		return Speed;
	}

	int getHitpoint()
	{
		return Hitpoint;
	}

	int getDamage()
	{
		return Damage;
	}

	int getDefense()
	{
		return Defense;
	}

	void Fight(Monster& other)
	{
		if(if_the_first(other) == true)
			this->fight(other);
		else
			other.fight(*this);
	}

	void fight(Monster& other)
	{
		while(Hitpoint > 0 && other.Hitpoint > 0)
			{
			int real_damage = 2 * Damage - other.Defense;
			if(real_damage < 1)
				real_damage = 1;
			other.Hitpoint -= real_damage;
			if(other.Hitpoint > 0)
			{
				real_damage = 2 * other.Damage - Defense;
				Hitpoint -= real_damage;
			}
		}
		if(Hitpoint < 0)
			cout << "Monster 2 win!"<<endl;
		else
			cout << "Monster 1 win!"<<endl;
	}

	bool if_the_first(Monster& other)
	{
		srand((unsigned)time(0));

		int x = rand() % 2;

		if(Speed > other.Speed)
			return true;
		else if(Speed < other.Speed)
			return false;
		
		if(Hitpoint > other.Hitpoint)
			return true;
		else if(Hitpoint < other.Hitpoint)
			return false;
		
		if(Damage > other.Damage)
			return true;
		else if(Damage < other.Damage)
			return false;
		
		if(Defense > other.Defense)
			return true;
		else if(Defense < other.Defense)
			return false;
		cout << x <<endl;

		if(x == 1)
			return true;
		return false;
	}

private:
	int Speed;
	int Hitpoint;
	int Damage;
	int Defense;
};
