#include<stdio.h>
#include<conio.h>
void main()
{
	float h,m;
	clrscr();

	printf("\nEnter a value of hour:");
	scanf("%f",&h);

	m=h*60;
	printf("\nThe minutes are %f",m);
	getch();
}