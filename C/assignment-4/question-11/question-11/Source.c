#include<stdio.h>
int main()
{
	char s1[100];
	char s2[100];
	printf("Enter string 1");
	scanf_s("%s", s1,10);
	printf("Enter string 2");
	scanf_s("%s", s2,10);
	getch();
	return 0;
}