#include<stdio.h>
int main()
{
	int n,x,sum=0,i,j,mul=1;
	printf("enter the upper limit of series:");
	scanf("%d",&n);
	
	printf("enter the value of x:");
	scanf("%d",&x);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
	      {
	      	mul=mul*x;
	      	sum+= mul/i;	      	
		  }
    }
    
    printf("sum is %d",sum);
    
    
	
	
}
