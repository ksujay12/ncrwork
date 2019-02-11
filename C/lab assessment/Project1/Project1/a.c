#include<stdio.h>
void a()
{
	char str[80];
	int i = 0;
	int l = 0, d = 0, b = 0, t = 0;
	scanf("%*c%[^\n]s",str);
	while (str[i] != '\0')
	{
		if (48 <= str[i] && str[i] <= 57)
			d++;
		if ((65 <= str[i] && str[i] <= 90) || (97 <= str[i] && str[i] <= 122))
			l++;
		if (str[i] == ' ')
			b++;
		if (str[i] == '$' || str[i] == '#' || str[i] == '@')
		{
			t++;
		}
		i++;

	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	/*for (i = 0;i < strlen(s);i++)
	{
		if (s[i] >= 65 && s[i] < 90)
		{
			alpha++;
		}
		if (s[i] >= 97 && s[i] < 122)
		{
			alpha++;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit++;
		}
		if (s[i] == ' ')
		{
			spaces++;
		}
		if (s[i] == '$' || s[i] == '#' || s[i] == '@')
		{
			special++;
		}

	}
	*/
	
	printf("alpha= %d\n", l);
	printf("digit= %d\n", d);
	printf("spaces= %d\n", b);
	printf("special= %d\n", t);


}
