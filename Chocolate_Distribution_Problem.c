#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of packets:");
    scanf("%d",&n);
    int a[n],i,j,s,diff,f,l,min,t;
    printf("\nEnter number of choclates in each packet:");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter number of students:");
    scanf("%d",&s);
    printf("\nNumber of choclates in each packet are:");
    for(i=1;i<=n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nNumber of students are: %d",s);
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    min=a[s]-a[1];
    f=1;
    l=s;
    for(i=1,t=s;t<=n;i++)
    {
        diff=a[t]-a[i];
        if(min>diff)
        {
            min=diff;
            f=i;
            l=t;
        }
        t=s+i;
    }
    printf("\nMinimum difference between maximum choclates and minimum choclates is: %d",min);
    printf("\tby choosing following packets:");
    for(i=f;i<=l;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}