#include<stdio.h>
int main()
{
    int n;
    printf("Enter the array size");
    scanf("%d",&n);
    int a[n],i,max=0,min=0;
    printf("Enter elements in an array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("Greatest number in an array is: %d",max);
    printf("Smallest element is an array is %d",min);
    return 0;
}