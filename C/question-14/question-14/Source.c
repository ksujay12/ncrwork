#include<stdio.h> 
void decToHexa(int n)
{ 
	char hexaDeciNum[100];
 
	int i = 0;
	while (n != 0)
	{
		int temp = 0;

		temp = n % 16;

		if (temp < 10)
		{
			hexaDeciNum[i] = temp + 48;
			i++;
		}
		else
		{
			hexaDeciNum[i] = temp + 55;
			i++;
		}

		n = n / 16;
	}
	for (int j = i - 1; j >= 0; j--)
		printf("%c",hexaDeciNum[j]);
}
int binary(int n)
{
	if (n == 0)
	{
		return 0;
	}
	else
	{
		return (n % 2) + 10 * binary(n / 2);
	}
}
int main()
{
	int n, x;
	scanf_s("%d", &n);
	x = binary(n);
	
	printf("%d\n", x);
	decToHexa(n);
	getch();
	return 0;
}