#include <stdio.h>

int main()
{
    int a[100], b, c, sum = 0;
    float avg;
    printf("Enter number of elements: ");
    scanf("%d", &b);
    printf("Enter array elements:\n");
    for(c = 0; c < b; c++)
    {
        scanf("%d", &a[c]);
        sum = sum + a[c];
    }
    avg = (float)sum / b;
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);
    return 0;
}