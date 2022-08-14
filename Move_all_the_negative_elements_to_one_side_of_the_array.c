#include<stdio.h>
int main()
{
    int a[10],i,j,temp;
    printf("Enter elements in an array");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEntered element in an array is:");
    for(i=0;i<10;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<10-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp =a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\nSorted element is:");
    for(i=0;i<10;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}