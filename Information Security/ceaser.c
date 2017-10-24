#include<stdio.h>
#include<string.h>
int main()
{
	char pt[50],ct[50],ptd[50];
	int key,i,l,flag=0;
	printf("\nEnter plain text:");
	gets(pt);
	printf("\nEnter key:");
	scanf("%d",&key);
	if(key>26)
		key%=26;
	l=strlen(pt);
	
	//Encryption
	for(i=0;i<l;i++)
	{
		if(pt[i]==32)
		{
			ct[i]=pt[i];
		}
		else if(pt[i]>=97 && pt[i]<=122)
		{
			ct[i]=((pt[i]-97)+key)%26;
			ct[i]+=65;
		}
		else
		{
			flag=1;
			break;
		}
	}
	ct[l]='\0';
	if(flag==0)
		printf("\nEncrypted text:%s",ct);
	else
		printf("\nPlease enter valid plain text");
	
	//Decryption
	if(flag==0)
	for(i=0;i<l;i++)
	{
		if(ct[i]==32)
		{
			ptd[i]=ct[i];
		}
		else if(ct[i]>=65 && ct[i]<=92)
		{
			ptd[i]=(ct[i]-65-key)%26;
			ptd[i]+=97;
		}
	}
	ptd[l]='\0';
	if(flag==0)
		printf("\nDecrypted text:%s",ptd);
	return 0;
}
