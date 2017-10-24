#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,j,temp;
	clrscr();

	for(i=1;i<=5;i++)
	{
		printf("\nEnter a number:");
		scanf("%d",&a[i]);
	}
	for(i=1;i<=5;i++)
	{
		for(j=i;j<=5;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nSorted list in accending order is:");
	for(i=1;i<=5;i++)
	{
		printf("\n%d",a[i]);
	}
	getch();
}
