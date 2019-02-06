#include<stdio.h>
int main()
{
	int val = 0xCAFE, count = 0, x = 4, k;
	int temp = 1;
	while (x != 0)
	{
		if (val&temp)
		{
			count++;
			
		}
		temp=temp << 1;
		x--;
	}
	printf("%d\n", count);

	k = ((val << 8) | (val >> 8)) & 0xFFFF;
	printf("%x", k);



	getch();
	return 0;

}