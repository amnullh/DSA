#include<stdio.h>
void main()
{
    int n;
    printf("Enter size of matrix");
    scanf("%d",&n);
    int i,j,a[n][n];
    printf("Enter elements in an array:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Entered matrix is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    printf("Left side of diagonal of matrix is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            printf("%d\n",a[i][j]);
            else
            printf(" ");
        }
        printf("\n");
    }
}