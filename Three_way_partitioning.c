#include <stdio.h>
int main()
{
    int A[10], n, K[2];
    printf("Enter number of element in the array: ");
    scanf("%d", &n);
    printf("Enter element in the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("Enter the range: ");
    for (int i = 0; i < 2; i++)
    {
        scanf("%d", &K[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                int temp = A[j + 1];
                A[j + 1] = A[j];
                A[j] = temp;
            }
        }
    }
    printf("New array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
}