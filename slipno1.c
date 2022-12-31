#include<stdio.h>
#include<stdlib.h>

struct emp{
	int id; 
	char name[30];
	int salary;
};
int main()
{
	struct emp e1[10];
	int i,n,ch,id;
	
	printf("Enter no.of emplyoees-\n");
	scanf("%d",&n);
	
	
	for(i=1;i<=n;i++)
	{
		printf("Enter id of employee-%d\n",i);
		scanf("%d",&e1[i].id);
		
		

		printf("Enter name of employee-%d\n",i);
		getchar();
		gets(e1[i].name);
		
		printf("Enter salary of employee-%d\n",i);
		scanf("%d",&e1[i].salary);
	}
	
	while(1){
	
	printf("1:Search Employee by id\n\n");
	printf("2:Display all employee\n\n");
	printf("3:EXIT\n\n");
	
	printf("Enter your choise-\n");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1: printf("Enter id to be searched---->\n\n");
				scanf("%d",&id);
				
				for(i=1;i<=n;i++)
				{
					if(e1[i].id==id)
					{
							printf("ID of employee---->%d\n",i,e1[i].id);
							printf("Name-n");
							puts(e1[i].name);
							printf("Salary-%d\n",e1[i].salary);
							
					}
			    }
				break;
				
		case 2:printf("Details of All employee---->\n\n");
		
				for(i=1;i<=n;i++)
				{
					printf("ID of employee-%d\n",e1[i].id);
						
						printf("Name-");
						puts(e1[i].name);
						
						printf("Salary-%d\n",e1[i].salary);
					
				}
				break;
		case 3:exit(0);
			
	}
	
    }


}
