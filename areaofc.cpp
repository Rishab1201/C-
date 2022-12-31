#include<stdio.h>
int area(int r);
int main()
{
	int r,cir;
	printf("enter radius-->");
	scanf("%d",&r);
	
	cir=area(r);
	printf("area of circle is %d",cir);
}

int area(int r)
{
	int cir;
	cir=3.14*r*r;
	return cir;
}
