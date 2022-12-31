// accepting of an array in function.

#include<stdio.h>

void display(int*a),accept(int*a);

int main()
{
	int a[10];
	
	accept (a);
	display (a);
	
}

void accept(int*a)
{
	int i;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
}
void display(int*a)   // display of an array in the function.
{
	int i;
	for(i=0;i<10;i++)
	{
		printf("%d\n",a[i]);
	}
}


