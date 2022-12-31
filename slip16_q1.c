								//SLIP NO.16
//Q.1

#include<stdio.h>

int main()
{
	int x,y,pow=1,i;
	
	printf("Enter the number:");
	scanf("%d",&x);
	
	printf("Enter the power:");
	scanf("%d",&y);
	
	
	for(i=0;i<y;i++)
	{
		pow=pow*x;
	}
	printf("ANS:-%d",pow);
}
