#include<iostream>
#include<math.h>
using namespace std;
class point {
	int x;
	int y;
public:
	void read(int a, int b)
	{
		x = a;
		y = b;
	}
	friend void add(point a, point b);
};
int main()
{
	point p, q;
	p.read(2, 2);
	q.read(3, 3);
	add(p, q);
	getchar();
	return 0;
}
void add(point a, point b)
{
	cout << sqrt(pow((b.x - a.x), 2) + pow((b.y - a.y), 2));
}