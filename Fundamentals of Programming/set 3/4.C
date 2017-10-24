/* Programme to know days in entered month */
#include<stdio.h>
#include<conio.h>
void main()
{
	int day,a;
	clrscr();

	printf("\nEnter the number of month:");
	scanf("%d",&day);

	switch(day)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf("\nThe number of days in your month are 31...");
		break;
	case 2:
		printf("\nEnter your year:");
		scanf("%d",&a);
		if((a%4==0&&a%100!=0)||(a%400==0))
			printf("\nThe number of days in your month are 29...");
		else
			printf("\nThe number of days in your month are 28...");
		break;

	case 4:
	case 6:
	case 9:
	case 11:
		printf("\nThe number of days in your month are 30...");
		break;

	default:
		printf("\nPlease enter valid number of month!!!");
	}
	getch();
}