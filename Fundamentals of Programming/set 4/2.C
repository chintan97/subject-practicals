/* Programme to know whether entered number is armstring number or not */
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,sum=0,r,b;
	clrscr();
	printf("\nEnter a number:");
	scanf("%d",&a);
	r=a;
	while(a>0)
	{
		b=a%10;
		sum=sum+(b*b*b);
		a=a/10;
	}
	if(sum==r)
		printf("\nYour given number is Armstrong...");
	else
		printf("\nYour given number is not Armstrong...");
	getch();
}