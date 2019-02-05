#include<stdio.h>
int main()
{

	int n;
	int i = 0;
	int p;
	int count = 0;
	scanf_s("%d", &n);
	scanf_s("%d", &p);
	i = n;
	while (n > 0)
	{
		count++;
		n = n / 10;
	}
	//printf("%d", count);
	printf("\n");
	for (int j = 0; j < p; j++)
	{
		int m = n % (10 * (count - 1));
		m = m*(10 * (count - 1));
		m = m + (n / 10 * (count - 1));
		n = m;
	}
	printf("%d", n);
	getch();
	return 0;
}