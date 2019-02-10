#include<stdio.h>
int main()
{
	char *color[6] = { "red","green","blue","white","black","yellow" };
	
	printf("%lu\n", color);
	printf("%lu\n", &color);
	printf("%d\n", sizeof(color));
	printf("%lu\n", (color + 2));

	printf("%s\n", *color);
	printf("%s\n", *(color + 2));
	
	getch();
	return 0;
}