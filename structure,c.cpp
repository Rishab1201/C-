#include<stdio.h>

struct student
{
	char name[50];
	int roll;
	int m1;
	int m2;
	int avg;
};

int main()
{
	struct student s[5];
	int avg;
	int i;
	char n[50];
	printf("enter details of 5 student:\n");
	
	for(i=0;i<5;i++)
	{
		printf("Name:-");
		scanf("%s",&s[i]->name);
		//strcpy(s[i]->name,n);
		
		printf("Roll:-\n");
		scanf("%d",&s[i]->roll);
		
		printf("Marks1:-\n");
		scanf("%d",&s[i]->m1);
		
		printf("Marks2:-\n");
		scanf("%d",&s[i]->m2);
	}
	//DISPALY
	
	for(i=0;i<5;i++)
	{
		printf("NAME-->%s\n",s[i]->name);
		
		printf("ROLL-->%d\n",s[i]->roll);
		
		avg=(s[i]->m1+s[i]->m2)/2;
		
		printf("AVG:-%d",avg);
	}
}
