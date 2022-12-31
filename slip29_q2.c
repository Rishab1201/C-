#include<stdio.h>

struct student{
	int roll;
	char name[30];
	int marks;
};
int main()
{
	struct student s[100];
	
	int n,i;
	
	printf("Enter the number of student:\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("Enter the roll no. of student:\n");
		scanf("%d",&s[i].roll);
		
		printf("Enter the name of student:\n");
		scanf("%s",&s[i].name);
		
		printf("Enter the Marks of student:\n");
		scanf("%d",&s[i].marks);
	}
	for(i=1;i<=n;i++)
	{
		printf("Roll no. of student:%d\n",s[i].roll);
		
		printf("Name of student :%s\n",s[i].name);
		
		printf("Marks of student:%d\n",s[i].marks);
	}
}
