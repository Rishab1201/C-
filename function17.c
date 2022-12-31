#include<stdio.h>

void add(int a,int b);

int main()
{
	int a,b;
		
		printf("Enter no.1-->");
		scanf("%d",&a);
		
		printf("Enter no.2-->");
		scanf("%d",&b);
		
		add(a,b);
}
void add(int a,int b)
{
	int sum;
	sum=a+b;
	printf("%d",sum);
}

