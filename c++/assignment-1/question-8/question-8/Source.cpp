#include<iostream>
using namespace std;
class employee
{
public:
	int x;
	int y;
public:
	employee()
	{
		cout << "default" << endl;
	}
	employee(int a,int b)
	{
		cout << "parameterized" << endl;
		x = a;
		y = b;
	}
	employee(employee &f)
	{
		cout << "copy" << endl;
		x = f.x;
		y = f.y;
	}
	void val(int p,int q)
	{
		int temp;
		temp = p;
		p = q;
		q = temp;
	}
	void ref(int *p, int *q)
	{
		int temp;
		temp = *p;
		*p = *q;
		*q = temp;
	}
	~employee()
	{
		cout << "destructor" << endl;
		system("pause");
	}

};
int main()
{
	employee e;
	employee e1, e2(2, 3), e3(e2);
	int a = 2, b = 3;
	e1.val(a,b);
	cout << a << endl;
	cout << b << endl;
	e2.ref(&e2.x, &e2.y);
	cout << e2.x << endl;
	cout << e2.y << endl;
	cout << e3.x << endl;
	cout << e3.y << endl;
	cout << sizeof(e1);
	system("pause");
	return 0;

}