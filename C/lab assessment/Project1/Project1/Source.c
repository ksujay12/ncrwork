#include<stdio.h>
void a(void);
//void b(void);
/*{
	char x='\0';
	FILE* fp1 = NULL;
	fopen(&fp1, "one.txt", 'r');
	FILE* fp2 = NULL;
	fopen_s(&fp2, "two.txt", 'w');
	
		if (x == '/')
		{
			x = fgetc(fp1);
				if(x == '/')
				{
					while (fgetc(fp1) != '\n')
					{

					}
				}
				else if(x=='*')
				{
					if (fgetc(fp1) != '*')
					{

					}
					while (fgetc(fp1) != '/')
					{

					}
				}
		}
		else
		{
			if (x != EOF)
			{
				fputc(x, fp2);
			}
		}
	}
	*/
//void c(void);
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
	//case 1:b();
		//break;
	//case 2:c();
		//break;
	case 3:d();
		break;
	default:printf("please enter valid option\n");
		break;
	}
	getch();
	return 0;
}