#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,j,max,min;
	clrscr();

	for(i=1;i<=5;i++)
	{
		printf("\nEnter a number:");
		scanf("%d",&a[i]);
	}
	max=a[1];
	for(j=2;j<=5;j++)
	{
		if(a[j]>max)
		{
			max=a[j];
		}
	}
	printf("\nMaximum value is %d",max);
	min=a[1];
	for(j=2;j<=5;j++)
	{
		if(a[j]<min)
		{
			min=a[j];
		}
	}
	printf("\nMinimum value is %d",min);
	getch();
}