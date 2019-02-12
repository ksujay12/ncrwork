#include<stdio.h>
struct day
{
	int hrs;
	int min;
	int sec;
}time;
int main()
{
	time.hrs = 3;
	time.min = 30;
	time.sec = 6;
	printf("time= %d:%d:%d", time.hrs, time.min, time.sec);
	getch();
	return 0;
}