#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,x=0,y=0;
	clrscr();

	for(i=1;i<=5;i++)
	{
		printf("\nEnter a number:");
		scanf("%d",&a[i]);
	}
	for(i=1;i<=5;i++)
	{
		if(a[i]%2==0)
			x++;
		else
			y++;
	}
	printf("\nEven numbers=%d, Odd numbers=%d",x,y);
	getch();
}
