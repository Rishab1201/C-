								//SLIP NO.19
//Q.1

#include<stdio.h>

int main()
{
	int i,j,n;
	
	printf("Enter number of rows:");
	scanf("%d",&n);
	
	for(i=n;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{
			printf("*\t");
		}
		printf("\n");
	}
}
