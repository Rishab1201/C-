									//SLIP NO.15
//Q.1
#include<stdio.h>

int main()
{
	int n,i,sum=0;
	
	printf("Enter the number:");
	scanf("%d",&n);
	
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(n==sum)
	{
		printf("The entered number is a perfect number-->%d",n);
	}
	else
	{
		printf("The entered numbr is not a perfect number-->%d",n);
	}
}
