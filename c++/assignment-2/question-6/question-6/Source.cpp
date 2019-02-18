#include<iostream>
#include<cstring>
using namespace std;
class string2
{
public:
	char *s1;
	int len;
public:
	string2()
	{

	}
	string2(const char *s)
	{
		len = strlen(s);
		s1 = new char(len + 1);
		strcpy(s1, s);
	}
	string2(string2 &temp)
	{
		cout << "aaa" << endl;
		len = temp.len;
		s1 = new char(len + 1);
		strcpy(s1, temp.s1);
	}
	
};
	int main()
{
		string2 x("banana");
		string2 y("orange"), z(y);
		y=x;
	//z = y;
	//y = x;
	cout << x.s1 << endl;
	cout << y.s1 << endl;
	cout << z.s1 << endl;
	system("pause");
	return 0;
}