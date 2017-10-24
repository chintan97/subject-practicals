//Odd or even by UDF
#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	void fun(int x);
	clrscr();
	printf("\nEnter a number:");
	scanf("%d",&a);
	fun(a);
	getch();
}
void fun(a)
{
	if(a%2==0)
		printf("\nYour given number is even...");
	else
		printf("\nYour given number is odd...");
}