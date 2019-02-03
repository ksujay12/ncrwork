#include<stdio.h>
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

	int x;
		x = n >> b;
	return x;
}


