#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e;float f;
	clrscr();

	printf("\nEnter the value of a:");
	scanf("%d",&a);

	printf("\nEnter the value of b:");
	scanf("%d",&b);

	c=a+b;
	printf("\nThe sum of a and b is:%d",c);

	d=a-b;
	printf("\nThe subtraction of a and b is:%d",d);

	e=a*b;
	printf("\nThe multiflication of a and b is:%d",e);

	f=a/b;
	printf("\nThe division of a and b is:%f",f);

	getch();
}