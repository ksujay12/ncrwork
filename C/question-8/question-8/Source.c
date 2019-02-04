#include<stdio.h>
int main()
{
	float base;
	float gs;
	scanf_s("%f", &base);
	if (base > 0 && base <= 4000)
	{
		gs = base + base*0.1 + base*0.5;
	}
	if (base > 4000 && base <= 8000)
	{
		gs = base + base*0.2 + base*0.6;
	}
	if (base > 8000 && base <12000)
	{
		gs = base + base*0.25 + base*0.7;
	}
	if (base >= 12000)
	{
		gs = base + base*0.3 + base*0.8;
	}
	printf("%f", gs);
	getch();
	return 0;
}