#include<stdio.h>

struct stud
{
	int id;
	char name[20];
	int maths;
	int sci;
	int hindi;
	float total;
	float per;
	
};
int main()
{
	struct stud s;
	
	printf("enter id-->");
	scanf("%d",&s.id);
	
	printf("enter name-->");
	scanf("%s",&s.name);
	
	printf("enter marks of maths-->\n");
	scanf("%d",&s.maths);
	
	printf("enter marks of hindi-->\n");
	scanf("%d",&s.hindi);
	
	printf("enter marks of science-->\n");
	scanf("%d",&s.sci);
	
	s.total=s.maths+s.hindi+s.sci;
	
	s.per=s.total*100/300;
	
	printf("id-->%d\n",s.id);
	
	printf("name-->%s\n",s.name);
	
	printf("Total-->%f\n",s.total);
	
	printf("percentage-->%f\n",s.per);
	
	
}
