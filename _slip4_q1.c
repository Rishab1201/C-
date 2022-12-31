#include<stdio.h>

int fact(int);
int main()
{
	int n,p;
	
	printf("Enter number:\n");
	scanf("%d",&n);
	
	p=fact(n);
	
	printf("factorial:%d",p);
	
}
int fact(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
		
	}
}
