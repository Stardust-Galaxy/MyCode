#include <iostream>
#include <string.h>
#include "MyString.h"

using namespace std;

MyString::MyString(const MyString& other)
{
	mpData = new char[strlen(other.mpData)];
  for(int i = 0;i < strlen(other.mpData);i++)
	{
		mpData[i] = other.mpData[i];
	}
}

MyString::~MyString()
{
	delete[] mpData;
}

MyString& MyString:: operator = (const MyString& other)
{
	
	if(this != &other)
	{	
		delete this->mpData;
		this->mpData = new char[strlen(other.mpData)];
		for(int i = 0;i < strlen(other.mpData);i++)
		{
			this->mpData[i] = other.mpData[i];
		}
		return *this;
	}
	else
		return *this;
}

MyString& MyString::operator += (const MyString& other)  
{
	int length = strlen(this->mpData) + strlen(other.mpData);
	char* temp = new char[length];
	for(int i = 0;i < strlen(this->mpData);i++)
	{
		temp[i] = this->mpData[i];
	}
	for(int i = 0;i < strlen(other.mpData);i++)
	{
		temp[strlen(this->mpData) + i] = other.mpData[i];
	}
  delete[] this->mpData;
	this->mpData = temp;
	return *this;
}

MyString::operator char*() const
{
	return this->mpData;
}

const MyString operator +(const MyString& str1,const MyString& str2)
{
	char* Str;
	Str = new char[strlen(str1) + strlen(str2)];
	for(int i = 0;i < strlen(str1);i++)
	{
		Str[i] = str1[i];
	}

	for(int i = 0;i < strlen(str2);i++)
	{
		Str[strlen(str1) + i] = str2[i];
	}
	MyString str(Str);
	return str;	
}

ostream& operator << (ostream& os,const MyString& str)
{
	for(int i = 0;i < strlen(str);i++)
	{
		cout << str[i]<<" ";
	}
	return cout;
}

int main()
{
	char str1[8] = {'y','e','s'};
  char str2[8] = {'m','a','d','a','m'};
  MyString str11(str1);
  MyString str22(str2);
  MyString newstr = str11 + str22;
  cout << newstr << endl;
  str11 += str22;
  cout << str11 << endl;
  str11 = str22;
  cout << str11 << endl;
}
