#include<stdio.h>
int main()
{
	float table[2][3] = { {1.1,1.2,1.3},{2.1,2.2,2.3} };
	
	printf("%lu\n", table);
	printf("%lu\n", *table);
	printf("%lu\n", (table + 1));
	
	printf("%lu\n", *(table + 1));

	printf("%lu\n", (*(table + 1) + 1));
	
	printf("%f\n", *(*(table + 1) + 1));
	printf("%lu\n", (*(table)+1));

	printf("%f\n", *(*(table)+1));
	
	printf("%f\n", *(*(table)+1));

	printf("%f\n", *(*(table + 1)));

	printf("%f\n", *(*(table)+1) + 1);
	
	getch();
	return 0;
}