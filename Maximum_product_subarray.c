#include<stdio.h>
int main()
{
    int n;
    printf("Enter size of an array:");
    scanf("%d",&n);
    int a[n],i,j,product,max=0;
    printf("\nEnter elements in an array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEntered elements in array are:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=0;i<n;i++)
    {
        product=a[i];
        for(j=i+1;j<n;j++)
        {
            product=product*a[j];
            if(product>max)
            {
                max=product;
            }
        }
    }
    printf("\nProduct of the maximum product subarray is:%d",max);
    return 0;
}