#include<stdio.h>
#include<conio.h>

union demo{
	int a;
	char b;
	float c;
};

void main()
{
	union demo d;
	int size=sizeof(d);
	
	printf("The size of union=%d\n",size);
	
	
	
}
