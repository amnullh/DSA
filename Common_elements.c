#include<stdio.h>
int main()
{
    int n,m,o;
    printf("Enter size of three array:");
    scanf("%d%d%d",&n,&m,&o);
    int a[n],b[m],c[o],i,j,k;
    printf("\nEnter elements in 1st, 2nd and 3rd array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<o;i++)
    {
        scanf("%d",&c[i]);
    }
    printf("\nEntered elements in 1st array are:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
     printf("\nEntered elements in 2nd array are:");
    for(i=0;i<m;i++)
    {
        printf("%d\t",b[i]);
    }
     printf("\nEntered elements in 3rd array are:");
    for(i=0;i<o;i++)
    {
        printf("%d\t",c[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            for(k=0;k<o;k++)
            {
                if((a[i]==b[j])&&(a[i]==c[k]))
                {
                    printf("\nElements that are common in all three arrays is: %d",a[i]);
                }
            }
        }
    }
    return 0;
}