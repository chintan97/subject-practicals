#include<stdio.h>
int main()
{
	int p[10],arr[10],done[10];
	int n,i,j,temp,wt[10];
	int twt=0,ttat=0,inc=0;
	float awt=0,atat=0;
	printf("\nEnter total processes:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\nEnter burst time for p[%d]:",i);
		scanf("%d",&p[i]);	
		arr[i]=p[i];
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(p[i]<p[j])
			{
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
	}
	for(i=1;i<=n;i++)
	{
		temp=p[i];
		for(j=1;j<=n;j++)
		{
			if(temp==arr[j] && done[j]!=1)
			{
				wt[j]=inc;
				inc+=arr[j];
				twt+=wt[j];
				done[j]=1;
			}
		}
	}
	printf("\nProcess\tBurst time\tWaiting time\tTAT");
	for(i=1;i<=n;i++)
	{
		printf("\np[%d]",i);
		printf("\t%d",arr[i]);
		printf("\t\t%d",wt[i]);
		printf("\t\t%d",wt[i]+arr[i]);
		ttat+=wt[i]+arr[i];
	}
	printf("\n\nTotal waiting time = %d",twt);
	awt=(float)(twt)/n;
	printf("\nAverage waiting time = %f",awt);
	printf("\nTotal turn arount time = %d",ttat);
	atat=(float)(ttat)/n;
	printf("\nAverage waiting time = %f",atat);
	return 0;
}
