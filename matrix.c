#include<stdio.h>

void main()
{
int a[3][3],i,j,sum=0;

printf("\nenter the element of matrix :");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\nthe display of matrix is:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("\t%d",a[i][j]);
}
printf("\n");
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if(i!=j)
sum=sum+a[i][j];
}
}
printf("sum is :%d",sum);
getch();
}
