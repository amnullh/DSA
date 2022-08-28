#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    int a[n],i,j,t,k,count=0,max,b[n];
    printf("\nEnter th elements in an array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEntered elements in an array are:");
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
    for(i=0;i<n;i++)
    {
        b[i]=count;
        for(j=i,k=a[i],count=0;j<n;j++,k++)
        {
            if(a[j]==k)
            {
                count++;
            }
        }
    }
    max=b[0];
    for(i=0;i<n;i++)
    {
        if(b[i]>max)
        {
            max=b[i];
        }
    }
    printf("\nLength of the longest sub-sequence is: %d",max);
    return 0;
}