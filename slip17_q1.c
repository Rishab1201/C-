								//SLIP NO.17
//Q.1

#include<stdio.h>

int main()
{
	int n,i;
	
	printf("Enter the number:");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	{
		printf("%dx%d=%d\n",n,i,i*n);
	}
}
