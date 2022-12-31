							//SLIP NO.25
//Q.1

#include<stdio.h>

int main()
{
	int i,n,sum=0,a[10];
	
	printf("Enter number of elements:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
		if(a[i]%2==0)
		{
			sum=sum+a[i];
		}
	}
	printf("Sum of even numbers is-->%d",sum);
}
