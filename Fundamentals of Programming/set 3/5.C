/* Programme to know eighter given chracter is vowel or consonent */
#include<stdio.h>
#include<conio.h>
void main()
{
	char a;
	clrscr();

	printf("\nEnter a character either it is vowel or consonent:");
	scanf("%c",&a);

	if(a>='a'&&a<='z')
	{
		switch(a)
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				printf("\nYou have entered a small case vowel...");
				break;
			default:
				printf("\nYou have entered a small case consonent...");
				break;
		}
	}

	else
	{
		if(a>='A'&&a<='Z')
		{
			switch(a)
			{
				case 'A':
				case 'E':
				case 'I':
				case 'O':
				case 'U':
					printf("\nYou have entered a upper case vowel...");
					break;
				default:
					printf("\nYou have entered a upper case consonent...");
					break;
			}
		}
		else
			printf("\nEnter a valid character...");
	}
	getch();
}
