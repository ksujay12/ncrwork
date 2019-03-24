#include<iostream>
using namespace std;
class operations
{
public:
	virtual int operator()(int x, int y) = 0;
};
class Add:public operations
{
	int x, y;
public:
	Add()
	{}
	Add(int x, int y)
	{
		this->x = x;
		this->y=y;
	}
	
	int operator()(int a, int b)
	{
		return (a+ b);
	}
	
};
class Mull :public operations
{
	int x, y;
public:
	Mull()
	{}
	Mull(int x, int y)
	{
		this->x = x;
		this->y = y;
	}

	int operator()(int a, int b)
	{
		return (a * b);
	}

};

class _Func
{
	int a;
	int b;
public:
	_Func()
	{
		a = 0;
		b = 0;
	}
	int operator()(int a, int b, int(*ptr)(int x, int y))
	{
		return ptr(a, b);
	}
};

int operat(int a, int b, operations *obj)
{
	return (*obj)(a, b);
}

int add(int x, int y)
{
	return x + y;
}
int mul(int x, int y)
{
	return x*y;
}
int main()
{
	int a = 10, b =- 1;
	_Func obj;
	Add obj1;
	Mull obj2;
	cout << operat(1, 2, &obj1) << endl << operat(2, 2, &obj2) << endl;
	cout<<obj(a, b, mul)<<endl;
	system("pause");
}