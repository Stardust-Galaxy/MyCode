#include <iostream>
using namespace std;

enum suit
{
	Spade = 1,Heart,Diamond,Club
};

enum _rank_
{
	Ace = 1,r1,r2,r3,r4,r5,r6,r7,r8,r9,r10,Jack,Queen,King
};

typedef struct p 
{
	int x;
	int y;
}position;

class Card
{
public:
	Card(suit n,_rank_ m,int id):Suit(n),Rank(m),ID(id)
	{

	}

	void setBackImageID(int id)
	{
		BackImageID = id;
	}

	int getBackImageID()
	{
		return BackImageID;
	}

	suit getSuit()
	{
		return Suit;
	}
	
	_rank_ getRank()
	{
		return Rank;
	}

	bool if_the_same_suit(Card& other)
	{
		if(other.getSuit() == Suit)
			return true;
		return false;
	}
		
	bool if_the_same_rank(Card& other)
	{
		if(other.getRank() == Rank)
			return true;
		return false;
	}

	bool if_the_suit(suit SUIT)
	{
		if(Suit == SUIT)
			return true;
		return false;
	}

	bool if_the_rank(_rank_ RANK)
	{
		if(Rank == RANK)
			return true;
		return false;
	}

	void setleftuppos(int x,int y)
	{
		LeftUpPos.x = x;
		LeftUpPos.y = y;
	}

	position getRightDownPos()
	{
		position RightDownPos;
		RightDownPos.x = LeftUpPos.x + Width;
		RightDownPos.y = LeftUpPos.y + Height;
		return RightDownPos;
	}

	explicit Card(const  Card& other)
	{
		Suit = other.Suit;
		Rank = other.Rank;
		ID = other.ID;
		BackImageID = other.BackImageID;
		Width = other.Width;
		Height = other.Height;
		LeftUpPos = other.LeftUpPos;
	}


private:
	suit Suit;
	_rank_ Rank;
	int ID;
	int BackImageID;
	int Width;
	int Height;
	position LeftUpPos;
};
