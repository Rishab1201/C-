#include<stdio.h>

int main()
{
	int a[100],b,i;
	
	printf("enter the element:");
	scanf("%d",&b);
	
	for(i=0;i<b;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<b;i++)
	{
		printf("\n%d",a[i]);
	}
	for(i=0;i<b;i++)
	{
		if(a[i]%2==0)
		{
			printf("\neven=%d",a[i]);
		}
	}
	for(i=0;i<b;i++)
	{
		if(a[i]%2==1)
		printf("odd=%d\n",a[i]);
	}
}
