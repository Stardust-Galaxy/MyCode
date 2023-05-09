#include <iostream>
using namespace std;
class Demo
{
public:
	static Demo* createDemo()
	{
		static Demo* Obj = nullptr;
		if(Obj == nullptr)
		{
			Obj = new Demo;
		}
		return Obj;
	}	

	void AddValue(int Value)
	{
		mNum += Value;
	}

	void ShowValue() const
	{
		cout << "Value=" << mNum << endl;
	}

private:
	Demo()
	{
		mNum = 0;
	}
	int mNum;
};
