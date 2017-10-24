//To find sum by UDF
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	int sum(int x);
	clrscr();
	printf("\nEnter how many numbers:");
	scanf("%d",&a);
	b=sum(a);
	printf("\nSum of first %d numbers is :%d",a,b);
	getch();
}
int sum(a)
{
	int i,b=0;
	for(i=1;i<=a;i++)
		b+=i;
	return b;
}