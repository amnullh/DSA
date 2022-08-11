#include<stdio.h>
int main()
{
    int i,j,a[10],b[10];
    printf("\nEnter elements in array\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0,j=9;i<10;i++,j--)
    {
        printf("%d",a[j]);
    }
return 0;
}