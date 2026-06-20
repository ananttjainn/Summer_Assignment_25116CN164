#include <stdio.h>

int main()
{
    int arr[100], n;
    int maxFreq = 0, frequentElement;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for(int i = 0; i < n; i++)
    {
        int count = 1;
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
                count++;
        }
        if(count > maxFreq)
        {
            maxFreq = count;
            frequentElement = arr[i];
        }
    }
    printf("Maximum Frequency Element = %d", frequentElement);
    return 0;
}