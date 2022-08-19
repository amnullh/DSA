#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,m;
    printf("Enter size eof matrix");
    scanf("%d",&n);
    int i,j,k,a[n][n],b[n][n],p[n][n];
    printf("Enter elements in 1st array:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }
    printf("Enter elemnts in 2nd array:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        scanf("%d",&b[i][j]);
        }
    }
    printf("Entered matrix is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Entered matrix is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            p[i][j]=0;
            for(k=0;k<n;k++)
            {
                p[i][j]=p[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    printf("Product of above two matrix is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",p[i][j]);
        }
        printf("\n");
    }
}
