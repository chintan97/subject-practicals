#include<stdio.h>
#include<conio.h>
int min(int x,int y)
{
	if(x>y)
		return y;
	else
		return x;
}
int main()
{
	int A[4];
	int c[20][20];
	int i,j,n=9;
	A[1]=1;
	A[2]=4;
	A[3]=6;
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=n;j++)
		{
			c[i][j]=0;
		}
	}
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1)
				c[i][j]=1+c[1][j-A[1]];
			else if(j<A[i])
				c[i][j]=c[i-1][j];
			else 
				c[i][j]=min(c[i-1][j],1+c[i][j-A[i]]);
		}
	}
	printf("\n\nTotal Required coins=%d",c[3][n]);
	return 0;
}
