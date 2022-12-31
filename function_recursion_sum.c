#include<stdio.h>
int sum(int n);

int main()
{
	int n,p;
	printf("Enter a number:\n");
	scanf("%d",&n);
	
	p=sum(n);
	
	printf("Sum=%d",p);
}
int sum(int n)
{
	if(n==0)
	{
		return 0;
	}
	else
	{
		return n%10+sum(n/10);
	}
}
