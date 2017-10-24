#include<stdio.h>
#include<conio.h>
void main()
{
	char i,j,n;
	clrscr();

	printf("\nEnter small case character:");
	scanf("%c",&n);
	for(i=97;i<=n;i++)
	{
		for(j=97;j<=i;j++)
		{
			printf("%c",j);
		}
		printf("\n");
	}
	getch();
}