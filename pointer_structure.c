#include<stdio.h>

struct person
{
	int age;
	char name[30];
};
int main()
{
	struct person *ptr,p;
	ptr=&p;
	
	printf("Enter Age-\n");
	scanf("%d",&ptr->age);
	
	getchar();
	printf("Enter name-\n");
	gets(ptr->name);//like scanf.
	
	printf("Age-%d\n",ptr->age);
	puts(ptr->name);//like printf
}
