#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter the size of two array:");
    scanf("%d%d",&n,&m);
    int a[n],b[m],i,j,c=0;
    printf("\nEnter elements in array 1:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter elements in array 2:");
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("\nEntered elements in array 1:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nEntered elements in array 2:");
    for(i=0;i<m;i++)
    {
        printf("%d\t",b[i]);
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(b[i]==a[j])
            {
                c++;
            }
        }
    }
    if(c==m)
    printf("\nArray 2 is a subset of array 1.");
    else
    printf("\nArray 2 is not a subset of array 1.");
    return 0;
}