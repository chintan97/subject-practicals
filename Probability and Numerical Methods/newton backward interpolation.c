#include<stdio.h>
#include<conio.h>
float fact(int);
int main()
{
	float y[15][15],x[15],X,count,p,sum=0,temp;
	int n,i,k=0,j;
	printf("\nEnter total number of x:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter value of x%d:",i);
		scanf("%f",&x[i]);
		printf("\nEnter value of y%d:",i);
		scanf("%f",&y[k][i]);
	}
	printf("\nEnter value of X for which y is to be found:");
	scanf("%f",&X);
	for(i=1;i<n;i++)
	{
		for(j=1;j<n;j++)
		{
			y[i][j]=y[i-1][j]-y[i-1][j-1];
		}
	}
	p=(X-x[n-1])/(x[1]-x[0]);
	sum=y[0][n-1];
	//printf("\n%f",sum);
	for(i=1;i<n-1;i++)
	{
		count=i;
		temp=1;
		while(count!=0)
		{
			temp*=(p+count-1);
			count--;
		}
		temp=temp/fact(i);
		sum+=(temp*y[i][n-1]);
	}
	printf("\nAnswer is %f",sum);
	return 0;
}
float fact(int a)
{
  float fac = 1;
  if (a == 0)
   return (1);
  else
   fac = a * fact(a-1);
  return(fac);
}

