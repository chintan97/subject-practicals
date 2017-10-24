#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],i,j;
	clrscr();

	printf("\nEnter 3*3 metrix:");
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nOriginal metrix:\n");
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
	printf("\nTranposed metrix:\n");
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			printf("\t%d",a[j][i]);
		}
		printf("\n");
	}
	getch();
}

