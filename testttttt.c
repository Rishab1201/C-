#include<stdio.h>

int  main()
{
	int p,l,cp,sp;
	
	printf("Enter cost price:");
	scanf("%d",&cp);
	
	printf("Enter selling price:");
	scanf("%d",&sp);
	
	if(cp>sp)
	{
		l=cp-sp;
		printf("loss:%d",l);
	}
	else if(sp>cp)
	{
		p=sp-cp;
		printf("profit:%d",p);
	}
	else
	{
		printf("no loss...no profit");
	}
}
