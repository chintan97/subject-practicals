#include<stdio.h>
#include<conio.h>
void main()
{
	char a;
	clrscr();

	printf("\nEnter any character:");
	scanf("%c",&a);

	if((a>='a'&&a<='z')||(a>='A'&&a<='Z'))
	{
		if(a>='a'&&a<='z')
			printf("\nYou have entered a small case character...");
		else
			printf("\nYou have entered a upper case character...");
	}

	else
	{
		if(a>='0'&&a<='9')
			printf("\nYou have entered a number...");
		else
			printf("\nYou have entered a symbol...");
	}
	getch();
}