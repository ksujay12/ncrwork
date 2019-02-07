#include<stdio.h>
#include<string.h>
int main()
{
	char s[20][20],temp[10];
	int i, j, n;
	scanf_s("%d", &n);
	for (i = 0;i < n;i++)
	{
		scanf_s("%s",s[i],20);
	}
	for (i = 0;i < n;i++)
	{
		for (j = i+1;j < n;j++)
		{
			if (strcmp(s[i], s[j]) >0 )
			{
				strcpy_s(temp,20, s[i]);
				strcpy_s(s[i],20, s[j]);
				strcpy_s(s[j],20, temp);
			}
		}
	}
	for (i = 0;i < n;i++)
	{
		printf("%s\t", s[i]);
	}
	
	getch();
	return 0;
}