#include<stdio.h>
#include<conio.h>
#define F(x) ((x*x*x)-(3*x)-5)
#define Fd(x) ((3*x*x)-3)
int main()
{
	float temp,x=0,y,lb,ub,pre1,x0,x1,fx0,fx1,fd0,fd1;
	char pre;
	int cnt=0;
	cp:
		temp=F(x);
		if(cnt==0)
		{
			if(temp>0)
			{
				pre='p';
				x++;
				cnt++;
				goto cp;
			}
			else
			{
				pre='n';
				x++;
				cnt++;
				goto cp;
			}
		}
		if(temp>0)
		{
			if(pre=='p')
			{
				pre1=x;
				pre='p';
				x++;
				goto cp;
			}
			else
			{
				lb=pre1;
				ub=x;
			}
		}
		else if(temp<0)
		{
			if(pre=='n')
			{
				pre1=x;
				pre='n';
				x++;
				goto cp;
			}
			else
			{
				lb=x;
				ub=pre1;
			}
		}
	printf("\n\nLower bounf:%f\t Upper bound:%f",lb,ub);
	x0=lb;
	do
	{
		temp=x1;
		fx0=F(x0);
		fx1=Fd(x0);
		x1=x0-(fx0/fx1);
		x0=x1;
	}while(temp!=x1);
	printf("\nReal root is:%f",x1);
	return 0;
}
