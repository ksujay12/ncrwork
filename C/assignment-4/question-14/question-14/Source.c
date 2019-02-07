#include<stdio.h>
#include<string.h>
int main()
{
	char s[10], x;
	int i, k;
	gets(s);
	for (k = 0;k < strlen(s) - 1;k++)
	{
		x = s[0];

		for (i = 0;i < strlen(s) - 1;i++)
		{
			s[i] = s[i + 1];
		}
		s[i] = x;
		puts(s);
	}
	getch();
	return 0;
}