#include<stdio.h>
#include<conio.h>
#include<string.h>
char b[20][20];
int c[20][20];
char x[20],y[20];
int i,j,m,n;
void lcs()
{
	m=strlen(x);
	n=strlen(y);
	
	for(i=0;i<=m;i++)
		c[i][0]=0;
		
	for(i=0;i<=n;i++)
		c[0][i]=0;
		
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(x[i-1]==y[j-1])
			{
				c[i][j]=c[i-1][j-1]+1;
				b[i][j]='c';
			}
			else if(c[i-1][j]>=c[i][j-1])
			{
				c[i][j]=c[i-1][j];
				b[i][j]='u';
			}
			else
			{
				c[i][j]=c[i][j-1];
				b[i][j]='l';
			}
		}
	}
}

void Ans(int i,int j)
{
	if(i==0||j==0)
		return;
		
	if(b[i][j]=='c')
	{
		Ans(i-1,j-1);
		printf("%c",x[i-1]);
	}
	else if(b[i][j]=='u')
		Ans(i-1,j);
	
	else
		Ans(i,j-1);
}

int main()
{
	printf("\nEnter string A:");
	scanf("%s",x);
	
	printf("\nEnter string B:");
	scanf("%s",y);
	
	lcs();
	printf("\nA=%s",x);
	printf("\nB=%s",y);
	printf("\n\nLongest Common Subsequence is:");
	Ans(m,n);
	
	return 0;
}
