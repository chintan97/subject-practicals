/* Programme to know whether entered number is palindrome or not */
#include<stdio.h>
#include<conio.h>
void main()
{
	long int a=0,x,n,r;
	clrscr();
	printf("\nEnter a number:");
	scanf("%ld",&n);

	x=n;

	while(n>0)
	{
		r=n%10;
		a=(a*10)+r;
		n=n/10;
	}
	if(x==a)
		printf("\nYour given value is palindrome number...");
	else
		printf("\nYour given value is not palindrome number...");
	getch();
}


