#include<stdio.h>
void b()
{
	char x;
	FILE* fp1=fopen("one.txt", "r");
	FILE* fp2=fopen("new.txt", "w");
	while ((x = fgetc(fp1)) != EOF)
	{
		if (x == '/')
		{
			x = fgetc(fp1);
			if (x == '/')
			{
				while (fgetc(fp1) != '\n')
				{

				}
			}
			else if (x == '*')
			{
				if (fgetc(fp1) != '*')
				{

				}
				while (fgetc(fp1) != '/')
				{

				}
			}
		}
		else
		{
			if (x != EOF)
			{
				fputc(x, fp2);
			}
		}
	}
}
