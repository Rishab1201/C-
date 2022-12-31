#include<stdio.h>

int arm(int n);

int main()
{
	int n;
	
	printf("enter a number:");
	scanf("%d",&n);
	
	arm(n);
	
}
int arm(int n)
{
	int val,sum,a;
	val=n;
	sum=0;
	
	while(n>0)
	{
		a=n%10;
		sum=sum+(a*a*a);
		n=n/10;
	}
	if(val==sum)
	{
		printf("it is a armstrong number--->%d",val);
    }
    else
    {
	printf("it is not a armstrong number--->%d",val);
    }
}
