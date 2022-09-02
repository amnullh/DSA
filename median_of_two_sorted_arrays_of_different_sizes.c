#include<stdio.h>
int main()
{
    int n,m,o;
    printf("Enter the size of two array:");
    scanf("%d %d",&n,&m);
    o=m+n;
    int a[n],b[m],c[o],i,j,mid,f,l,t;
    printf("\nEnter elements in 1st array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter elements in 2nd array:");
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("\nEntered elements in 1st array is:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nEntered elements in 2nd array is:");
    for(i=0;i<m;i++)
    {
        printf("%d\t",b[i]);
    }
    for(i=0;i<n;i++)
    {
        c[i]=a[i];
        t=i;
    }
    for(i=0,j=t+1;i<m;i++,j++)
    {
        c[j]=b[i];
    }
    for(i=0;i<o;i++)
    {
        for(j=i+1;j<o;j++)
        {
            if(c[i]>c[j])
            {
                t=c[i];
                c[i]=c[j];
                c[j]=t;
            }
        }
    }
    if(o%2==0)
    {
        l=o/2;
        f=l--;
        mid=(c[l]+c[f])/2;
    }
    else
    {
        l=o/2;
        mid=c[l];
    }
    printf("\nMedian is: %d",mid);
    return 0;
}