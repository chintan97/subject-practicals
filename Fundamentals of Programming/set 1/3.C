#include<stdio.h>
#include<conio.h>
void main()
{
	float r,a,pi=3.14;
	clrscr();

	printf("\nEnter the radius of your circle:");
	scanf("%f",&r);

	a=pi*r*r;
	printf("\nThe area of your circle is %f",a);
	getch();
}