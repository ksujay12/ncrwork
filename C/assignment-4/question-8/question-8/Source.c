#include<stdio.h>
#include<stdlib.h>
int main()
{
	char **s;
	int n, i;
	scanf_s("%d", &n);
	s = (char**)malloc(sizeof(char*)*n);
	for (i = 0;i < n;i++)
	{
		s[i] = (char*)malloc(sizeof(char)*20);
		scanf_s("%s", s[i],20);
		
	}
	for (i = 0;i < n;i++)
	{
		printf("%s\n", s[i]);
	}
	getch();
	return 0;
}