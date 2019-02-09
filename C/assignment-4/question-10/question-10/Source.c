#include<stdio.h>
#include<string.h>
int main()
{
	char s[20];
	char y[2];
	int i;
	scanf_s("%s", s, 20);
	scanf_s("%s", y,2);
	
	for (i = 0;i < strlen(s);i++)
	{
		if (s[i] != y[0])
		{
			printf("%c", s[i]);
		}
		
	}
	getch();
	return 0;
}