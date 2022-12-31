#include<stdio.h>

void mul(int a,int b);

int main()
{
	int a,b;
	printf("enter first number-->");
	scanf("%d",&a);
	printf("enter second number-->");
	scanf("%d",&b);
	
	mul(a,b);
}
void mul(int a,int b)
{
	int mul;
	mul=a*b;
	printf("multiplication=%d",mul);
}
