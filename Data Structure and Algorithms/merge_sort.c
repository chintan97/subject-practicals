#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void merge(int [],int ,int ,int );
void part(int [],int ,int );
int main()
{
	int arr[100];
	char line[6];
	int i=0,size;
	FILE *fp=fopen("test.txt","r");
	while(fgets(line,sizeof(line),fp)!=NULL)
	{
		arr[i++]=atoi (line);
	}
	size=i;
	printf("\nYour elements:");
	for(i=0;i<size;i++)
		printf("\n%d",arr[i]);

	part(arr,0,size-1);
	printf("\n\nSorted elements");
	for(i=0; i<size; i++)
		printf("\n%d ",arr[i]);
	getch();
	return 0;
}
void part(int arr[],int min,int max)
{
	int mid;
	if(min<max)
	{
		mid=(min+max)/2;
		part(arr,min,mid);
		part(arr,mid+1,max);
		merge(arr,min,mid,max);
	}
}
void merge(int arr[],int min,int mid,int max)
{
	int tmp[100];
	int i,j,k,m;
	j=min;
	m=mid+1;
	for(i=min; j<=mid && m<=max ; i++)
	{
		if(arr[j]<=arr[m])
		{
			tmp[i]=arr[j];
			j++;
		}
		else
		{
			tmp[i]=arr[m];
			m++;
		}
	}
	if(j>mid)
	{
		for(k=m; k<=max; k++)
		{
			tmp[i]=arr[k];
			i++;
		}
	}
	else
	{
		for(k=j; k<=mid; k++)
		{
			tmp[i]=arr[k];
			i++;
		}
	}
	for(k=min; k<=max; k++)
		arr[k]=tmp[k];
}
