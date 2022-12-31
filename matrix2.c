#include<stdio.h>
#include<conio.h>

int main()
{
	int a[100][100],r,c,i,j,sum=0,odd=0;
	
	clrscr();
	
	printf("enter value of row:");
	scanf("%d",&r);
	
	printf("enter value of colounm:");
	scanf("%d",&c);
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("the entered matrix is--->\n");
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
				continue;
			}
			else
			{
				sum=sum+a[i][j];
			}
		}
    }
    printf("sum of non-diagonals is===>%d\n\n",sum);
    
    for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{
    		if(a[i][j]%2==0)
    		{
    			continue;
			}
			else
			{
				odd=odd+a[i][j];
				
			}
    		
		}
	}
	printf("sum of all odd numbers of matrix---->%d\n",odd);
	 
}
