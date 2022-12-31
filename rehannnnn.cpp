#include<stdio.h>
int sum(int a,int b);
int main()
{
	int a,b,s=0;
	printf("enter the number->");
	scanf("%d",&a);
	
	printf("enter the number->");
	scanf("%d",&b);
	
	s=sum(a,b);
	printf("the sum is %d",s);
}

  int sum(int a,int b)
  {
  	int s;
  	s=a+b;
  	
  	return s;
  }
  
