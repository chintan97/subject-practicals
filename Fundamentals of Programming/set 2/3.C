#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();

	printf("\nEnter the value of a:");
	scanf("%d",&a);

	printf("\nEnter the value of b:");
	scanf("%d",&b);

	printf("\nBefore swapping values are a=%d, b=%d",a,b);
	{
		c=a;
		a=b;
		b=c;
	}
	printf("\nAfter swapping values are a=%d, b=%d",a,b);
	getch();
}