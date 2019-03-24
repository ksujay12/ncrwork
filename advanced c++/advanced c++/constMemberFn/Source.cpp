#include<iostream>
using namespace std;
class _Demo
{
	mutable int ele1;
	int ele2;
public:
	_Demo()
	{
		ele1 = 0;ele2= 0;
	}
	void SetEle() const
	{
		ele1 = 12;
		//ele2 = 15;
	}
	void Display()
	{
		cout << "ele1=" << ele1 << endl << "ele2=" << ele2;

	}

};
int main()
{
	_Demo obj;
	obj.SetEle();
	obj.Display();
	cout << "Done";
	system("pause");
	return 0;
}