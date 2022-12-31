#include<stdio.h>

int main()
{
	int a[100],b,i,cnt=0,val;
	
	printf("enter the elements:");
	scanf("%d",&b);
	
	for(i=0;i<b;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<b;i++)
	{
		printf("\n%d",a[i]);
	}
	printf("\n enter the no. whose occurance you want to know==>");
	scanf("%d",&val);
	
	for(i=0;i<b;i++)
	{
		if(a[i]==val)
		{
			cnt++;
		}
	}
	printf("the %d has occured %d time",val,cnt);
}
