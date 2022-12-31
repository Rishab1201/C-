								//SLIP NO.7
//Q1.

#include<stdio.h>
#include<math.h>

int main()
{
	int x1,x2,y1,y2,ans;
	
	printf("Enter the co-ordinates x1::");
	scanf("%d",&x1);
	
	printf("Enter the co-ordinates x2::");
	scanf("%d",&x2);
	
	printf("Enter the co-ordinates y1::");
	scanf("%d",&y1);
	
	printf("Enter the co-ordinates y2::");
	scanf("%d",&y2);
	
	ans=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
	
	printf("The distance between two co-ordinates are===>%d",ans);
}
