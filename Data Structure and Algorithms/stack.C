#include<stdio.h>
#include<conio.h>
#define pf printf
#define sf scanf
#define max 50
int st[max],val,top=-1;
void push();
void pop();
void peek();
void show();
int main()
{
	int option;
	do
	{
		pf("\n1.PUSH");
		pf("\n2.POP");
		pf("\n3.PEEK");
		pf("\n4.DISPLAY");
		pf("\n5.EXIT");
		pf("\nChoose your option:");
		sf("%d",&option);
		switch(option)
		{
			case 1:
				if(top==max-1)
					pf("\nStack overflow...");
				else
					push();
				break;
			case 2:
				if(top==-1)
					pf("\nStack underflow...");
				else
					pop();
				break;
			case 3:
				if(top==-1)
					pf("\nStack is empty...");
				else
					peek();
				break;
			case 4:
				if(top==-1)
					pf("\nStack is empty...");
				else
					show();
		}
	}while(option!=5);
	return 0;
}
void push()
{
	pf("\nEnter value:");
	sf("%d",&val);
	top++;
	st[top]=val;
}
void pop()
{
	pf("\nDeleted value is %d",st[top]);
	top--;
}
void peek()
{
	pf("\nValue is %d",st[top]);
}
void show()
{
	int i;
	for(i=0;i<=top;i++)
		pf("\nValue %d is %d",i+1,st[i]);
}
