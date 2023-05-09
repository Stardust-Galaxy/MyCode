#include <iostream>
#include <string.h>
using namespace std;


class MyString
{
	public:
		MyString(const char* pData = NULL)
		{
       mpData = new char[strlen(pData)];
       strcpy(mpData,pData);
		}
		
		MyString(const MyString &);
		
		~MyString();
		
		MyString& operator = (const MyString&);
		
		MyString& operator += (const MyString &);
		
		operator char*() const;

	private:
		 char* mpData;
};
