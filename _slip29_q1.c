#include<stdio.h>

int mul(int);

int main()
{
	int n,p;
	
	printf("Enter number:\n");
	scanf("%d",&n);
	
	p=mul(n);
	
	printf("factorial:%d",p);
}
int mul(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return n*mul(n-1);
	}
}
