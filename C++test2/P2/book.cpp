#include <iostream>
#include "book.h"
using namespace std;
int main()
{
	Book book(100);
	book.read(40);
	cout << book.get_read_pages()<<endl;
	cout << book.get_left_pages()<<endl;
}
