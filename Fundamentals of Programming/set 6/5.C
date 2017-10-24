#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,x=0,y=0,z=0;
	clrscr();

	for(i=1;i<=5;i++)
	{
		printf("\nEnter a number:");
		scanf("%d",&a[i]);
	}
	for(i=1;i<=5;i++)
	{
		if(a[i]>0)
			x++;
		else
		{
			if(a[i]<0)
				y++;
			else
				z++;
		}
	}
	printf("\nPositive numbers=%d, Negative numbers=%d, Zero=%d",x,y,z);
	getch();
}