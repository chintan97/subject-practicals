#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();

	printf("\nEnter a value of a:");
	scanf("%d",&a);

	printf("\nEnter a value of b:");
	scanf("%d",&b);

	printf("\nBefore swapping your values are a=%d, b=%d",a,b);

	printf("\nAfter swapping your values are a=%d, b=%d",a+b-a,a+b-b);

	getch();
}