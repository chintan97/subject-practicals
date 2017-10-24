#include<stdio.h>
#include<conio.h>
int Fibonacci(int);
int main()
{
	int x,i,j=0;
	printf("\nHow many n values you want?:");
	scanf("%d",&x);
	printf("\n\nYour series is...");
	for(i=1;i<=x;i++)
	{
		printf("\n%d",Fibonacci(j));
		j++;
	}
	return 0;
}
int Fibonacci(int n)
{
     if ( n == 0 ) 
        return 0;
     if ( n == 1 ) 
        return 1;
     
     return Fibonacci(n-1) + Fibonacci(n-2);
}
