#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    int a[n],i,j;
    printf("\nEnter the elements in an array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEntered array elements are:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nRotated array by one position in clock-wise direction are: %d",a[n-1]);
    for(i=0;i<n-1;i++)
    {
        printf("\t%d",a[i]);
    }
    return 0;
}