#include<stdio.h>
int main()
{
    int n;
    printf("Enter array size");
    scanf("%d",&n);
    int a[n],temp,i,j,k,l;
    printf("\nEnter elements in an array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEntered element is:");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\nEnter the Kth largest element to be found");
    scanf("%d",&k);
    printf("\nEnter the kth smallest element to be found");
    scanf("%d",&l);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\nKth largest element in the given array is: %d",a[n-k]);
    printf("\nKth smallest element in the given array is: %d",a[l-1]);
    return 0;
}