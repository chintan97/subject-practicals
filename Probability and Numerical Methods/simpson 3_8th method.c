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
	printf("\nA[0]=%f,\tF[0]=%f",A[0],F[0]);
	for(i=1;i<n;i++)
	{
		A[i]=A[i-1]+h;
		F[i]=F(A[i]);	
		printf("\nA[%d]=%f,\tF[%d]=%f",i,A[i],i,F[i]);
	}
	printf("\nA[%d]=%f,\tF[%d]=%f",n,A[n],n,F[n]);	
	for(i=0;i<=n;i++)
	{
		if(i==0||i==n)
			sum+=F[i];
		else if(i%3==0)
			sum+=(2*F[i]);
		else
			sum+=(3*F[i]);
	}
	printf("\n\nI=%f",(sum*3*h/8));
	return 0;
}
