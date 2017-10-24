/* Programme to find factorial of given value */
#include<stdio.h>
#include<conio.h>
void main()
{
	long int a=1,n,r;
	clrscr();
	printf("\nEnter a number to know it's factorial value:");
	scanf("%ld",&n);
	r=n;
	while(n>0)
	{
		a=a*n;
		n=n-1;
	}
	printf("\n\n%ld!=%ld",r,a);
	getch();
}