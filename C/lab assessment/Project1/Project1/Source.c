#include<stdio.h>
void a(void);
void b(void);
void c(void);
void d(void);
int main()
{
	int ch;
	printf("enter 0 for question-a\n");
	printf("enter 1 for question-b\n");
	printf("enter 2 for question-c\n");
	printf("enter 3 for question-d\n");
	scanf_s("%d", &ch);

	switch (ch)
	{
	case 0:a();
		break;
	case 1:b();
		break;
	case 2:c();
		break;
	case 3:d();
		break;
	default:printf("please enter valid option\n");
		break;
	}
	getch();
	return 0;
}