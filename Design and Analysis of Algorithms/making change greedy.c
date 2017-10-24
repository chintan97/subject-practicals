#include<stdio.h>
#include<conio.h>
int main()
{
	int S=9,sum=0;
	int C[3]={1,4,6};
	int i=2,count=0,temp;
	printf("\n\nNeeded coins are:");
	do
	{
		temp=C[i];
		//printf("\n%d",temp);
		if((temp+sum)<=S)
		{
			sum+=temp;
			printf(" %d ",temp);
			count++;
		}
		else
			i--;
	}while(sum!=S);
	printf("\nTotal coins=%d",count);
	return 0;
}
