									//SLIP NO.8
//Q.1

#include<stdio.h>

int main()
{
	int amt,a,b,c,r;
	
	printf("Enter the amount which you want to withdraw::::");
	scanf("%d",&amt);
	
	a=amt/10;
	
	printf("10rs notes-->%d\n",a);
	
	r=amt%10;
	
	b=r/5;
	
	printf("5rs note-->%d\n",b);
	
	b=r%5;
	c=b;
	
	printf("1rs notes-->%d\n",c);
}
