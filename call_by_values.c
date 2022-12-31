#include<stdio.h>

int main()
{
	int a,b;
	printf("enter the 1st value:");
	scanf("%d",&a);
	
	printf("enter the 2nd value:");
	scanf("%d",&b);
	
	printf("values before change-->%d\n%d\n",a,b);
	 change (a,b);
	 
	printf("value after change-->%d\n%d\n",a,b); 
}
	int change(int a,int b)
	{
		int temp;
		
		temp=a;
		a=b;
		b=temp;
	
	}

