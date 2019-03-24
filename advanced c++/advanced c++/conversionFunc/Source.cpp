#include<iostream>
#include<math.h>
using namespace std;
class Power
{
	double base;
	double exp;
public:
	Power(double b, double e)
	{
		base = b;
		exp=e;
	}
	operator double()
	{
		return pow(base, exp);
	}
};

int main()
{
	Power powerObj1(2.4,3.5), powerObj2(3.5, 2.4);
	double result = powerObj1 + powerObj2 + 2.4;
	cout <<"result = "<< result<< endl;
	system("pause"); 
	return 0;
}