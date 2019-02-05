#include<stdio.h>
#include<string.h>
void itob(int, char*);
void itoh(int, char*);
void main()
{
	char s[20];
	int n;
	scanf_s("%d", &n);
	itob(n, s);
	itoh(n, s);
	getch();
}
void itob(int num, char* str)
{
	int temp = num;
	int i = 0, j;
	while (num != 0)
	{
		str[i] = (num % 2) + 48;
		num /= 2;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		printf("%c", str[j]);
	}
	printf("\n");
	//puts(s);
}
void itoh(int num, char* str)
{
	int temp = num;
	int i = 0, j, r;
	while (num != 0)
	{
		r = num % 16;
		if (0 <= r && r <= 9)
			r += 48;
		else if (10 <= r && r < 16)
			r += 55;
		num /= 16;
		str[i] = r;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		printf("%c", str[j]);
	}
}