//WRITE A PROGRAM TO ACCEPT A NUMBER AND SUM OF NUMBER OF DIGIT

#include<stdio.h>

int main()
{
	int n,i,sum=0,r;
	
	printf("Enter the numbers:\n");
	scanf("%d",&n);
	
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("sum=%d",sum);

}
