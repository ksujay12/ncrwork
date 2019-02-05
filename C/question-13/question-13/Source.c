#include<stdio.h>
#include<string.h>
int main()
{
	int p, b, i;

	char a[10];
	scanf_s("%s", a);
	scanf_s("%d", &p);
	scanf_s("%d", &b);
	for (i = p - 1; i < p + b + 1; i++)
	{
		if ((strcmp(a[i], '0') == 1)
		{
			a[i] = '1';
		}
		else
		{
			a[i] = '0';
		}
	}
	printf("%s", a);
	getch();
	return 0;
	
}