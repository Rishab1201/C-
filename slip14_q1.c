							//SLIP NO.14
//Q.1

#include<stdio.h>

int main()
{
	int i,n,sum=0,r,temp;
	
	printf("Enter the number:");
	scanf("%d",&n);
	
	temp=n;
	
	for(i=0;i<n;i++)
	{
		r=n%10;
		sum=sum+r*r*r;
		r=n/10;
	}
	if(temp==n)
	{
		printf("The entered number is armstrong number-->%d",temp);
	}
	else
	{
		printf("The entered number is not armstrong number-->%d",temp);
	}
}
