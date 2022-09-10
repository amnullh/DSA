#include<stdio.h>
int main()
{
    int n,m;
    printf("\nEnter row and column of matrix:");
    scanf("%d%d",&n,&m);
    int a[n][m],b[m][n],i,j,k=n-1;
    printf("\nEnter elements in matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEntered matrix is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++,k--)
    {
        for(j=0;j<m;j++)
        {
            b[j][k]=a[i][j];
        }
    }
    printf("Rotation of a matrix by 90 degree:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}