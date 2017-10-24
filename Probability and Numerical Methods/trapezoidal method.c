#include<stdio.h>
#include<conio.h>
#include<math.h>
#define e 2.718281
#define F(x) (pow(e,-(x*x)))
int main()
{
	float A[15],h,sum=0,F[15];
	int i,n;
	printf("\nEnter total ordinates:");
	scanf("%d",&n);
	n=n+1;
	printf("\nEnter starting value of x:");
	scanf("%f",&A[0]);
	printf("\nEnter ending value of x:");
	scanf("%f",&A[n]);
	F[0]=F(A[0]);
	F[n]=F(A[n]);
	h=(A[n]-A[0])/n;
	for(i=1;i<n;i++)
	{
		A[i]=A[i-1]+h;
		F[i]=F(A[i]);	
	}	
	for(i=0;i<=n;i++)
	{
		if(i==0||i==n)
			sum+=F[i];
		else
			sum+=(2*F[i]);
	}
	printf("\n\nI=%f",(sum*h/2));
	return 0;
}
