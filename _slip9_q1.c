#include<stdio.h>

struct demo{
	
	int a;
};

void main()
{
	struct demo d[10];
	int i;
	
	for(i=0;i<10;i++)
	{
		printf("Enter elements:\n");
		scanf("%d",&d[i]);
	}

	
	for(i=0;i<10;i++)
	{
		printf("Elements are :%d\n",d[i]);
		
		printf("address:%d\n",&d[i]);
	}
}
