#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i;
	clrscr();

	for(i=1;i<=5;i++)
	{
		printf("\nEnter a number:");
		scanf("%d",&a[i]);
	}
	printf("\nYour given numbers are:");
	for(i=1;i<=5;i++)
	{
		printf("\n%d",a[i]);
	}
	getch();
}