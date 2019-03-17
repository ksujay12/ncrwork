#include<iostream>
using namespace std;
class complex
{
	float real;
	float img;
public:
	complex()
	{
		cout << "default constructor" << endl;
		real = img = 0;
	}
	complex(float r)
	{
		cout << "one parameterized constructor" << endl;
		real = img = r;
	}
	complex(float r, float i)
	{
		cout << "two parameterized constructor" << endl;
		real = r;
		img = i;
	}

	void display() //Function which is used to display the entered complex number
	{
		if (img > 0)
			cout << " The complex number is:" << real << "+" << img << 'i' << endl;
		else
			cout << "The complex number is:" << real << "" << img << 'i' << endl;
	}

	friend void add(complex &c1, complex &c2);
	friend void mul(complex &c1, complex &c2);

};


void add(complex &a1, complex &a2)
{
	float real1 = a1.real + a2.real;
	float img1 = a1.img + a2.img;
	if (img1 >= 0)
		cout << " The sum of complex numbers is:" << real1 << "+" << img1 << 'i' << endl;
	else
		cout << "The sum of complex numbers is:" << real1 << "" << img1 << 'i' << endl;
}
void mul(complex &a1, complex &a2)
{
	float real1 = (a1.real * a2.real) - (a1.img*a2.img);
	float img1 = (a1.real * a2.img) + (a2.real*a1.img);

	if (img1 >= 0)
		cout << " The multiplication of complex numbers is:" << real1 << "+" << img1 << 'i' << endl;
	else
		cout << "The multiplication of complex numbers is:" << real1 << "" << img1 << 'i' << endl;
}
int main()
{
	float x, y, z;
	complex c;
	cout << "Enter the value of the real or imaginary part of the first complex number" << endl;
	cin >> x;
	complex c1(x);
	c1.display();
	cout << "Enter the value of real and imaginary part of the second complex number" << endl;
	cin >> y >> z;
	complex c2(y, z);
	c2.display();
	cout << "Enter the value of real and iamginary part of the third complex number" << endl;
	cin >> y >> z;
	complex c3(y, z);
	c3.display();
	add(c2, c3); //add two complex numbers
	mul(c2, c3); //multiply two complex numbers
	system("pause");
	return 0;
}