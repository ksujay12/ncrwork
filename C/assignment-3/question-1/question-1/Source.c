#include<stdio.h>
int main()
{
	int a[30];
	int sum, n, i, j, sum1 = 0, flag = 0;
	scanf_s("%d", &n);
	for (i = 0;i < n;i++)
		scanf_s("%d", &a[i]);
	scanf_s("%d", &sum);

	for (i = 0; i < n - 1; i++)
	{
		sum1 = a[i];
		for (j = i + 1; j < n; j++)
		{
			sum1 = sum1 + a[j];
			if (sum == sum1)
			{
				printf("Sum found between indexes %d and %d", i, j);
				flag = 1;
				break;
			}
		}
		if (flag == 1)
			break;

	}
	if (flag == 0)
		printf("No subarray found");
	getch();
	return 0;
}