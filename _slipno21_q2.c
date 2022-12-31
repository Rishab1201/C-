#include<stdio.h>
#include<conio.h>

struct student{
	
	char name[30];
	int roll;
	
	struct date{
		int d;
		int m;
		int y;
	}d,ad;
};

void main()
{
	struct student s[20];
		
	int i,j,r=0,n;
	
	printf("Enter the numbr of student:\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("Enter the roll no of student:\n");
		scanf("%d",&s[i].roll);
		
		printf("Enter name of student:\n");
		scanf("%s",s[i].name);
		
		printf("Enter birthdate of student:\n");
		scanf("%d %d %d",&s[i].d.d,&s[i].d.m,&s[i].d.y);
		
		printf("Enter addmission date of student:\n");
		scanf("%d %d %d",&s[i].ad.d,&s[i].ad.m,&s[i].ad.y);
		
		
	}
	
	for(i=1;i<=n;i++)
	{
		printf("roll no.-%d\n",s[i].roll);
		
		printf("Name of student-%s\n",s[i].name);
		
		r=s[i].ad.y-s[i].d.y;
		
		printf("age of student at time of addmission-%d\n",r);
	}
}
