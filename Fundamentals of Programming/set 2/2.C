#include<stdio.h>
#include<conio.h>
void main()
{
	int ch;
	clrscr();

	printf("\nEnter a character:");
	scanf("%c",&ch);

	if(ch>=97)
	{
		ch=ch-32;
		printf("\nYour character in upper case is %c",ch);
	}

	else
	{
		ch=ch+32;
		printf("\nYour character in lower case is %c",ch);
	}
	getch();
}