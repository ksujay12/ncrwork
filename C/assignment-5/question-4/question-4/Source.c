#include<stdio.h>
struct data {
	unsigned x : 1;
}var;
int main()
{
	var.x = 8;
	if (var.x == 0)
	{
		printf("pre pocessor is little endian");
	}
	else
	{
		printf("pre processor is big endian");
	}
	getch();
	return 0;
}