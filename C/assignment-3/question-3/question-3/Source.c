#include<stdio.h>
#include<string.h>
int main()
{
	int i, count = 0;
	char s[10];
	gets(s);
	for (i = 0; i < 8; i++)
	{
		if (s[i] == '1')
		{
			count++;
		}
	}
	printf("%d", count);
	getch();
	return 0;

}