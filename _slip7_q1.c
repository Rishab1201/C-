#include<stdio.h>
#include<conio.h>

int main()
{
	int x,y;
	int *ptr1,*ptr2,temp;
	
	printf("Enter the value of x and y\n");
	scanf("%d%d",&x,&y);
	
	ptr1=&x;
	ptr2=&y;
	
	temp=*ptr2;
	*ptr2=*ptr1;
	*ptr1=temp;
	
	printf("x=%d\ny=%d\n",x,y);
	getch();
}
