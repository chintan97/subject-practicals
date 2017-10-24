#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	void fun(int *,int *);
	clrscr();
	printf("\nEnter value of a:");
	scanf("%d",&a);
	printf("\nEnter value of b:");
	scanf("%d",&b);
	printf("\nYour original values are:\na=%d\nb=%d",a,b);
	fun(&a,&b);
	printf("\nYour swapped values are:\na=%d\nb=%d",a,b);
	getch();
}
void fun(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}