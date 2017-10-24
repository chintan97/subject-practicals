#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int a[100];
	char line[6];
	int i=0,j,temp,n;
	FILE *fp=fopen("test.txt","r");
	while(fgets(line,sizeof(line),fp)!=NULL)
	{
		a[i++]=atoi (line);
	}
	n=i;
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(temp<a[j]&&j>=0)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	printf("\nSorted data is...");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
	return 0;
}
