#include<stdio.h>

int main()
{
	int a[100],i,j,b[100],c[100],k,temp=0,n3;
	int n,d;
	
	printf("Enter elements of array--->");
	scanf("%d\n",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		c[i]=a[i];
	}
	
	printf("Enter elements of b array--->");
	scanf("%d\n",&d);
	
	k=i;
	
	for(i=0;i<d;i++)
	{
		scanf("%d",&b[i]);
		c[k]=b[i];
		k++;
	}
	
	printf("\nThe new array after merging is:\n");
	
	for(i=0;i<k;i++)
	{
		printf("%d\n",c[i]);
	}
	n3=n+d;
	
	printf("\n After sorting\n");
	
	for(i=0;i<n3;i++)
	{
		for(j=i+1;j<n3;j++)
		{
			if(c[i]<c[j])
			
			temp=c[i];
			c[i]=c[j];
			c[j]=temp;
		}
	}
	
	for(i=0;i<n3;i++)
	{
		printf("%d",c[i]);
	}
	
	
}
