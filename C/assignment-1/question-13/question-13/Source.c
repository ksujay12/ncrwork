#include<stdio.h>
void fun(int, int, int);
int main()
{
	int n, p, b;
	scanf_s("%d", &n);
	scanf_s("%d", &p);
	scanf_s("%d", &b);
	fun(n, p, b);
	getch();
	return 0;

}

void fun(int n, int p, int b)
{
	int i = 0, e;
	int s[10], s1[10], k, h, j;
	while (n != 0)
	{

		s[i] = n % 2;
		n = n / 2;
		i++;
	}


	for (h = 0, k = i - 1;h < i, k >= 0;h++, k--)
	{

		s1[h] = s[k];

	}


	for (j = p;j < p + b;j++)
	{
		if (s1[j] == 0)
		{
			s1[j] = 1;
		}
		else
		{
			s1[j] = 0;
		}
	}


	for (e = 0;e < i;e++)
	{
		printf("%d", s1[e]);
	}

}