                              //SLIP NO.3
//Q1.

#include<stdio.h>

int main()
{
	float cel,k,fah;
	
	printf("enter valud of farenhite:\n");
	scanf("%f",&fah);
	
	cel=(0.55)*(fah-32);
	
	printf("celcius-->%f\n",cel);
	
	k=cel+273.5;
	
	printf("kelvin--->%f",k);
}
