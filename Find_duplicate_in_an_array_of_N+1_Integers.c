#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    n=n+1;
    int a[n],i,j;
    printf("\nEnter the elements in an array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
            goto jump;
            }
        }
    }
    jump:printf("\nRepeated element in an array is:%d",a[i]);
    return 0;
}