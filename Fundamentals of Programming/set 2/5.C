#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();

	printf("\nEnter the value of a:");
	scanf("%d",&a);

	printf("\nEnter the value of b:");
	scanf("%d",&b);

	{
	if(a>b)
	{
		printf("\nThe maximum number is %d and minimum is %d",a,b);
	}
	else
	{
		printf("\nThe maximum number is %d and minimum is %d",b,a);
	}
	}
	getch();
}