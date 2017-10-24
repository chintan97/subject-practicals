#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,r=1;
	clrscr();

	printf("\nHow many lines:");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",r);
			r=r+1;
		}
		printf("\n");
	}
	getch();
}