#include<iostream>
using namespace std;
class complex
{
public:
	float real;
	float img;
public:
	complex()
	{
		//cout << "default" << endl;
	}
	complex(float r)
	{
		//cout << "one" << endl;
		real = img = r;
	}
	complex(float r, float i)
	{
		//cout << "two" << endl;
		real = r;
		img = i;
	}
	complex(const complex &x)
	{
		real = x.real;
		img = x.img;
	}
	~complex()
	{
		//cout << "destructor";
		//system("pause");
	}
	complex operator=(complex s2)
	{
		real = s2.real;
		img = s2.img;
		return *this;
	}
	complex *operator->()
	{
		return this;
	}
	friend complex operator+(complex x,complex x1);
	friend complex operator-(complex x,complex x1);
	friend complex operator-(complex x);
	friend complex operator++(complex &x);
	friend complex operator++(complex &x,int n);
	friend complex operator,(complex x,complex y);
	friend ostream & operator << (ostream &cout, const complex &s);
	friend istream & operator >> (istream &cin, complex &s);

};
complex operator+(complex s,complex s1)
{
	complex temp;
	temp.real = s1.real+s.real;
	temp.img = s1.img + s.img;
	return temp;
}
complex operator-(complex s1, complex s)
{
	complex temp;
	temp.real = s1.real - s.real;
	temp.img = s1.img - s.img;
	return temp;
}
complex operator-(complex s1)
{
	complex temp;
	temp.real = -s1.real;
	temp.img = - s1.img;
	return temp;
}
complex operator++(complex &s1)
{
	complex temp;
	temp.real = ++s1.real;
	temp.img = ++s1.img;
	return temp;
}
complex operator++(complex &s1,int n)
{
	complex temp;
	temp.real = s1.real++;
	temp.img = s1.img++;
	return temp;
}
complex operator,(complex x ,complex y)
{
	return x;
}
ostream& operator<<(ostream &cout, const complex &s)
{
	cout << s.real << "+i" << s.img << endl;
	return cout;
}
istream& operator>>(istream &cin, complex &s)
{
	cin >> s.real;
	cin >> s.img;
	return cin;
}




int main()
{
	complex a(1, 2), b(2, 3), c, d(a), e = b, x;
	c=++b;
	cout << d;
	cout << e;
	cout << c;
	c = a + b;
	cout << c;
	c = a - b;
	cout << c;
	c = -a;
	cout << c;
	c = a;
	cout << c;
	c = a, b;
	cout << c;
	c = a++;
	cout << a;
	cin >> x;
	cout << x;
	getchar();
	return 0;
}