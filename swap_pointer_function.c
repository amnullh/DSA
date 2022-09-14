#include<stdio.h>
void swap(int *x, int *y);
void main()
{
    int a,b,*p,*q;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    p=&a;
    q=&b;
    printf("Numbers before swapping are: %d and %d\n",*p,*q);
    swap(p,q);
}
void swap(int *x,int *y)
{
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
    printf("Numbers after swapping are: %d and %d",*x,*y);
}