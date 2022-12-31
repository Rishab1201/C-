#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char cities[10][100],x[100];
	
	int num,i,j,ch,flag,cmp;
	
	printf("How many cities you want to enter:\n");
	scanf("%d",&num);
	
	
	for(i=0;i<num;i++)
	{
		scanf("%s",&cities[i]);
	}
	
	//for(i=0;i<num;i++)
	//{
	//	printf("%s\n",cities[i]);	
	//}
	
	printf("Enter city to search:\n");
	scanf("%s",&x);
	
	
	
	for(i=0;i<num;i++)
	{
	
		cmp=strcmp(x,cities[i]);
		//printf("%d",cmp);
		if(cmp == 0){
			flag=1;
			break;
		}
		else{
			flag=0;
		}
	}
	
	if(flag == 1){
		printf("Present\n");
	}
	else
	{
		printf("Not present\n");
	}
	
	
	
	
}

