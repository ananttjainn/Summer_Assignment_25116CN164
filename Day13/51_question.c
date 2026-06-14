#include <stdio.h>

int main()
{
    int a[100], b, c, largest, smallest;
    printf("Enter number of elements: ");
    scanf("%d", &b);
    printf("Enter array elements:\n");
    for(c = 0; c < b; c++)
    {
        scanf("%d", &a[c]);
    }
    largest = a[0];
    smallest = a[0];
    for(c = 1; c < b; c++)
    {
        if(a[c] > largest)
        largest = a[c];
        if(a[c] < smallest)
        smallest = a[c];
    }
    printf("Largest element = %d\n", largest);
    printf("Smallest element = %d\n", smallest);
    return 0;
}