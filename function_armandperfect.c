#include<stdio.h>
void arm(int n);
void perf(int n);

void main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	
	
	arm(n);
	perf(n);
}
void arm(int n)
{
	int r,t,sum,i;
	t=n;
	for(;n>0;)
	{
	r=n%10;
	sum=sum+(r*r*r);//to find armstrong number.
	n=n/10;
	}
	if(t==sum)
	{
		printf("armstrong number\n");
	}
	else
	{
		printf("not armstrong number\n");
	}
}
void perf(int n)
{
	int sum=0,i;
	
	for(i=1;i<n;i++)
	{
	if(n%i==0)
	{
	sum=sum+i;//to find perfect number
	}
	
    }
    
    if(n==sum)
    {
    printf("perfect number\n");
	}
	else
	{
	printf("its prime number\n");
	}
   
}
