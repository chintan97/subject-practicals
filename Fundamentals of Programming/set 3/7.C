/* Programme to calculate grade */
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a,ave,b=0,i,c;
	clrscr();

	printf("\nHow many subjects:");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		printf("\nEnter marks:");
		scanf("%d",&a);
		b=b+a;
	}
	ave=b/n;
	if(ave>100)
		printf("\nPlease enter valid marks!!!");
	else
	{
		printf("\nThe total of your marks is %d",b);
		printf("\nYour average is %d",ave);
	}
	c=ave/10;

	switch(c)
	{
	case 10:
		printf("\nYou have obtained A+ grade...");
		break;
	case 9:
		printf("\nYou have obtained A+ grade...");
		break;
	case 8:
		printf("\nYou have obtained A grade...");
		break;
	case 7:
		printf("\nYou have obtained B+ grade...");
		break;
	case 6:
		printf("\nYou have obtained B grade...");
		break;
	case 5:
		printf("\nYou have obtained C grade...");
		break;
	case 4:
		printf("\nYou have obtained D grade...");
		break;
	case 3:
	case 2:
	case 1:
	case 0:
		printf("\nSorry,you are fail!!!");
		break;
	default:
		printf("\nYour grade can't be generated!!!");
	}
	getch();
}



