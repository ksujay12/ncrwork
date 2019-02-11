#include<stdio.h>
void d()
{
	char ch;
	FILE* fp1 = fopen("some.txt", "r");
	FILE* fp2 = fopen("two.txt", "w");
	while ((ch=fgetc(fp1))!=EOF)
	{
		if (ch == '\t')
		{
			fputc('\\', fp2);
			fputc('t', fp2);
		}
		else
		{
			fputc(ch, fp2);
		}
	}
	fclose(fp2);
	fclose(fp1);
}