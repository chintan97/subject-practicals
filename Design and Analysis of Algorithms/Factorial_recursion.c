#include<stdio.h>
#include<conio.h>
long int factorial(long int);
int main()
{
	long int x,i=1,fact;
	printf("\nEnter value to find it's factorial:");
	scanf("%ld",&x);
	fact=factorial(x);
	printf("\n\nFactorial value for %ld is %ld",x,fact);
	return 0;
}
long int factorial(long int n)
{
	if(n==0)
		return 1;
	else
		return n*factorial(n-1);
}
