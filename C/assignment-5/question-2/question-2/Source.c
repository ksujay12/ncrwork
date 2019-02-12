#include<stdio.h>
struct one
{
	int x;
	char y;
}s1;
union two
{
	int a;
	char b;
}u1;
int main()
{
	printf("%d\n", sizeof(s1));
	printf("%d", sizeof(u1));
	getch();
	return 0;
}