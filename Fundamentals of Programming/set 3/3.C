/* Programme to know whether given year is leap year or not */
#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();

	printf("\nEnter a year:");
	scanf("%d",&a);

	if((a%4==0&&a%100!=0)||(a%400==0))
	printf("\nThe given year is leap year...");

	else
	printf("\nThe given year is not leap year...");

	getch();
}