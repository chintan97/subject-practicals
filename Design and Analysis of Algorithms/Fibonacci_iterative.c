#include<stdio.h>
#include<conio.h>
int Fibonacci(int);
int main()
{
	int x;
	printf("\nHow many n values you want?:");
	scanf("%d",&x);
	Fibonacci(x);
	return 0;
}
int Fibonacci(int n)
{
   int i,flag=n;
   int f1 = 0;
   int f2 = 1;
   int fn;
   for (i=0;i<flag;i++)
   {
   	  printf("\n%d",f1);
      fn = f1 + f2;
      f1 = f2;
      f2 = fn;
   }
}
