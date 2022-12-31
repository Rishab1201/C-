								//SLIP NO.24
//Q.2

#include<stdio.h>

int main()
{
	int i,j,n,k;
	
	printf("Enter number of rows:");
	scanf("%d",&n);
	
	k=1;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d\t",k);
			k=k+2;
		}
		printf("\n");
	}
}
