#include <stdio.h>

int main()
{
    int a[100], n, i, num;
    int start, end, mid;
    int check = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter sorted array elements: \n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter number to search: ");
    scanf("%d", &num);
    start = 0;
    end = n - 1;
    while(start <= end)
    {
        mid = (start + end) / 2;
        if(a[mid] == num) 
        {
            check = 1;
            break;
        }
        else if(a[mid] < num)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    if(check == 1)
    printf("Number found at position %d", mid + 1);
    else
    printf("Number not found");
    return 0;
}