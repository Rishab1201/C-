#include<stdio.h>
#include<stdlib.h>

struct book{
	int bno;
	char bname[30];
	int price;
};
int main()
{
	struct book b1[10];
	int n,ch,i,max=0;
	
	printf("Enter no of books-\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("Enter Book no-\n");
		scanf("%d",&b1[i].bno);
		
		printf("Enter Book name-\n");
		scanf("%s",&b1[i].bname);
		
		printf("Enter Book price-\n");
		scanf("%d",&b1[i].price);
		
		if(b1[i].price>max)
		{
			max=b1[i].price;
		}
	}
	
	while(1)
	{
	
		printf("1:Display Book detail whose price is greater than 500\n\n");
		printf("2:Display maximum amount\n\n");
		printf("3:Exit\n");
		
		printf("Enter you choise-\n");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
				for(i=1;i<=n;i++)
				{
					if(b1[i].price>500)
					{
						printf("Book No.-%d\n",b1[i].bno);
						printf("Book name-%s\n",b1[i].bname);
						printf("price-%d\n",b1[i].price);
						
					}
				}
				break;
			case 2:
				for(i=1;i<=n;i++)
				{
					if(b1[i].price==max)
					{
						printf("Book No.-%d\n",b1[i].bno);
						printf("Book name-%s\n",b1[i].bname);
						printf("price-%d\n",b1[i].price);
					}
				}
				break;
				
			case 3:exit(0);
		}
	}
}
