#include<stdio.h>
int main()
{
	int i, n, arr[100], arr1[100];
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
		scanf_s("%d", &arr[i]);
	int j = n - 1; int k = 0;
	for (i = 0; i < n; i++)
	{
		if (arr[i] < 0)
		{
			arr1[k] = arr[i];
			k++;
		}
		if (arr[i] > 0)
		{
			arr1[j] = arr[i];
			j--;
		}
	}
	for (i = 0; i < n; i++)
		printf("%d ", arr1[i]);

	getch();
	return 0;
}
