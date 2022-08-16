#include <stdio.h>

int main()
{
    int n, m, count = 0, arr[20];
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    m = n;
    for (int i = 0; i < n; i += arr[i])
    {
        if (arr[i] == 0)
        {
            goto exit;
        }
        if(m>1)
        {
            m -= arr[i];
            printf(" m :%d \n",m);
            count++;
            printf("count : %d \n",count);
        }
        else
        {
            printf("min jumps: %d",count);
        }
        
    }
    exit:
    return -1;

}