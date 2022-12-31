#include<stdio.h>

int max(int a[]);

int main()
{
	int a[10];
	
	max(a);
	
}
int max(int a[])
{
	int i,max=0;
	for(i=1;i<=10;i++)
	{
		scanf("%d",&a[i]);
		
		if(max<a[i])
		{
			max=a[i];
		}
	}
	printf("Maximum-%d",max);
}
