#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp1;
	FILE *fp2;
	
	char ch;
	fp1=fopen("f1.txt","r");
	
	if(fp1==NULL)
	{
		printf("ERROR:in opening file");
	}
	fp2=fopen("f2.txt","w");
	if(fp2==NULL)
	{
		exit(0);
	}
	while(1)
	{
		if(feof(fp1))
		{
			break;
		}
		else
		{
			ch=fgetc(fp1);
			fputc(ch,fp2);
		}
	}
	fclose(fp1);
	fclose(fp2);
}
