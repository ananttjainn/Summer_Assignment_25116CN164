#include <stdio.h>

int main()
{
    int arr[100], n, i, j, small, temp;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: \n", n);
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n - 1; i++)
    {
        small = i;
        for(j = i + 1; j < n; j++) 
        {
            if(arr[j] < arr[small])
            {
                small = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[small];
        arr[small] = temp;
    }
    printf("Sorted array: \n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}