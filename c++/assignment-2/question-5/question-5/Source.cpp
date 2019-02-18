#include<iostream>
#include<cstring>
using namespace std;
class string1
{
public:
	char *s;
	int len;
public:
	string1()
	{

	}
	string1(const char *x)
	{
		len = strlen(x);
		s = new char(len + 1);
		strcpy(s, x);
	}
	string1(const string1 &temp)
	{
		len = temp.len;
		s = new char(len + 1);
		strcpy(s, temp.s);
	}
	~string1()
	{

	}
	char& operator[](int n)
	{
		return s[n];
	}
	string1 operator=(string1 x)
	{
		len = x.len;
		s = new char(len+1);
		strcpy(s, x.s);
		return s;
	}
	string1(char *t)
	{
		len = strlen(t);
		s = new char(len + 1);
		strcpy(s, t);
	}
	friend string1 operator+(string1 &x, string1 &y);
	friend ostream& operator<<(ostream &cout, const string1 &s);
	friend istream& operator>>(istream &cin, string1 &x);
	
	
};
string1 operator+(string1 &x, string1 &y)
{	
	string1 temp;
	temp.len = x.len + y.len;
	temp.s = new char(temp.len + 1);
	temp.s = strcat(x.s, y.s);
	return temp;
}
ostream& operator<<(ostream &cout, const string1 &x)
{
	cout << x.s;
	return cout;
}
istream& operator>>(istream &cin, string1 &x)
{
	cin >> x.s;
	return cin;
}
int main()
{
	string1 a("dkfk");
	string1 c;

	string1 b( "hjkl");
	c = (a + b);
	cout << c << endl;
	string1 f(b);
	cout << f << endl;
	cout << c[2] << endl;
	system("pause");
	return 0;
}
