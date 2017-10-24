#include<stdio.h>
#include<conio.h>
#define x1(x2,x3) (17-x2+(2*x3))/20
#define x2(x1,x3) (-18-(3*x1)+x3)/20
#define x3(x1,x2) (25-(2*x1)+(3*x2))/20
int main()
{
	float i,x,y,z,xt,yt,zt;
	x=x1(0,0);
	y=x2(0,0);
	z=x3(0,0);
	do
	{
		xt=x;
		yt=y;
		zt=z;
		x=x1(yt,zt);
		y=x2(xt,zt);
		z=x3(xt,yt);
	}while(x!=xt && y!=yt && z!=zt);
	printf("\n\nSolution is x=%f\t y=%f\t z=%f",x,y,z);
	return 0;
}
