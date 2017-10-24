//To check whether given string is palindrome or not
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[10],b[10],i,j;
	clrscr();
	printf("\nEnter a string:");
	scanf("%s",&a);
	for(i=0,j=strlen(a)-1;i<=strlen(a);i++,j--)
	{
		b[j]=a[i];
	}
	b[strlen(a)]='\0';
	if(strcmp(a,b)==0)
		printf("\nYour given string is palindrome...");
	else
		printf("\nYour given string is not palindrome...");
	getch();
}