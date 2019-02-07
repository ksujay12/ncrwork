#include<stdio.h>
#include<string.h>
int main()
{
	int i, j, count=0;
	char *s[] = { "we will teach you how to","move a mountain","level a building","erase the past","make a million" };
	for (i = 0;i < 5;i++)
	{
		for (j = 0;j < strlen(s[i])-1;j++)
		{
			if (s[i][j] == 'e')
			{
				count++;
			}
		
		}
	
	}
	printf("%d\n", count);
	getch();
	return 0;
}