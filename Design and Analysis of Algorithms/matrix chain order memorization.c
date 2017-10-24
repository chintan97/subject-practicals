#include<stdio.h>
#include<limits.h>
int MCO(int M[],int i,int j)
{
	if(i==j)
		return 0;
	int min=INT_MAX;
	int count,k;
	for(k=i;k<j;k++)
	{
		count= MCO(M,i,k)+MCO(M,k+1,j)+ M[i-1]*M[j]*M[k];
		if(count<min)	
			min=count;	
	}
	return min;
}
int main()
{
	int arr[]={5,4,6,2,7};
	int n=5;
	printf("\nAnswer is %d",MCO(arr,1,n-1));
	return 0;
}

