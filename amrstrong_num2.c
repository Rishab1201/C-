#include<stdio.h>

int main()
{
	int i,a,n,b,sum,val;
	
	printf("enter lower limit:");
	scanf("%d",&n);
	
	printf("enter upper limit:");
	scanf("%d",&b);
	
	
	
	
	for(i=n;i<=b;i++)
	{
		val=i;
		sum=0;
		while(val>0)
		{
			a=val%10;
			sum=sum+(a*a*a);
			val=val/10;
		}
		if(i==sum)
		printf("%d\n",i);
		else
		continue;
	}
}
