#include<stdio.h>
#include<conio.h>

int main()
{
	int a[100][100],r,c,i,j,sum=0,even=0;
	
	clrscr();
	
	printf("enter the value of row::");
	scanf("%d",&r);
	
	printf("enter the value of coloumn::");
	scanf("%d",&c);
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("the entered matrix is::::>\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j)
			{
				sum=sum+a[i][j];
			}
			else
			{
				continue;
			}
		}
	}
	printf("sum of diagonals elements of matrix---->%d\n\n",sum);
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]%2==0)
			{
				even=even+a[i][j];
			}
		}
	}
	printf("sum of all even numbers of matrix----->%d\n",even);

}
