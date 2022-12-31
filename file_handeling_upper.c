#include<stdio.h>

int main()
{
	FILE *fp,*fp1;
	char ch;
	
	char temp;
	
	fp=fopen("rishab.txt","r");
	fp1=fopen("rish.txt","w");
	
	if(fp==NULL || fp1 == NULL)
	{
		printf("Error in opening file\n");
	}
	while(1)
	{
		
		ch=fgetc(fp);
		if(ch == EOF)
		{
			break;
		}
		
		//printf("%c",ch);
		
		temp=ch-32;
		
		fputc(temp,fp1);
		
		printf("%c",temp);	
	}
}
