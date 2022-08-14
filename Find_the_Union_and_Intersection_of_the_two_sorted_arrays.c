#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter the size of two array");
    scanf("%d %d",&n,&m);
    int a[n],b[m],i,j,count=0;
    printf("\n Enter the elements in First array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter the elements in Second array");
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("\nEntered elements in First array is:");
     for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nEntered elements in Second array is:");
    for(i=0;i<m;i++)
    {
        printf("%d\t",b[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
                count++;
            }
        }
    }
    printf("\nCount of union elements of the two arrays are: %d",(n+m-count));
    return 0;
}