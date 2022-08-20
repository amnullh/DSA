#include<stdio.h>
int fact(int a)
{
    int f;
    if(a==0)
    {
    f=1;
    }
    else
    {
    f=a*fact(a-1);
    }
    return f;
}
void main()
{
    int n;
    printf("Enter any number:");
    scanf("%d",&n);
    int ans = fact(n);
    printf("Factorial is : %d",ans);
}