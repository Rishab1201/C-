							//SLIP NO.23
//Q.1

#include<stdio.h>

int main()
{
	int a[10],n,i,sum=0;
	
	printf("Enter the number of elements:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
		sum=sum+a[i];
	}
	printf("The sum of elements are-->%d",sum);
}
