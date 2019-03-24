#include<iostream>
using namespace std;
class _MyClass_new;
class _MyClass
{
	const int numA;
	const int numB;

public:
	_MyClass(int x,int y):numA(x),numB(y)
	{
		/*numA = 10;
		numB = 12;*/
	}
	void display()
	{
		cout << endl << "In MyClass value of numA = " << numA << "  numB = " << numB;
	}

};
class _MyClass_new
{
	int A, B;
public:
	_MyClass obj;
	_MyClass_new(int x, int y) :obj(x, y)
	{
		A = x;
		B = y;
	}
	void display()
	{
		cout << endl << "In New MyClass value of numA = " << A << "  numB = " << B<<endl;
		obj.display();
	}
};
int main()
{
	_MyClass_new obj1(25,30);
	obj1.display();
	//_MyClass obj2()
	system("pause");
	return 0;

}