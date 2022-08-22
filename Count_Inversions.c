#include<stdio.h>
int main()
{
    int n;
    printf("Enter array size:");
    scanf("%d",&n);
    int a[n],i,j,count=0;
    printf("\nEnter elements in an array:");
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
                count++;
            }
        }
    }
    if(count>0)
    {
        printf("\nInversion Count in the array is: %d",count);
    }
    else
    printf("\nThere is no inversion count.");
    return 0;
}