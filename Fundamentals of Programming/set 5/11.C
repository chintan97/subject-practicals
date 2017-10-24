#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,n;
	clrscr();

	printf("\nHow many lines:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(k=n;k>=n-i;k--)
		{
			printf(" ");
		}
		for(j=n;j>=i;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	getch();
}