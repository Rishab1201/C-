#include<stdio.h>

int main()
{
	int a,i,flag=1;
	
	printf("enter a number:");
	scanf("%d",&a);
	
	for(i=2;i<a;i++)
	{
		if(a%i==0)
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
	{
		printf("the entered number is prime number");
	}
	else
	{
		printf("the entered number is not a prime number");
	}
}
