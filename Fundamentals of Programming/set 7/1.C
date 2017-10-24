#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[10],b[10];
	clrscr();

	printf("\nEnter a string:");
	scanf("%s",&a);
	strcpy(b,a);
	printf("\nYour copied string is %s",b);
	getch();
}
