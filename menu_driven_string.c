#include<stdio.h>
#include<string.h>

int main()
{
	int ch,l;
	char s1[50],s2[50];
	
	while(1)
	{
		printf("1.length of a string\n");
		printf("2.copy a string\n");
		printf("3.convert into upper case\n");
		printf("4.string concatenate\n");
		printf("5.find accourrences of string\n");
		printf("6.EXIT\n");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:printf("1.LENGTH OF A STRING:\n");
			
			       printf("enter a string-->\n");
		       
			scanf("%s",&s1);
		       l=strlen(s1);
		       printf("the length of string is--->%d\n",l);
		       
		       break;
		           
		    case 2:printf("2.copy a string\n");
		    
			       printf("enter a string:\n");
		           scanf("%s",&s1);
		           
		           strcpy(s2,s1);
		           printf("copied-->\n");
		           puts(s2);
		           
		           break;
		           
		    case 3:printf("3.CONVERT INTO A UPPER CASE:\n");
		    
			       printf("enter a string:\n");
		           scanf("%s",&s1);
		           
		           strupr (s1);
		           puts(s1);
		           
		           break;
		        
		    case 4:printf("4.STRING CONCATENATE\n");
		    
		           printf("enter a string:\n");
		           scanf("%s",&s1);
		           
		           strstr(s2,s1);
		           puts(s2);
		           
		           break;
		    
		    case 5:printf("5.FIND OCCOURRENCES OF STRING\n");
		     
		           printf("enter a string:\n");
		           scanf("%s",&s1);

					printf("enter a string:\n");
		           scanf("%s",&s2);	
				   	           
		           strstr(s2,s1);
		           printf("%s",s2);
		           
		           break;
		           
		    case 6: exit(1);
		}
	}
}
