#include<stdio.h>
int main()
{
    int n,i,fact=1;
    printf("Enter integer whose factorial is to found:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("\nFactorial of number %d is: %d",n,fact);
    return 0;
}