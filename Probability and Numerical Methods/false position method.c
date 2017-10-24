#include<stdio.h>
#include<conio.h>
#define F(x) ((x*x*x*x)-x-10)
int main()
{
	float temp,x=0,y,lb,ub,pre1,x0,x1,fx0,fx1;
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
	x1=ub;
	do
	{
		temp=x;
		fx0=F(x0);
		fx1=F(x1);
		x=((x0*fx1)-(x1*fx0))/(fx1-fx0);
		x0=x;
	}while(temp!=x);
	printf("\nReal root is:%f",x);
	return 0;
}
