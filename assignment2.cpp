#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n,even=0,odd=0,zero=0,r;
	printf("enter n:");
	scanf("%d",&n);
	
	while(n>0)
	{
		r=n%10;
        if(r==0)
    {
    	zero++;
    }
    else if(r%2==0)
    {
    	even++;
	}
	else 
	{
		odd++;
	}
	n=n/10;
   }
   printf("\n even=%d \nodd=%d \nzero=%d",even,odd,zero);
}
