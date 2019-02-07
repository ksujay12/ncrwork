#include<stdio.h>
#include<string.h>
int main()
{
	char s[20];
	int i;
	gets(s);
	for (i = 0;i < strlen(s);i++)
	{
		if (s[i] >= 65 && s[i] < 90)
		{
			s[i] = s[i] + 32;
		}
		else
		{
			s[i] = s[i] - 32;
		}
	}
	printf("%s", s);
	getch();
	return 0;
}