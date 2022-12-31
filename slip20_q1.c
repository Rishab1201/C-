      								//SLIP NO.20
//Q.1

#include<stdio.h>

int main()
{
	int n,i,j,k;
	
	printf("enter no. of rows:");
	scanf("%d",&n);
	
	k=1;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d\t",k++);
		}
		printf("\n");
	}
}
