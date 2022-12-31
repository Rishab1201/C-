#include<stdio.h>
#include<conio.h>

struct employee{
	
	int id;
	char name[20];
	int sal;
};

int main()
{
	struct employee e1[30];
	
	int n,i,ch,d;
	
	printf("Enter number of employee:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("Enter ID of employee-%d\n",i);
		scanf("%d",&e1[i].id);
		
		getchar();
		
		printf("Enter Name of employee-\n");
		gets(e1[i].name);
		
		printf("Enter Salary of employee-\n");
		scanf("%d",&e1[i].sal);
	}
	
	printf("1.search employee by ID\n");
	printf("2.Display All Employee\n");
	
	printf("Enter your choise:-\n");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:printf("Enter ID of Employee:\n");
			scanf("%d",&d);
			{
				for(i=1;i<=n;i++)
			{
				if(e1[i].id==d)
				{
					printf("Id of Employee- %d \n %d \n",i,e1[i].id);
					
					printf("Name of Employee-\n");
					puts(e1[i].name);
					
					printf("Salary of Employee-%d \n",e1[i].sal);
				}
				else
				{
					printf("%d-ID NOT FOUND",d);
				}
				
			}
			
			break;
			}
			
			
			
		case 2:printf("Details Of All Employees-\n");
		
				{
					for(i=1;i<=n;i++)
				{
					printf("Id of Employee- %d \n %d \n",i,e1[i].id);
					
					printf("Name of Employee-\n");
					puts(e1[i].name);
					
					printf("Salary of Employee-%d \n",e1[i].sal);
					
				}
				
				break;
				}
				
			
	}
	
	
}
