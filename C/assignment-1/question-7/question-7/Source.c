#include <stdio.h>
int main()
{
	int num, pos = 0, max = 0, min, avg = 0, sum = 0;
	printf("Enter positive numbers (0 or -ve number to stop):\n");
	scanf_s("%d", &num);
	min = num;
	while (num > 0)
	{
		if (num > 0)
		{
			pos++;
		}
		if (num > max)
		{
			max = num;
		}
		if (num < min)
		{
			min = num;
		}
		sum = sum + num;
		avg = sum / pos;
		scanf_s("%d", &num);
		
	}
	printf("pos = %d \n", pos);
	printf("max=%d\n", max);
	printf("min=%d\n", min);
	printf("avg=%d\n", avg);

	getch();
	return 0;
}