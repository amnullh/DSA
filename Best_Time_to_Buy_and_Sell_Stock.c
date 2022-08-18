#include<stdio.h>
int main()
{
    int n;
    printf("Enter no of trading list days:");
    scanf("%d",&n);
    int price[n],i,j,buy,sell,margin=0;
    printf("\nEnter the price list:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&price[i]);
    }
    printf("\nPrice list of %d days are:",n);
    for(i=0;i<n;i++)
    {
        printf("%d\t",price[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((price[j]-price[i])>margin)
            {
                margin=price[j]-price[i];
                buy=i;
                sell=j;
            }
        }
    }
    if(margin>0)
    {
        printf("\nBuy on day %d and sell on day %d; profit is %d.",(buy+1),(sell+1),margin);
    }
    else
    printf("\nAvoid to do any transaction");
    return 0;
}