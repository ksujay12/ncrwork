#include<stdio.h>
#include<math.h>
int main()
{
	int n, b, x;
	scanf_s("%d", &n);
	scanf_s("%d", &b);
	x = funRot(n, b);
	printf("%d", x);
	getch();
	return 0;
}
int funRot(n, b)
{
	int i = 0, result;
	int temp = n;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	while (b > 0)
	{
	result = (temp % 10)*(pow(10, i - 1)) + temp / 10;
	temp = result;
	b--;
    }
	
	
	return result;
}


