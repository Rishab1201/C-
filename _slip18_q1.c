#include<stdio.h>

int main()
{
	FILE *fp,*fp1;
	char ch;
	int cnt=1,del;
	
	printf("Enter the line which you want to delete:\n");
	scanf("%d",&del);
	
	fp=fopen("file1.txt","r");
	fp1=fopen("file2.txt","w");
	
	if(fp==NULL)
	{
		printf("ERROR");
	}
	if(fp1==NULL)
	{
		printf("ERROR");
	}
	
	ch=fgetc(fp);
	
	while(ch!=EOF)
	{
			if(ch=='\n')
			
				cnt++;
				if(del!=cnt)
					putc(ch,fp1);
					ch=getc(fp);
				    
	}

	//ch=fgetc(fp);
	
	//printf("count=%d",cnt);
		
		
		
	fclose(fp);
	fclose(fp1);
	
}
