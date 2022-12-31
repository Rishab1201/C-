#include<stdio.h>

int main()
{
	int p,sum=0,i;
	
	printf("Enter the number:");
	scanf("%d",&p);
	
	for(i=0;i<=p;i++)
	{
		sum=sum+i;
	}
	
	printf("sum=%d",sum);
}
