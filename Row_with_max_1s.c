#include<stdio.h>
int main()
{
    int n,m;
    printf("\nEnter size of row and column of matrix:");
    scanf("%d%d",&n,&m);
    int a[n][m],i,j,count,max=0,max_row;
    printf("\nEnter elements in a matrix:");
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
    for(i=0;i<n;i++)
    {
        for(j=0,count=0;j<m;j++)
        {
            if(a[i][j]==1)
            {
                count++;
            }
        }
        if(count>max)
        {
            max=count;
            max_row=i;
        }
    }
    printf("\nRow %d (0-based indexing) has the maximum number of 1's that is %d.",max_row,max);
    return 0;
}