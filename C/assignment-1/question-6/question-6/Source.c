#include <stdio.h>
int binary(int n);
main()
{
	int n, x;
	printf("Enter a decimal number between 0 and 32: ");
	scanf_s("%d", &n);
	while (n >= 0 && n <= 32)
	{

		x = binary(n);
		printf("BINARY EQUIVALENT OF DECIMAL NUMBER %d IS %d", n, x);
		printf("\nEnter a decimal number between 0 and 32: ");
		scanf_s("%d", &n);
	}

	

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