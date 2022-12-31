#include<stdio.h>
#include<conio.h>

int sum(int ,int);
int main()
{
	int a,b;
	
	printf("Enter number 1:\n");
	scanf("%d",&a);
	
	printf("Enter number 2:\n");
	scanf("%d",&b);
	
	sum(a,b);
}
int sum(int a,int b)
{
	int c;
	
	c=a+b;
	
	printf("sum=%d",c);
}
