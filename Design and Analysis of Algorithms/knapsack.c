#include<stdio.h>
#include<conio.h>
int KnapSack(int n,float W[],float pro[],float cap)
{
	int i,u=cap;
	float tp=0,x[20]={0.0};
	for(i=0;i<=n;i++)
	{
		if(W[i]>u)
			break;
		
		else
		{
			x[i]=1.0;
			tp+=pro[i];
			u-=W[i];
		}
	}
	if(i<n)
		x[i]=u/W[i];
	
	tp+=(x[i]*pro[i]);
	printf("\nResult vector:");
	for(i=0;i<n;i++)
		printf("%f\t",x[i]);
	
	printf("\nMax profit is %f",tp);
}
int main()
{
	float W[20],pro[20],cap,rat[20],temp;
	int i,j,n;
	printf("\nEnter total entries:");
	scanf("%d",&n);
	printf("\nEnter capacity:");
	scanf("%f",&cap);
	printf("\nEnter weight and profit:");
	for(i=0;i<n;i++)
	{
		scanf("%f %f",&W[i],&pro[i]);
	}
	for(i=0;i<n;i++)
		rat[i]=W[i]/pro[i];
		
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(rat[i]<rat[j])
			{
				temp=rat[i];
				rat[i]=rat[j];
				rat[j]=temp;
				
				temp=pro[i];
				pro[i]=pro[j];
				pro[j]=temp;
				
				temp=W[i];
				W[i]=W[j];
				W[j]=temp;
			}
		}
	}
	KnapSack(n,W,pro,cap);
	return 0;
}
