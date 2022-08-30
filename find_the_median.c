#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    int a[n],i,j,mid,f,l,t;
    printf("\nEnter elements in an array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEntered elements in an array is:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    if(n%2==0)
    {
        l=n/2;
        f=l--;
        mid=(a[l]+a[f])/2;
    }
    else
    {
        l=n/2;
        mid=a[l];
    }
    printf("\nMedian is: %d",mid);
    return 0;
}