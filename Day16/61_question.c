#include <stdio.h>

int main()
{
    int n, arr[100];
    int totalSum = 0, arraySum = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter array elements: \n");
    for(int i = 0; i < n - 1; i++)
    {
        scanf("%d", &arr[i]);
        arraySum += arr[i];
    }
    totalSum = n * (n + 1) / 2;
    printf("Missing Number = %d", totalSum - arraySum);
    return 0;
}