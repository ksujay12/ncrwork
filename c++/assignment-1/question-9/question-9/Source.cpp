#include<iostream>
using namespace std;
void value(int x, int y);
void reference(int &x, int &y);
int main()
{
	int ch, a, b;
	cout << "1.call by value  2.call by reference\n";
	cin >> ch;
	switch (ch)
	{
	case 1:
		value(2, 3);
		break;
	case 2:cin >> a >> b;
		reference(a, b);
		cout << a << " " << b;
		break;
	case 3:break;
	}
	getchar();
	system("pause");
	return 0;
}
void value(int x, int y)
{
	x = x + y;
	y = x - y;
	x = x - y;
	cout << x << " " << y;
}
void reference(int &x, int &y)
{
	x = x + y;
	y = x - y;
	x = x - y;
}