#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20], s2[20], s3[20];
	int i = 0, j = 0, k = 0, flag = 0;
	scanf_s("%s",s1,20);
	scanf_s("%s",s2,20);
	for (i = 0;i < strlen(s1);i++)
	{
		for (j = 0;j < strlen(s2);j++)
		{
			if (s1[i]!= s2[j])
			{
				flag = 1;
			
			}
			else
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			printf("%c", s1[i]);
		}
	}
	
	getch();
	return 0;
}