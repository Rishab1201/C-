#include<stdio.h>

int main()
{
	int x,y;
	printf("Enter x co-ordinate:");
	scanf("%d",&x);
	
	printf("Enter y co-ordinate:");
	scanf("%d",&y);
	
	if(x>=0&&y>=0)
	{
		printf("The value lies in 1st co-ordinate--->%d:%d\n",x,y);
	}
	if(x<0&&y>=0)
	{
		printf("The value lies in 2nd co-ordinate--->%d:%d\n",x,y);
	}
	if(x<0&&y<0)
	{
		printf("The value lies in 3rd co-ordinate--->%d:%d\n",x,y);
	}
	if(x>=0&&y<0)
	{
		printf("The value lies in 4th co-ordinate--->%d:%d\n",x,y);
	}
}

