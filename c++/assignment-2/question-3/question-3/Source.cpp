#include<iostream>
using namespace std;
class employee
{
	int	empno;
	int salary;
	char name[10];
public:
 void setdata()
	{
	 cin >> empno;
	 cin >> name;
	 cin >> salary;

	}
 friend ostream& operator<<(ostream &cout, employee x);
};

ostream& operator<<(ostream &cout, employee x)
{
	cout << x.empno << endl;
	cout << x.name << endl;
	cout << x.salary << endl;
	return cout;
}
int main()
{
	employee r[2];
	r[0].setdata();
	r[1].setdata();
	cout << r[0];
	cout << r[1];
	system("pause");
	return 0;
}