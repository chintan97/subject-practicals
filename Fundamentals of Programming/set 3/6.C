/* Programme to find maximum number out of three numbers */
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("enter three values");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
			printf("maximum is %d",a);
		else
			printf("maximum is %d",c);
	}
	else
	{
		if(b>c)
			printf("maximum is %d",b);
		else
			printf("maximum is %d",c);
	}
	getch();
}
