#include<iostream>
using namespace std;
class time
{
	int hrs;
	int min;
	int sec;
public:
	time()
	{
		hrs = min = sec = 0;
	}
	time(int i, int j, int k)
	{
		hrs = i;
		min = j;
		sec = k;
	}
public: void display()
{
	cout << hrs << ":" << min << ":" << sec<<endl;
}
public: void addtime(time t1, time t2)
{
	hrs = t1.hrs + t2.hrs;
	min = t1.min + t2.min;
	sec = t1.sec + t2.sec;
	min = min + sec / 60;
	hrs = hrs + min / 60;
	min = min % 60;
	sec = sec % 60;
	hrs = hrs % 24;
}
};
int main()
{
	time a(11, 20, 30);
	a.display();
	time b;
	time c(20, 35, 45);
	c.display();
	time d;
	d.addtime(a, c);
	d.display();
	getchar();
	return 0;
}