#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[10],b[10];
	clrscr();
	printf("\nEnter a string:");
	scanf("%s",&a);
	printf("\nEnter another string:");
	scanf("%s",&b);
	strcat(a,b);
	printf("\nYou have entered :%s",a);
	getch();
}
