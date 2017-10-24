//To reverse a string
#include<stdio.h>
#include<conio.h>
void main()
{
	char a[10];
	clrscr();
	printf("\nEnter a string:");
	scanf("%s",&a);
	printf("\nYour reversed string is :%s",strrev(a));
	getch();
}
