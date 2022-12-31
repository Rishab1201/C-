#include<stdio.h>

struct stud
{
	char name[30];
	int roll;
	int marks[3];
	float per;
};

int main()
{
	struct stud s[10];
	int n,i,j,total=0;
	
	printf("Enter no. of students--\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("Enter name of student- %d\n",i);
		scanf("%s",&s[i].name);
		
		printf("Enter roll no. of student-%d\n",i);
		scanf("%d",&s[i].roll);
		
	printf("Enter marks of 3 subject-\n");
		
	for(j=1;j<=3;j++)	
	{
		printf("Marks of subject-\n",j);
		scanf("%d",&s[i].marks[j]);
		
		total=total+s[i].marks[j];
		
    }
    printf("Total Marks-%d\n",total);
    s[i].per=(total*100)/300;
    
	}
	
	for(i=1;i<=n;i++)
	{
		if(s[i].per>70)
		{
			printf("List of students scoring 70%% Marks-\n");
			
			printf("\n Name-%s\n",s[i].name);
			
			printf("\n Roll No.-%d\n",s[i].roll);
			
			printf("\n percentage-%f\n",s[i].per);
		}
		
	}
}
