								//SLIP NO.24
//Q.1

#include<stdio.h>

int main()
{
	int a[10],n,max=0,i;
	
	printf("Enter number of elements:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
		if(a[i]>max);
		{
			max=a[i];
		}
	}
	printf("max=%d",max);
}
