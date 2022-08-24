#include<stdio.h>
int main()
{
    int n;
    printf("Enter array size");
    scanf("%d",&n);
    int a[n],i,j,sum;
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
    for(i=0;i<n;i++,sum=0)
    {
        sum=sum+a[i];
        if(a[i]==0)
        {
            printf("\nThere exist a subarray with sum 0.");
        }
        for(j=i+1;j<n;j++)
        {
            sum=sum+a[j];
            if(sum==0)
            {
                printf("\nThere exist a subarray with sum 0.");
            }
        }
    }
    return 0;
}