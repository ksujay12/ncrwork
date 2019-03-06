#include<stdio.h>
#include<string.h>
int main()
{
	char s[20], begin, end;
	int i, r;
	scanf_s("%s", s, 20);
	for (i = 0;i < strlen(s);i++)
	{
		if (s[i]== '-')
		{
			begin = s[i - 1];
			end = s[i + 1];
		}
	}
	r = begin - end;
	while (r > 0)
	{
		s[i] = begin;
		begin++;
	}
	printf("%s", s);

	getch();
	return 0;
}