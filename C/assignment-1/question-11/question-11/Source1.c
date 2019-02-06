#include<stdio.h>
#include<math.h>
int main()
{
	float r, si, cis, cia, ciq, cim, cid, p = 500000, t = 10;
	scanf("%f", &r);
	si = p*t*r / 100;
	cia = (p*pow((1 + (r / 100)), t))-p;
	cis = (p*pow((1 + (r / 200)), (2*t)))-p;
	ciq = (p*pow((1 + (r / 400)), (4*t)))-p;
	cim = (p*pow((1 + (r / 1200)), (12*t)))-p;
	cid = (p*pow((1 + (r / 36500)), (365*t)))-p;
	printf("si=%f", si);
	printf("cia=%f", cia);
	printf("cis=%f", cis);
	printf("ciq=%f", ciq);
	printf("cim=%f", cim);
	printf("cid=%f", cid);
	getch();
	return 0;

}