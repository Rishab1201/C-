#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE*fp;
	
	int cnt;
	char ch;
	
	fp=fopen("top.txt","r");
	
	if(fp==NULL)
	{
		printf("error in opening file\n");
	}
	cnt=1;
	while(ch=fgetc(fp)!=EOF)
	{
		ch = fgetc(fp);
		printf("%c",ch);
		if(ch=='\n')
		{
			cnt++;
		}
	}
	ch=fgetc(fp);
	fclose(fp);
	printf("number of line is a file=%d",cnt);
}
