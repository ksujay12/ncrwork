#include<stdio.h>
#include<string.h>
#define size 100
char* STRREV(char *s1)
{
	int i, j;//iterators
	for (i = 0, j = strlen(s1) - 1;i < j;i++, j--)
	{
		char ch;
		ch = s1[i];
		s1[i] = s1[j];
		s1[j] = ch;
	}
	return s1;
}
int STRCMP(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if ((*s1 == '\0') || (*s2 == '\0'))
			return 0;
		s1++;
		s2++;
	}
	return ((*s1) - (*s2));
}
char* STRCAT(char *s1, char *s2)
{
	char *og = s1;
	while (*s1 != '\0')
	{
		*s1++;
	}
	while ((*s1 = *s2) && (*s2 != '\0'))
	{
		*s1++;
		*s2++;
	}
	return og;
}
char* STRCPY(char *s1, char *s2)
{
	char *og;
	og = s1;
	while ((*s1 = *s2) != '\0')
	{
		*s1++;
		*s2++;
	}
	return og;
}
int main()
{
	int choice;
	char s1[size];
	char s2[size];
	printf("1.String Reverse\n2.String Compare\n3.String Concatenate\n4.String Copy\n");
	scanf_s("%d", &choice);
	switch (choice)
	{
	case 1: printf("Enter the string");
		scanf_s("%s", s1, 10);
		printf("%s", STRREV(s1));
		break;
	case 2:printf("Enter string 1");
		scanf_s("%s", s1, 10);
		printf("Enter string 2");
		scanf_s("%s", s2, 10);
		printf("%d", STRCMP(s1, s2));
		break;
	case 3:printf("Enter string 1");
		scanf_s("%s", s1, 10);
		printf("Enter string 2");
		scanf_s("%s", s2, 10);
		printf("%s", STRCAT(s1, s2));
		break;
	case 4:printf("Enter string 1");
		scanf_s("%s", s1, 10);
		printf("Enter string 2");
		scanf_s("%s", s2, 10);
		printf("%s", STRCPY(s1, s2));
		break;
	default:printf("Enter a valid option");
		break;
	}
	getch();
	return 0;
}