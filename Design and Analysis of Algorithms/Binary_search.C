#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int BinSearch(int a[],int,int,int);
int main()
{
	int a[100],n,i=0;
	int key,low=0,upp;
	char line[6];
	FILE *fp=fopen("test1.txt","r");
	while(fgets(line,sizeof(line),fp)!=NULL)
	{
		a[i++]=atoi (line);
	}
	upp=i-1;
	printf("\nEnter value to be found:");
	scanf("%d",&key);
	BinSearch(a,low,upp,key);
	return 0;
}
int BinSearch(int *arr,int low,int upp,int key)
{
	int mid;
	if(upp<low)
	{
		printf("\nValue %d not found...",key);
		return 0;
	}
	else
		mid=(upp+low)/2;
	if(key<arr[mid])
		BinSearch(arr,low,mid-1,key);
	else if(key>arr[mid])
		BinSearch(arr,mid+1,upp,key);
	else
	{
		printf("\nYour value %d is at location %d",key,mid);
	}
}
