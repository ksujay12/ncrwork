#include<stdio.h>
int main()
{
	int a, mask;
	scanf_s("%d", &a);
	printf("\nEntered number in hexa is %x", a);
	while (1)
	{
		printf("\nEnter choice 1.1s compliment in hexa\n2.masking\n3.bit shifting\n4.exit");
		int ch;
		scanf_s("%d", &ch);
		int b;
		switch (ch)
		{
		case 1:
			b = (int)~a;
			printf("%x", b);
			break;
		case 2:
			printf("\nselect \n7:and\n8:or\n:9:xor\n");
			scanf_s("%d", &mask);
			printf("%d", mask);
			switch (mask)
			{
			case 7:
				b = a & 1;
				printf("%x", b);
				break;
			case 8:
				b = a | 1;
				printf("%x", b);
				break;
			case 9:
				b = a ^ 1;
				printf("%x", b);
				break;
			default:
				printf("something went wrong2");
				break;
			}
			break;
		case 3:
			printf("Enter\n 10.left shift \n 11.right shift");
			scanf_s("%d", &mask);
			switch (mask)
			{
			case 10:
				b = a << 1;
				printf("%x", b);
				break;

			case 11:
				b = a >> 1;
				printf("%x", b);
				break;
			}
			break;
		case 4:
			exit(0);
		default:
			printf("something went wrong1");
			break;
		}

	}
	getch();
	return 0;
}