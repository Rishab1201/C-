#include <stdio.h>

int main()
{
    
    int n1,n2,n3,i,k,j;            //Array Size Declaration
    printf("\nEnter the size of first array ");
    scanf("%d",&n1);
    printf("\nEnter the size of second array ");
    scanf("%d",&n2);
    
    n3=n1+n2;
    printf("\nEnter the sorted array elements");
    int a[n1],b[n2],c[n3];     //Array Declaration
    
	for(i=0;i<n1;i++)      //Array Initialized
    {
       scanf("%d",&a[i]);
       c[i]=a[i];
    }
    
    k=n1;
    printf("\nEnter the sorted array elements");
    for(i=0;i<n2;i++)      //Array Initialized
    {
        scanf("%d",&b[i]);
        c[k]=b[i];
        k++;
    }
    
    printf("\nThe merged array..\n");
    for(i=0;i<n3;i++)
    printf("%d ",c[i]);        //Print the merged array
    
    printf("\nAfter sorting...\n");
    for(i=0;i<n3;i++)         //Sorting Array
    {
        int temp;
        for(j=i+1; j<n3 ;j++)
        {
            if(c[i]<c[j])
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }   
    
    for(i=0 ; i<n3 ; i++)       //Print the sorted Array 
    {
        printf(" %d ",c[i]);
    }
    return 0;   
}
