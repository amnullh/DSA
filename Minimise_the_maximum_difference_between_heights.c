#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    int a[n],i,k,max,min;
    printf("\nEnter elements in an array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter the value of K for modification:");
    scanf("%d",&k);
    printf("\nEntered elements in an array are:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>=k)
        {
            a[i]=a[i]-k;
        }
            else if(a[i]<k)
        {
            a[i]=a[i]+k;
        }
    }
    max=a[0];
    min=a[0];
    printf("\nModified array is:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("\nThe difference between the largest and smallest is:%d",(max-min));
    return 0;
}