                  // insertion of matrix or displaying matrix
#include<stdio.h>

int main()
{
	int a[100][100],c,r,i,j,sum=0,sum1=0;
	
	printf("enter row number: ");
	scanf("%d",&r);
	
	printf("enter coloumn number:");
	scanf("%d",&c);
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("the entered matrix is-->\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	// adding element of array
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j)           // adding diagonal
			{
				sum=sum+a[i][j];
			}
			else              // adding non-diagonal
			{
				sum1=sum1+a[i][j];
			}
		}
	}
	printf("sum of element of array=%d\n\n",sum+sum1);
	printf("sum of non-diagonals=%d\n\n",sum1);
	printf("sum of digonals=%d\n",sum);
}
