#include<stdio.h>
#include<math.h>
void main()
{
	int number, originalNumber, remainder, result = 0, n = 0;

	printf("Enter an integer: ");
	scanf_s("%d", &number);

	originalNumber = number;

	while (originalNumber != 0)
	{
		originalNumber /= 10;
		++n;
	}

	originalNumber = number;

	while (originalNumber != 0)
	{
		remainder = originalNumber % 10;
		result = result + pow(remainder, n);
		originalNumber /= 10;
	}

	if (result == number)
		printf("%d is an Armstrong number.", number);
	else
		printf("%d is not an Armstrong number.", number);
	getch();
	
	
}