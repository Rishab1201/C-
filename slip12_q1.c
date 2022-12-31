								//SLIP NO.12
//Q.1

#include<stdio.h>

int main()
{
	int r,n,sum=0;
	
	printf("Enter the numbers:");
	scanf("%d",&n);
	
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("The sum of numbers is---->%d",sum);
}
