#include<stdio.h>

struct student{
	int roll;
	char name[30];
	int marks;
};
int main()
{
	struct student s[3];
	
	int i;
	int max=0;
	int min=0;
	
	for(i=1;i<=3;i++)
	{
		printf("Enter roll no of student:\n");
		scanf("%d",&s[i].roll);
		
		printf("Enter name of student:\n");
		scanf("%s",&s[i].name);
		
		printf("Enter marks of student:\n");
		scanf("%d",&s[i].marks);
		
		if(s[i].marks>max)
		{
			max=s[i].marks;
		}
		else
		{
			min=s[i].marks;
		}
	}
	//printf("MAX-%d\n",max);
	
	//printf("MIN-%d\n",min);
	
	for(i=1;i<=3;i++)
	{
	
		if(max==s[i].marks)
		{
			printf("Roll no of student:%d\n",s[i].roll);
			printf("name of student:%s\n",s[i].name);
			printf("Marks of student:%d\n",s[i].marks);
		}
	}
	printf("MINIMUM MARKS-\n");
	
	for(i=1;i<=3;i++)
	{
	
		if(min==s[i].marks)
		{
			printf("Roll no of student:%d\n",s[i].roll);
			printf("name of student:%s\n",s[i].name);
			printf("Marks of student:%d\n",s[i].marks);
		}
	}
}
