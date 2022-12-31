#include<stdio.h>
#include<string.h>

int main()
{
	int ch,l;
	char s1[50],s2[50];
	
	printf("1.length of a string:\n");
	printf("2.copy astring:\n");
	
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:printf("enter a string-->\n");
		       scanf("%s",&s1);
		       l=strlen(s1);
		       printf("the length of string is--->%d",l);
		       
		       break;
        
        case 2:printf("enter a string--->");
        		scanf("%s",&s1);`
        		
        		strcpy(s2,s1);
        		
        		puts(s2);
        		
        		break;
	}
}
