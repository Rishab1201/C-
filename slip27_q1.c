							//SLIP NO.27
//Q.1

#include<stdio.h>
#include<string.h>

int main()
{
	char a[5],n;
	int cnt=0,i=0;
	
	printf("Enter a string:");
	scanf("%s",&n);
	
	while(a[i]!='\0')
	{
		if(a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U')
		{
			cnt++;
		}
		i++;
	}
	printf("vowel=%d",cnt);
}
