//To copy string without using function
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[10],b[10],i;
	clrscr();
	printf("\nEnter a string:");
	scanf("%s",&a);
	for(i=0;i<=strlen(a);i++)
	{
		b[i]=a[i];
	}
	printf("\nYour copied string is :%s",b);
	getch();
}
