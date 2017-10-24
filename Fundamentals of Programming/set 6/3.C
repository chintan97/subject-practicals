#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],sum=0,i;
	float avg;
	clrscr();

	for(i=1;i<=5;i++)
	{
		printf("\nEnter a number:");
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	avg=(float)sum/5;
	printf("\nSum of your given numbers is %d",sum);
	printf("\nAverage of your given number is %f",avg);
	getch();
}
