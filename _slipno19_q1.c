#include<stdio.h>

struct employee{
	
	int id;
	char name[20];
	char d1[30];
	char d2[40];
	int sal;
};

int main()
{
	int n,i;
	
	struct employee e[40];
	printf("Enter number of employee-\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("Enter id of employee-\n");
		scanf("%d",&e[i].id);
		
		printf("Enter name of employee-\n");
		scanf("%s",&e[i].name);
		
		printf("Enter designation of employee-\n");
		scanf("%s",&e[i].d1);
		
		printf("Enter department of employee-\n");
		scanf("%s",&e[i].d2);
		
		printf("Enter salary of employee-\n");
		scanf("%d",&e[i].sal);
	}
	
	printf("-----details of employee-----\n");
	
	for(i=1;i<=n;i++)
	{
		printf("ID of employee-%d\n",e[i].id);
		
		printf("Name of employee-%s\n",e[i].name);
		
		printf("Designation of employee-%s\n",e[i].d1);
		
		printf("Department of employee-%s\n",e[i].d2);
		
		printf("Salary of employee-%d\n",e[i].sal);
	}
}
