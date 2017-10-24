#include<stdio.h>
#include<conio.h>
struct student
{
	int rollno;
	char name[21];
	int marks;
};
void main()
{
	struct student s;
	clrscr();
	printf("\nEnter student's information:");
	printf("\nEnter roll number:");
	scanf("%d",&s.rollno);
	printf("\nEnter name:");
	scanf("%s",&s.name);
	printf("\nEnter marks:");
	scanf("%d",&s.marks);
	printf("\n\nYour student's information is:");
	printf("\nRoll number:%d",s.rollno);
	printf("\nName:%s",s.name);
	printf("\nMarks:%d",s.marks);
	getch();
}
