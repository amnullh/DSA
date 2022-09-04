#include<stdio.h>
void main()
{
    int n;
    printf("Enter size of array");
    scanf("%d",&n);
    int a[n],i,j,f=0,l=n-1,m,s,t,found;
    printf("Enter elements in array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("Enter element to be searched:");
    scanf("%d",&s);
    while(f<=l)
    {
        m=(f+l)/2;
        if(a[m]>s)
        {
        l=m-1;
        }
        else if(a[m]<s)
        {
        f=m+1;
        }
        else
        {
        found=1;
        break;
        }
    }
    if(found==1)
    printf("Element found");
    else
    printf("Element not found");
}