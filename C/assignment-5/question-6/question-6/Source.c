#include<stdio.h>
int main()
{
	FILE *fp = fopen("fun.txt", "r");
	char ch;
	while ((ch = fgetc(fp))!=EOF)
	{
		printf("%c", ch);
	}
	getch();
	return 0;
}