                                  // SLIP NO.4
//Q1.

#include<stdio.h>

int main()
{
	int hm,am,a,b;
	
	printf("enter the 1st number:");
	scanf("%d",&a);
	
	printf("enter the 2nd number:");
	scanf("%d",&b);
	
	am=(a+b)/2;
	
	printf("the arithmetic mean is--->%d",am);
	
	hm=a*b/(a+b);
	
	printf("\nthe harmonic mean is--->%d",hm);
}
