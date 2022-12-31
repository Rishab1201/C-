#include<stdio.h>
int sub(int a,int b);

int main()
{
	int a,b,subt;
	printf("Enter a number:");
	scanf("%d",&a);
	
	printf("Enter a number:");
	scanf("%d",&b);
	
	subt=sub(a,b);
	printf("subtraction=%d",subt);
	
}
int sub(int a,int b)
{
	int subt;
	
	subt=a-b;
	return subt;
	
}
