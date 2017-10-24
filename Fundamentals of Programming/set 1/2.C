#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e;
	float f;
	clrscr();

	printf("\nEnter value of a:");
	scanf("%d",&a);

	printf("\nEnter value of b:");
	scanf("%d",&b);

	printf("\nEnter value of c:");
	scanf("%d",&c);

	printf("\nEnter value of d:");
	scanf("%d",&d);

	printf("\nEnter value of e:");
	scanf("%d",&e);

	f=(float)(a+b+c+d+e)/5;

	printf("\nThe average of your given number is %f",f);
	getch();
}
