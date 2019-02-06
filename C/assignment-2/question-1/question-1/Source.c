#include<stdio.h>
#include<math.h>
int main()
{
	int n, rem, dec=0, i = 0;
	scanf_s("%d", &n);
	while (n != 0)
	{
		rem = n % 10;
		n = n / 10;
		dec = dec +rem * pow(2, i);
		i++;
	    
	}
	printf("%d", dec);
	getch();
	return 0;
}