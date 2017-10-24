#include<stdio.h>
#include<string.h>
void encrypt(char[],char[]);
void decrypt(char[],char[]);
int main()
{
	char pt[50],k[50];
	int n;
	printf("\nEnter plain text:");
	gets(pt);
	printf("\nEnter key:");
	gets(k);
	encrypt(pt,k);
	return 0;
}
void encrypt(char pt[],char k[])
{
	int l1=strlen(pt);
	int l2=strlen(k);
	char ct[l1];
	int temp;
	int i;
	for(i=0;i<l1;i++)
	{
		if(i>=l2)
		{
			k[i]=k[i-l2];
		}
		if(pt[i]==' ')
		{
			temp=i;
			while(pt[temp]!=NULL)
			{
				pt[temp]=pt[temp+1];
				temp++;
			}
			l1=strlen(pt);
		}
		ct[i]=65+((pt[i]-97)+(k[i]-97))%26;
	}
	ct[i]=NULL;
	printf("\nCipher text:%s",ct);
	decrypt(ct,k);
}
void decrypt(char ct[],char k[])
{
	int l1=strlen(ct);
	int l2=strlen(k);
	char pt[l1];
	int i;
	//printf("\n%s %s %d",ct,k,l1);
	for(i=0;i<l1;i++)
	{
		pt[i]=97+(26+(ct[i]-65)-(k[i]-97))%26;
		//printf("\n%c",pt[i]);
	}
	pt[i]=NULL;
	printf("\nPlain text:%s",pt);
}
