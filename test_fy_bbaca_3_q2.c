#include<stdio.h>

int main()
{
	int a,n,sum=0,temp,i;
	
	printf("Enter a number:\n");
	scanf("%d",&n);
	
	
	for(i=0;i<n;i++)
	{
		a=n%10;
		sum=sum+(a*a*a);
		n=n/10;
	}
	temp=sum
	if(n==temp)
	{
		printf("armstrong number-->%d",sum);
	}
	else
	{
		printf("not a armstrong number-->%d",sum);
	}
}
