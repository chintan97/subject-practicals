#include<stdio.h>
#include<conio.h>
void main()
{
	char s[21];
	int count=0;
	char *p;
	clrscr();
	p=&s;
	printf("\nEnter your name:");
	scanf("%s",&s);
	while(*p!='\0')
	{
		count++;
		p++;
	}
	printf("\nCharacters in your name is %d",count);
	getch();
}