//To compare to string
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
	if(strcmp(a,b)==0)
		printf("\nYou have entered same strings...");
	else
		printf("\nYou have entered different string...");
	getch();
}