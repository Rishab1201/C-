								//SLIP NO.11
//Q.1

#include<stdio.h>

int main()
{
	int sp,cp,l,p;
	
	printf("Enter selling price:");
	scanf("%d",&sp);
	
	printf("Enter cost price:");
	scanf("%d",&cp);
	
	if(sp>cp)
	{
		p=sp-cp;
		printf("its profit--->%d",p);
	}
	else if(cp>sp)
	{
		l=cp-sp;
		printf("its loss--->%d",l);
	}
	else
	{
		printf("no profit..no loss...");
	}
}
