#include<stdio.h>
#include<string.h>

int main()
{
	int ch;
	int a,b,c;
	
	printf("1.add\n");
		printf("2.multiplication\n");
		printf("3.subtraction\n");
		printf("4.division\n");
		printf("5.Exit");
		
	while(1)
	{
		printf("1.add\n");
		printf("2.multiplication\n");
		printf("3.subtraction\n");
		printf("4.division\n");
		printf("5.Exit\n");
		
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:printf("enter the 1st number:");
			       scanf("%d",&a);
			       printf("enter the 2nd number:");
			       scanf("%d",&b);
			       c=a+b;
			       printf("sum=%d\n",c);
			       
			       break;
		    
			case 2:printf("enter the 1st number:");
			       scanf("%d",&a);
			       printf("enter the 2nd number:");
			       scanf("%d",&b);
			       c=a*b;
			       printf("ANS=%d\n",c);
			 
                   break;
                   
            case 3:printf("enter the 1st number:");
			       scanf("%d",&a);
			       printf("enter the 2nd number:");
			       scanf("%d",&b);
			       c=a-b;
			       printf("ANS=%d\n",c);
			       
			       break;
			
			case 4:printf("enter the 1st number:");
			       scanf("%d",&a);
			       printf("enter the 2nd number:");
			       scanf("%d",&b);
			       c=a/b;
			       printf("ANS=%d\n",c);
			       
			       break;
		    
			case 5:exit (0);
		
		}
	}
}
