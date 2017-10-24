#include<stdio.h>
#include<conio.h>
int main()
{
	int a=10;
	int *p;
	
	p=&a;
	printf("\n%d, %d, %x",a,*p,&a);
	return 0;
}
