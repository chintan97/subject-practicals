#include<stdio.h>
int main()
{
	int p[10],bt[10],arr[10],done[10],wt[10];
	int n,i,j,max=0,temp=0,min,inc=0,twt=0,ttat=0;
	float awt=0,atat=0;
	printf("\nEnter total number of processes:");
	scanf("%d",&n);
	min=100;
	for(i=1;i<=n;i++)
	{
		printf("\nEnter burst time for process p[%d]:",i);
		scanf("%d",&bt[i]);
		printf("\nEnter priority of p[%d]:",i);
		scanf("%d",&p[i]);
		arr[i]=p[i];
		if(p[i]>max)  
			max=p[i];
		if(min>p[i])
			min=p[i];
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
	for(i=min;i<=max;i++)
	{
		temp=p[i];
		for(j=1;j<=n;j++)
		{
			if(temp==arr[j] && done[j]!=1)
			{
				wt[j]=inc;
				inc+=bt[j];
				twt+=wt[j];
				done[j]=1;
			}
		}
	}
	printf("\nProcess\tBurst time\tPriority\tWaiting time\tTAT");
	for(i=1;i<=n;i++)
	{
		printf("\np[%d]",i);
		printf("\t%d",bt[i]);
		printf("\t\t%d",arr[i]);
		printf("\t\t%d",wt[i]);
		printf("\t\t%d",wt[i]+bt[i]);	
		ttat+=wt[i]+bt[i];
	}
	awt=(float)twt/n;
	atat=(float)ttat/n;
	printf("\n\nTotal waiting time = %d",twt);
	printf("\nAverage waiting time = %f",awt);
	printf("\nTotal turn around time = %d",ttat);
	printf("\nAverage turn around time = %f",atat);
	return 0;
}
