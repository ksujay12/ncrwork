#include<stdio.h>
int a, b;
int add(int, int);
int main()
{
	scanf_s("%d %d", &a, &b);
	printf("Sum is %d", add(a, b));
	getch();
	return 0;
}