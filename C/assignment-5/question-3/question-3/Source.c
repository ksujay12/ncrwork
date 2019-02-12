#include<stdio.h>
enum operations{add,sub};
struct complex
{
	int real, img;
}a,b,c;

void complexadd()
{
	printf("enter numbers\n");
	scanf("%d %d", &a.real, &a.img);
	scanf("%d %d", &b.real, &b.img);
	c.real = a.real + b.real;
	c.img = a.img + b.img;
    printf("%d + %di", c.real,c.img);

}
void complexsub()
{
	printf("enter numbers\n");
	scanf("%d %d", &a.real, &a.img);
	scanf("%d %d", &b.real, &b.img);
	c.real = a.real - b.real;
	c.img = a.img - b.img;
	printf("%d %di", c.real, c.img);

}
int main()
{
	
	int x;
	printf("enter 0 for add\n 1 for sub\n");
	scanf("%d", &x);
	switch (x)
	{
	case add:complexadd();
		break;
	case sub:complexsub();
		break;
	default:printf("invalid");
	}
	getch();
	return 0;
}