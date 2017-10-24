#include<stdio.h>
#include<conio.h>
#define R 10
#define C 10
void InMat(int mat[R][C],int n,int ch)
{
	int i,j;
	printf("\nEnter your matrix %c:",ch);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	return;
}
void MulMat(int mat1[R][C],int mat2[R][C],int n)
{
	int i,j,k;
	int out[R][C]={0};
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				out[i][j]+= mat1[i][k]*mat2[k][j];
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			mat1[i][j]=out[i][j];
		}
	}
}
int main()
{
	int matA[R][C],matB[R][C],matC[R][C],matD[R][C],i,j;
	int n;
	printf("\nEnter order of matrices:");
	scanf("%d",&n);
	
	InMat(matA,n,'A');
	InMat(matB,n,'B');
	InMat(matC,n,'C');
	InMat(matD,n,'D');
	
	MulMat(matA,matB,n);
	MulMat(matC,matD,n);
	MulMat(matA,matC,n);
	
	printf("\n\nOutput matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\t%d",matA[i][j]);
		}	
		printf("\n");
	}	
	return 0;
}
