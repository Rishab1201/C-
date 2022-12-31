#include<stdio.h>

int main()
{
	int a[100][100],b[100][100],i,j,r,c;
	
	printf("Enter number:\n");
	scanf("%d",&r);
	printf("Enter number:\n");
	scanf("%d",&c);
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("\t%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("Enter array B:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("\t%d",&b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\t%d",b[i][j]);
		}
		printf("\n");
	}
}
