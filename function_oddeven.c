#include<stdio.h>
void ode(int);

void main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	
	ode(n);
	
}
void ode(int n)
{
	if(n%2==0)
	{
		printf("even=%d",n);
	}
	else
	{
		printf("odd=%d",n);
	}
}
