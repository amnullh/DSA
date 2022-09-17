#include<stdio.h>
void main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n],i,j,s,l;
    printf("Enter the elements in array:");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    l=a[0];
    s=a[0];
   for(i=0;i<n;i++)
    {
        if(l<a[i])
        {
        l=a[i];
        }
        if(s>a[i])
        {
        s=a[i];
        }
    }
        printf("Greatest number:%d",l);
        printf("Smallest Number: %d",s);
}