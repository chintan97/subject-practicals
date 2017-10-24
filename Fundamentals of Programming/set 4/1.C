/* Programme to reverse given number */
#include<stdio.h>
#include<conio.h>
void main()
{
	long int a,b;
	clrscr();
	printf("\nEnter a number:");
	scanf("%ld",&a);
	printf("\nYour reversed number is:");
	while(a>0)
	{
		b=a%10;
		printf("%ld",b);
		a=a/10;
	}
	getch();
}