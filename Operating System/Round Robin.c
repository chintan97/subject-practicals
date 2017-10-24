#include<stdio.h>
int main()
{
	int bt[10],done[10],arr[10],wt[10],cnt[10]={0};
	int n,i,tq,tbt=0,temp=0,inc=0,twt=0,ttat=0;
	float atat=0,awt=0;
	printf("\nEnter total number of processes:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\nEnter burst time of p[%d]:",i);
		scanf("%d",&bt[i]);
		tbt+=bt[i];
		arr[i]=bt[i];
	}
	printf("\n\nEnter quantum time:");
	scanf("%d",&tq);
	i=1;
	while(temp<tbt)
	{
		if(i>n)
			i=1;
		if(done[i]!=1)
		{
			bt[i]-=tq;
			cnt[i]++;
			temp+=tq;
			if(bt[i]<=0)
			{
				done[i]=1;
				wt[i]=temp-(cnt[i]*tq);
				temp+=(bt[i]);	
			}
		}
		i++;
	}
	printf("\n\nProcess\tBurst time\tWaiting time\tTAT");
	for(i=1;i<=n;i++)
	{
		printf("\np[%d]",i);
		printf("\t%d",arr[i]);
		printf("\t\t%d",wt[i]);
		printf("\t\t%d",wt[i]+arr[i]);
		ttat+=wt[i]+arr[i];
		twt+=wt[i];
	}
	awt=(float)twt/n;
	atat=(float)ttat/n;
	printf("\n\nTotal waiting time = %d",twt);
	printf("\nAverage waiting time = %f",awt);
	printf("\nTotal turn around time = %d",ttat);
	printf("\nAverage turn around time = %f",atat);
	return 0;
}
