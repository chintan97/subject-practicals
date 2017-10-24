#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[100],i=0,n,key,flag=0;
	char line[6];
	FILE *fp=fopen("test.txt","r");
	while(fgets(line,sizeof(line),fp)!=NULL)
	{
		arr[i++]=atoi (line);
	}
	n=i;
	printf("\nYour data is:");
	for(i=0;i<n;i++)
		printf("\n%d",arr[i]);
	printf("\nEnter elements to find:");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			printf("\n\nYour value %d is at position %d",key,i);
			flag++;
			break;
		}
	}
	if(flag==0)
		printf("\n\nYour value not found...");
	return 0;
}
