#include<stdio.h>

int main()
{
	int a,b,i,j,flag;
	
	printf("Enter the lower limit::");
	scanf("%d",&a);
	
	printf("Enter the upper limit::");
	scanf("%d",&b);
	
	for(i=a;i<b;i++)
	{
		flag=1;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				flag=0;
				break;	
			}
			
		}
		if(flag==1)
		{
			printf("%d\n",i);
		}	
		
	}
	
	
}
