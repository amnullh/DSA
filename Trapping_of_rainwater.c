#include <stdio.h>

int main()
{
    int arr[10], n, trap, max, sum = 0, index_max, index_trap, s_index, e_index;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("\nEnter height of each blocks:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    trap = arr[0];
    max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            index_max = i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > trap && arr[i] != max)
        {
            trap = arr[i];
            index_trap = i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == trap)
        {
            index_trap = i;
        }
    }
    if (index_trap < index_max)
    {
        s_index = index_trap;
        e_index = index_max;
    }
    else
    {
        s_index = index_max;
        e_index = index_trap;
    }

    for (size_t i = s_index; i < e_index; i++)
    {
        if (arr[i] == 0)
        {
            sum += trap;
        }
        if (arr[i] < trap && arr[i] != 0)
        {
            sum += (trap - arr[i]);
        }
    }
    if(sum>0)
    {
        printf("Water trapped between the blocks during the rainy season is:%d", sum);
    }
    else if(sum<=0)
    {
        printf("\nNo water will be trapped.");
    }
}