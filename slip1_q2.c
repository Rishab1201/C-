								//SLIP NO.1
//Q.2

#include<stdio.h>

int main()
{
	int i,j,r,c,a[10][10],b[10][10],mul[10][10],k;
	
	printf("Enter the rows:");
	scanf("%d",&r);
	
	printf("Enter the coloumn:");
	scanf("%d",&c);
	
	printf("Enter the elements of A:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the elements of b:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	
	printf("The multiplication of matrix is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			mul[i][j]=0;
			for(k=0;k<c;k++)
			{
				mul[i][j] += a[i][k]*b[k][j];
			}
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",mul[i][j]);
		}
		printf("\n");
	}
}
