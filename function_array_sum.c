#include<stdio.h>

void sum(int a[]);

int main()
{
	int a[10],i;
	
	printf("Enter 10 numbers:-\n");
	
	for(i=1;i<=10;i++)
	{
		scanf("%d",&a[i]);
	}
	
	
	sum(a);
	
}
void sum(int a[])
{
	int s,avg,i;
	
	for(i=1;i<=10;i++)
	{
		s=s+a[i];
	}
	printf("Sum=%d\n",s);
	
	avg=s/10;
	
	printf("Average=%d\n",avg);
	
}


