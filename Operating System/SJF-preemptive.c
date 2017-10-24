#include<stdio.h>
int main()
{
	int p[10];
	int n,i,j,wt[10],tat[10],a[10],r[10];
	int tbt=0,run=100,temp=0,running=100,bt[10];
	int twt=0,ttat=0;
	float awt=0,atat=0;
	printf("\nEnter total processes:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\nEnter burst time for p[%d]:",i);
		scanf("%d",&p[i]);
		r[i]=p[i];
		tbt+=p[i];
		printf("\nEnter arrival time for p[%d]:",i);	
		scanf("%d",&a[i]);
	}
	while(temp<=tbt)
	{
		for(i=1;i<=n;i++)
		{
			if(a[i]<=temp && run>p[i] && r[i]!=0 && running!=i)
			{
				run=r[i];
				running=i;
			}
		}
		run--;
		r[running]--;
		temp++;
		if(r[running]==0)
		{
			bt[running]=temp;
			run=100;
		}
	}
	printf("\n\nProcess\tArrival time\tBurst time\tWaiting time\tTAT");
	for(i=1;i<=n;i++)
	{
		printf("\np[%d]",i);
		printf("\t%d",a[i]);
		printf("\t\t%d",p[i]);
		wt[i]=bt[i]-p[i]-a[i];
		printf("\t\t%d",wt[i]);
		tat[i]=bt[i]-a[i];
		printf("\t\t%d",tat[i]);
		twt+=wt[i];
		ttat+=tat[i];
	}
	awt=(float)twt/n;
	atat=(float)ttat/n;
	printf("\n\nTotal waiting time = %d",twt);
	printf("\nAverage waiting time = %f",awt);
	printf("\nTotal turn around time = %d",ttat);
	printf("\nAverage turn around time = %f",atat);
	return 0;
}
