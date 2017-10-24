//Program to find length of string.
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[10];
	clrscr();
	printf("\nEnter a string:");
	scanf("%s",&a);
	printf("\nLength of your string is :%d",strlen(a));
	getch();
}
