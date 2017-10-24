#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,n;
	clrscr();

	printf("\nHow many lines:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=n-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		for(j=1;j<=i-1;j++)
		{
			printf("%d",i-j);
		}
		printf("\n");
	}
	getch();
}