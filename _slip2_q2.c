#include<stdio.h>
#include<conio.h>

struct student{
	
	int id;
	char name[20];
	float marks;
};

int main()
{
	struct student s[30];
	
	int n,i,ch,d;
	
	printf("Enter number of Student:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("Enter ID of student-%d\n",i);
		scanf("%d",&s[i].id);
		
		getchar();
		
		printf("Enter Name of student-\n");
		gets(s[i].name);
		
		printf("Enter Marks of student-\n");
		scanf("%f",&s[i].marks);
	}
	
	printf("1.search Student by ID\n");
	printf("2.Display All student\n");
	
	printf("Enter your choise:-\n");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:printf("Enter ID of student:\n");
			scanf("%d",&d);
			{
				for(i=1;i<=n;i++)
			{
				if(s[i].id==d)
				{
					printf("Id of student- %d \n %d \n",i,s[i].id);
					
					printf("Name of student-\n");
					puts(s[i].name);
					
					printf("Marks of student-%f \n",s[i].marks);
				}
				else
				{
					printf("%d-ID NOT FOUND",d);
				}
				
			}
			
			break;
			}
			
			
			
		case 2:printf("Details Of All Student-\n");
		
				{
					for(i=1;i<=n;i++)
				{
					printf("Id of Student- %d \n %d \n",i,s[i].id);
					
					printf("Name of Student-\n");
					puts(s[i].name);
					
					printf("marks of Student-%f \n",s[i].marks);
					
				}
				
				break;
				}
				
			
	}
	
	
}
