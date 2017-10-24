//To convert string in upper case
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[10],i;
	clrscr();
	printf("\nEnter a string:");
	scanf("%s",&a);
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]>=97&&a[i]<=122)
			a[i]=a[i]-32;
		else
			a[i]=a[i];
	}
	printf("\nYour string in upper case is :%s",a);
	getch();
}