#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[10];
	int n=0,i=0;
	clrscr();
	printf("\nEnter a string:");
	scanf("%s",&a);
	while(a[i]!='\0')
	{
		n++;
		i++;
	}
	printf("\nLength of your string is :%d",n);
	getch();
}