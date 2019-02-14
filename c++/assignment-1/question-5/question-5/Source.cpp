#include<iostream>
using namespace std;
class distance2;
class distance1
{
public:
	int m;
	int cm;
	void set_data1();
	friend distance1 add(distance1,distance2);
};
class distance2
{
public:
	int ft;
	int in;
	void set_data2();
	friend distance1 add(distance1,distance2);
};
void distance1 :: set_data1()
{
	cout << "enter meters" << endl;
	cin >> m;
	cout << "enter cms" << endl;
	cin >> cm;
}

void distance2 :: set_data2()
{
	cout << "enter feet" << endl;
	cin >> ft;
	cout << "enter inches" << endl;
	cin >> in;
}
 distance1 add(distance1 a,distance2 b)
{
	 distance1 temp;
	 temp.cm = a.cm + (b.ft * 30) + ((b.in * 30) / 12.0);
	 temp.m = a.m + (temp.cm % 100);
	 temp.cm = temp.cm - ((temp.cm % 100) * 100);
	 return(temp);
}

 int main()
 {
	 distance1 d1, s;
	 d1.set_data1();
	 distance2 d2;
	 d2.set_data2();
	 s= add(d1, d2);
	 cout << s.m << endl;
	 cout << s.cm << endl;
	 system("pause");
	 return 0;
 }
