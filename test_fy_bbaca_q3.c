#include<stdio.h>

void test (int*a);

int main()
{
	int x=50;
	test(&x);
	printf("%d",x);
}
void test (int*a);
{
	*a=*a+50;
}
