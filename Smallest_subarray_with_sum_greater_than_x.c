#include<stdio.h>
int main()
{
    int n;
    printf("Enter size of an array:");
    scanf("%d",&n);
    int a[n],x,i,j,k,max=0,s,sum;
    printf("\nEnter elements in an array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter the value of variable x:");
    scanf("%d",&x);
    printf("\nEntered elements in an array is:");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
        max=max+a[i];
    }
    for(i=0;i<n;i++)
    {
        sum=a[i];
        if((sum>x)&&(sum<max))
            {
                max=sum;
                s=1;
            }
        for(j=i+1,k=1;j<n;j++)
        {
            sum=sum+a[j];
            k++;
            if((sum>x)&&(sum<max))
            {
                max=sum;
                s=k;
            }
        }
    }
    printf("\nSmallest subarray length is: %d and Sum greater than the x(%d) variable is: %d.",s,x,max);
    return 0;
}