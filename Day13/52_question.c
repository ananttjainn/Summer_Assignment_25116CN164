#include <stdio.h>

int main()
{
    int a[100], b, c, even = 0, odd = 0;
    printf("Enter number of elements: ");
    scanf("%d", &b);
    printf("Enter array elements:\n");
    for(c = 0; c < b; c++)
    {
        scanf("%d", &a[c]);
    }
    for(c = 0; c < b; c++)
    {
        if(a[c] % 2 == 0)
        even++;
        else
        odd++;
    }
    printf("Even elements = %d\n", even);
    printf("Odd elements = %d\n", odd);
    return 0;
}