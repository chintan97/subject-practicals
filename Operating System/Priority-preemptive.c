#include<stdio.h>
int main()
{
	int p[10],bt[10],pt[10];
	int n,i,j,wt[10],a[10],r[10];
	int tbt=0,temp=0,running=0;
	int twt=0,ttat=0;
	float awt=0,atat=0;
	printf("\nEnter total processes:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\nEnter burst time for p[%d]:",i);
		scanf("%d",&bt[i]);
		r[i]=bt[i];
		tbt+=bt[i];
		printf("\nEnter priority of p[%d]:",i);
		scanf("%d",&p[i]);
		pt[i]=p[i];
		printf("\nEnter arrival time for p[%d]:",i);	
		scanf("%d",&a[i]);
	}
	p[running]=100;
	while(temp<=tbt)
	{
		for(i=1;i<=n;i++)
		{
			if(a[i]<=temp && p[running]>p[i] && r[i]!=0 && running!=i)
			{
				running=i;
			}
		}
		r[running]--;
		temp++;
		if(r[running]==0)
		{
			wt[running]=temp-bt[running]-a[running];
			twt+=wt[running];
			p[running]=100;
		}
	}
	
	printf("\n\nProcess\tBurst time\tPriority\tArrival time\tWaiting time\tTAT");
	for(i=1;i<=n;i++)
	{	
		printf("\np[%d]",i);
		printf("\t%d",bt[i]);
		printf("\t\t%d",pt[i]);
		printf("\t\t%d",a[i]);
		printf("\t\t%d",wt[i]);
		printf("\t\t%d",bt[i]+wt[i]);
		ttat+=bt[i]+wt[i];
	}
	awt=(float)twt/n;
	atat=(float)ttat/n;
	printf("\n\nTotal waiting time = %d",twt);
	printf("\nAverage waiting time = %f",awt);
	printf("\nTotal turn around time = %d",ttat);
	printf("\nAverage turn around time = %f",atat);
	return 0;
}
