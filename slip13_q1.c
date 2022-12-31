								//SLIP NO.13
//Q.1

#include<stdio.h>

int main()
{
	int i,n,sum=0;
	
	printf("Enter the range:");
	scanf("%d",&n);
	
	for(i=1;i<n;i++)
	{
		if(i%2!=0)
		{
			sum=sum+i;
		}
	}
	printf("The sum of odd numbers is-->%d",sum);
}
