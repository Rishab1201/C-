#include<stdio.h>

void factorial(int n);

void main()
{
	int n;
	printf("Enter a no:");
	scanf("%d",&n);
	
	factorial(n);
}
void factorial(int n)
{
	int fact=1,i;
	
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("factorial=%d",fact);
}
