#include<iostream>
using namespace std;
class complex
{
	float real;
	float img;
public:
	complex()
	{
		cout << "default" << endl;
	}
	complex(float r)
	{
		cout << "one" << endl;
		real =img= r ;
	}
	complex(float r, float i)
	{
		cout << "two" << endl;
		real = r;
		img = i;
	}
	friend void add(complex &c1,complex &c2);
	friend void mul(complex &c1, complex &c2);

};

void add(complex &a1, complex &a2)
{
	cout << a1.real + a2.real << "+i";
	cout << a1.img + a2.img << endl;
}
void mul(complex &a1, complex &a2)
{
	cout << (a1.real * a2.real)-(a1.img*a2.img) << "+i";
	cout << (a1.real * a2.img) + (a2.real*a1.img);
}
int main()
{
	complex a(1, 2), b(2, 3), c, d(1);
	add(a, b);
	add(b, d);
	mul(a, b);
	getchar();
	return 0;
}