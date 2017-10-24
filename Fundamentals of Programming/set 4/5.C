/* Programme to know whether given number is prine number or not */
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,x=0;
	clrscr();
	printf("\nEnter a number:");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			x=1;
			break;
		}
	}
	if(x==0)
		printf("\n%d is a prime number...",n);
	else
		printf("\n%d is not a prime number...",n);
	getch();
}