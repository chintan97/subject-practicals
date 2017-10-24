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
	printf("\nYour given numbers in reverse order are:");
	for(i=5;i>=1;i--)
	{
		printf("\n%d",a[i]);
	}
	getch();
}