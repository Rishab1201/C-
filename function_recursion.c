#include<stdio.h>
#include <conio.h>
#include <stdlib.h>
int mul(int,int);

void main()
{
	 int x,y,p;
	 printf("enter two no:\n");
	 scanf("%d%d",&x,&y);
	 
	 p=mul(x,y);
	 
	 printf("product=%d",p);
	 
	 getch();
 }
int mul(int x,int y)
{
	 int p;
	 if (y==1)
	 {
	  	return (x);
	}
	 else
	 {
	 	return x+mul(x,y-1);
	 }
}
