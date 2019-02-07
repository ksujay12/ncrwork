#include<stdio.h>
#include<string.h>
void reverse(char*, int, int);
int main()
{
	char s[20];
	gets(s);
	reverse(s, 0, strlen(s) - 1);
	puts(s);

	
	getch();
	return 0;
}
void reverse(char* s, int begin, int end)
{
	char x;
	if (begin > end)
		return;
	x = *(s+begin);
	*(s+begin) = *(s+end);
	*(s+end) = x;
	return reverse(s, ++begin, --end);
}