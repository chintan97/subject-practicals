#include<stdio.h>
#include<conio.h>
int main()
{
	long int x,i=1,fact;
	printf("\nEnter value to find it's factorial:");
	scanf("%ld",&x);
	while(i<=x)
	{
		fact*=i;
		i++;
	}
	printf("\n\nFactorial value for %ld is %ld",x,fact);
	return 0;
}
