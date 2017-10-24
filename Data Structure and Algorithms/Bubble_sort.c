#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[100],j,n,i=0,temp;
	char line[6];
	FILE *fp =fopen("test.txt","r");
	while(fgets(line,sizeof(line),fp)!=NULL)
	{
		arr[i++]=atoi (line);
	}
	n=i;
	printf("\nYour data is:");
	for(i=0;i<n;i++)
		printf("\n%d",arr[i]);
		
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("\n\nSorted data:");
	for(i=0;i<n;i++)
		printf("\n%d",arr[i]);
	return 0;
}
