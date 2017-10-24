#include<stdio.h>
#include<conio.h>
#include<string.h>
struct employee
{
	char name;
	int salary;
}e;
void main()
{
	void input();
	void output();
	clrscr();
	input();
	output();
	getch();
}
void input()
{
	printf("\nEnter name:");
	scanf("%s",&e.name);
	printf("\nEnter salary:");
	scanf("%d",&e.salary);
}
void output()
{
	printf("\nName:%s",e.name);
	printf("\nSalary:%d",e.salary);
}