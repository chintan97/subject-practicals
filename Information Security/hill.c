//Hill Cipher
#include<stdio.h>
#include<string.h>
int k[10][10];
int n;
void encrypt(char[]);
int main()
{
	char pt[30];
	int i,j,l,len,temp,temp1=0;
	char str[10];
	printf("\nEnter plain text:");
	gets(pt);
	len=strlen(pt);
	printf("\nEnter n for n*n matrix of key:");
	scanf("%d",&n);
	printf("\nEnter key starting from row:");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&k[i][j]);
		}
	}
	
	//Removing space from plain text
	temp=0;
	while(pt[temp]!=NULL)
	{
		if(pt[temp]==' ')
		{
			l=strlen(pt);
			temp1=temp;
			while(pt[temp1]!=NULL)
			{
				pt[temp1]=pt[temp1+1];
				temp1++;
			}
			l--;
		}
		temp++;
	}
	len=strlen(pt);
	
	//Adding z/y/x... if needed in plain text
	temp1=0;
	temp=len%n;
	temp=n-temp;
	if(temp!=0 && len!=n)
	{
		while(temp!=0)
		{
			pt[len+temp-1]=122-temp1;
			temp1++;
			temp--;
		}
	}
	pt[len+temp1]=NULL;
	i=0;
	//printf("\n%s",pt);
	
	//Passing text to function
	printf("\nDecrypted text:");
	while(pt[i]!=NULL)
	{
		j=0;
		while(j<n)
		{
			str[j]=pt[i];
			i++;
			j++;
		}
		str[j]=NULL;
		encrypt(str);
	}
	return 0;
}
void encrypt(char y[])
{
	int a,b;
	int dec;
	int x[n];
	for(a=0;a<n;a++)
	{
		x[a]=y[a]-97;
	}
	
	for(a=0;a<n;a++)
	{
		dec=0;
		for(b=0;b<n;b++)
		{
			dec+=k[a][b]*x[b];	
		}
		dec=dec%26;
		printf("%c",dec+65);
	}
}
