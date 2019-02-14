#include<stdio.h>
void c()
{
	FILE* fp1 = fopen("one.txt", "r");
	FILE* fp2 = fopen("new.txt", "w");
	char d[10];
	char x;
	scanf("%s", d);
	while ((x = fgetc(fp1)) != EOF)
	{
		while ((x = fgetc(fp1)) != " ")
		{
			
		}
	}
}