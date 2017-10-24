/* Programme to print n numbers using switch case */
#include<stdio.h>
#include<conio.h>
void main()
{
	int a=1,n;
	clrscr();
	printf("\nHow many numbers do you want to print:");
	scanf("%d",&n);
	num:

	if(a<=n)
	{
	printf("\n%d",a);
	a=a+1;
	goto num;
	}

	getch();
}