#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n],i,j,k,x,s;
    printf("\nEnter elements in an array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter value of integer X:");
    scanf("%d",&x);
    printf("\nEntered elements in an array:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nEntered value of integer X is %d.",x);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            for(k=j+1;k<n;k++)
            {
                s=a[i]+a[j]+a[k];
                if(s==x)
                {
                    printf("\nTriplet is formed by addition of %d, %d and %d",a[i],a[j],a[k]);
                }
            }
        }
    }
    return 0;
}