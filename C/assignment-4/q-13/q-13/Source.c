#include<stdio.h>
#include<string.h>
int main()
{
	char s[20], begin, end, x = '-';
	int i, j;
	scanf("%s", s);
	printf("%c", s[0]);
	for (i = 0;i < strlen(s);i++)
	{
		if (s[i+1]==x)
		{
			begin = s[i];
			end = s[i + 2];
			if (begin < end)
			{
				
				for (j = begin + 1;j < end;j++)
				{
					printf("%c", j);
				}
			}
			else
			{
				printf("please check the input ***ERROR**\n");
			}
		}
		else
		{
			printf("%c", s[i+1]);
		}
	}
	
	


	getch();
	return 0;
}
