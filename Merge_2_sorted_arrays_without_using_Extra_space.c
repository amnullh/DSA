#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter the size of two array:");
    scanf("%d%d",&n,&m);
    int arr1[n],arr2[m],a[n+m],i,j;
    printf("\nEnter the elements of 1st Array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("\nEnter the elements of 2nd Array:");
    for(i=0;i<m;i++)
    {
        scanf("%d",&arr2[i]);
    }
     printf("\nEntered elements of 1st Array are:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr1[i]);
    }
    printf("\nEntered elements of 2nd Array are:");
    for(i=0;i<m;i++)
    {
        printf("%d\t",arr2[i]);
    }
    for(i=0,j=0;i<n;i++,j++)
    {
        a[j]=arr1[i];
    }
    for(i=0;i<m;i++,j++)
    {
        a[j]=arr2[i];
    }
    for(i=0;i<n+m;i++)
    {
        for(j=i+1;j<n+m;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\nModified arr1 that contains the first N sorted elements are:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nModified arr2 that contains the last M sorted elements are:");
    for(;i<n+m;i++)
    {
        printf("%d\t",a[i]); 
    }
    return 0;
}