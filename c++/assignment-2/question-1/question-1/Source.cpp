#include<iostream>
using namespace std;
class polar {
public:
	float angle;
	float radius;
	static int count;
	void set_data(float x, float y)
	{
		angle = x;
		radius = y;
		count++;
	}
};
 int polar::count;
int main()
{
	polar a, b, c;
	a.set_data(2, 3);
	b.set_data(4, 5);
	c.set_data(7, 8);
	cout << a.count;
	system("pause");
	return 0;
}
