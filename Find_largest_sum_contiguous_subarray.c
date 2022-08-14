#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    int a[n],i,j,m=0;
    printf("\nEnter elements in an array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n;i>2;i--)
    {
        m=m+i;
    }
    m=m+1+n;
    int b[m],sum,k=0;
    printf("\nEntered elements in an array are:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1,sum=a[i];j<n;j++)
        {
            sum=sum+a[j];
           b[k]=a[i]+a[j];
           k++;
        }
        b[k]=sum;
        k++;
    }
    for(i=0;i<n;i++,k++)
    {
        b[k]=a[i];
    }
    int max;
    for(max=b[0],i=1;i<=k;i++)
    {
        if(b[i]>max)
        max=b[i];
    }
    printf("\nContiguous sub-array which has the maximum sum is: %d",max);
    return 0;
}