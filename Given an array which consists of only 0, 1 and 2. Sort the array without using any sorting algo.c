#include<stdio.h>
int main()
{
    int a[10],i;
    printf("Enter the 0s, 1s & 2s elements in array ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEntered array is:");
    for(i=0;i<10;i++)
    {
        printf("%d",a[i]);
    }
    printf("\nSorted Element is:");
    for(i=0;i<10;i++)
    {
        if(a[i]==0)
        printf("%d",a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(a[i]==1)
        printf("%d",a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(a[i]==2)
        printf("%d",a[i]);
    }
    return 0;
}