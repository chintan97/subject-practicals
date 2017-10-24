/* Programme to know whether entered value is even or odd */
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();

	printf("\nEnter any integer number:");
	scanf("%d",&a);

	b=a%2;

	if(b==0)
	printf("\nYour number is even...");

	else
	printf("\nYour number is odd...");

	getch();
}