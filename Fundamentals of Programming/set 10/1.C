#include<stdio.h>
#include<conio.h>
void main()
{
	int a=10;
	int *p;
	clrscr();
	p=&a;
	printf("\n%d, %d, %x",a,*p,&a);
	getch();
}