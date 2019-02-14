#include<iostream>
using namespace std;
class Arithmetic
{
public:
	int a, b;
	
};

inline int add(int a, int b)
{
	return (a + b);
};
inline int sub(int a, int b)
{
	return (a - b);
};
inline int mul(int a, int b)
{
	return (a * b);
};
inline int divs(int a, int b)
{
	return (a / b);
};
inline int mod(int a, int b)
{
	return (a % b);
};
int main()
{
	cout << add(3, 5) << "\n";
	cout << sub(3, 5) << "\n";
	cout << mul(3, 5) << "\n";
	cout << divs(3, 5) << "\n";
	cout << mod(3, 5) << "\n";
	getchar();
	return 0;
}