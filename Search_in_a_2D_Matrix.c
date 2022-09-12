#include<stdio.h>
int main()
{
    int n,m;
    printf("\nEnter row and column size of a matrix:");
    scanf("%d%d",&n,&m);
    int a[n][m],i,j,ser,s1,s2;
    printf("\nEnter elements in an array:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEntered elements in an array:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\nEnter element to be searched:");
    scanf("%d",&ser);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(ser==a[i][j])
            {
                printf("\nElement Found.");
                s1=i;
                s2=j;
            }
        }
    }
    printf("\nElement found at index position row:%d and column:%d",s1,s2);
    return 0;
}