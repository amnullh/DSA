#include<stdio.h>
int main()
{
    int n;
    printf("Enter size of an array:");
    scanf("%d",&n);
    int a[n],i,j,k,count=0;
    printf("\nEnter elements in an array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter variable with whom pair is to found");
    scanf("%d",&k);
    printf("\nEntered elements in an array are:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((a[i]+a[j])==k)
            count++;
        }
    }
    printf("\nNumber of pairs of elements in the array whose sum is equal to %d is: %d",k,count);
    return 0;
}