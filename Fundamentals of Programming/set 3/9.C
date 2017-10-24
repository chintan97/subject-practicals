/* Programme of addition of first n integers using switch case */
#include<stdio.h>
#include<conio.h>
void main()
{
	int a=0,b=0,n;
	clrscr();
	printf("\nEnter how many first integers:");
	scanf("%d",&n);
	printf("\nYour values are:");
	num:

	if(a<n)
	{
		a=a+1;
		printf("\n%d",a);
		b=b+a;
		goto num;
	}
	printf("\nThe sum of given number is %d",b);

	getch();
}