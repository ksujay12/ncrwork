#include<stdio.h>
#include<string.h>
int replace(char *);
int main()
{
	char *cat = "the cat sat";
	char s[20];
	strcpy_s(s, 12, cat);
	int n = replace(s);
	printf("%d", n);
	getch();
	return 0;
}
int replace(char *cat)
{

	int i, x = 0;
	for (i = 0;i < strlen(cat) - 1;i++)
	{
		if (cat[i] == ' ')
		{
			cat[i] = '-';
			x++;
		}
	}
	printf("%s", cat);
	return x;
}