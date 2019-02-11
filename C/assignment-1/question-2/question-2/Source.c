#include<stdio.h>
int main()
{
	char str[80];
	int i = 0;
	int l = 0, d = 0, b = 0, t = 0;
	printf("enter the string\n");
	gets(str);
	while (str[i] != '\0')
	{
		if (48 <= str[i] && str[i] <= 57)
			d++;
		if ((65 <= str[i] && str[i] <= 90) || (97 <= str[i] && str[i] <= 122))
			l++;
		if (str[i] == ' ')
			b++;
		if (str[i] == '$'||str[i]=='#'||str[i]=='@')
			t++;
		i++;

	}
	printf("alpha= %d\n digits= %d \n space= %d\n special=  %d\n", l, d, b, t);
	getch();
	return 0;
}