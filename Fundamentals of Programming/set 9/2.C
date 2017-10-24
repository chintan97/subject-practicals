#include<stdio.h>
#include<conio.h>
struct student
{
	int rollno;
	char name[21];
	struct m
	{
		int marks;
	}m;
};
void main()
{
	struct student s[10];
	int n,i,max;
	clrscr();
	printf("\nEnter how many students:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\nEnter information of student %d:",i);
		printf("\nEnter roll number:");
		scanf("%d",&s[i].rollno);
		printf("\nEnter name:");
		scanf("%s",&s[i].name);
		printf("\nEnter marks:");
		scanf("%d",&s[i].m.marks);
	}
	for(i=1;i<=n;i++)
	{
		printf("\n\nInformation of student %d is:",i);
		printf("\nRoll number:%d",s[i].rollno);
		printf("\nName:%s",s[i].name);
		printf("\nMarks:%d",s[i].m.marks);
	}
	max=s[1].m.marks;
	for(i=2;i<=n;i++)
	{
		if(s[i].m.marks>max)
			max=s[i].m.marks;
	}
	printf("\n\nMaximum marks is %d",max);
	getch();
}