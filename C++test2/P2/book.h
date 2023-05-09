#include <iostream>
using namespace std;
class Book
{
public:
	Book(int n):total_pages(n)
	{
		read_pages = 0;
		left_pages = n;	
	}

	int get_pages() const
	{
		return total_pages;
	}

	int get_read_pages() const
	{
		return read_pages;
	}

	int get_left_pages() const
	{
		return left_pages;
	}

	void read(int n)
	{
		read_pages += n;
		left_pages -= n;
	}

private:
	int total_pages;
	int read_pages = 0;
	int left_pages;

};
