#include<stdio.h>
int main()
{
	int num, sum = 0, dig;
	scanf_s("%d", &num);
	while (num > 0)
	{
		dig = num % 10;
		sum = sum + dig;
		num = num / 10;
	}
	printf("%d", sum);
	getch();
	return 0;
	
}
