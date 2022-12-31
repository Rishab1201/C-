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
	
	int n,i,ch;
	
	printf("Enter number of employee:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("Enter employee number-%d\n",i);
		scanf("%d",&e1[i].id);
		
		getchar();
		
		printf("Enter Name of employee-\n");
		gets(e1[i].name);
		
		printf("Enter Salary of employee-\n");
		scanf("%d",&e1[i].sal);
	}
	
	printf("1.Display all employees having salary>5000\n");
	printf("2.Display All Employees\n");
	
	printf("Enter your choise:-\n");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:printf("Employees having salary>5000\n");
			{
				for(i=1;i<=n;i++)
			
				if(e1[i].sal>5000)
				{
					printf("Employee number-%d \n",e1[i].id);
					
					printf("Name of Employee-\n");
					puts(e1[i].name);
					
					printf("Salary of Employee-%d \n",e1[i].sal);
				}
			
			
			else
				{
					printf("NON OF THE EMPLOYEES IS HAVING SALARY >5000");
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
