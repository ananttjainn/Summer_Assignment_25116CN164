#include <stdio.h>

int main()
{
    int arr[100], size, sum, i, j;
    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter array elements: \n");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter required sum: ");
    scanf("%d", &sum);
    for(i = 0; i < size; i++)
    {
        for(j = i + 1; j < size; j++)
        {
            if(arr[i] + arr[j] == sum)
            {
                printf("Pair found: %d and %d \n", arr[i], arr[j]);
            }
        }
    }
    return 0;
}