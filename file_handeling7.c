#include<stdio.h>

int main()
{
	FILE *fp;
	
	char ch;
	
	fp=fopen("rishab.txt","r");
	
	ch=getc(fp);
	
	if((ch>=32 && ch<=47) || (ch>=58 && ch<=64) || (ch>=91 && ch<=96) || (ch>=123 && ch<=126))
		{
			ch=getc(fp);
			while(ch!=EOF)
			{
				ch=getc(fp);
				printf("%c",ch);
			}
		}
	else
	{
		
		printf("\nOoops!theri is no special character in the file");
	}
	
	fclose(fp);
}
