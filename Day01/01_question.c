#include <stdio.h>

int main()
{
    int n, i;
    int total = 0;

    printf("Enter value of N: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        total += i;
    }

    printf("Sum of first %d natural numbers = %d", n, total);

    return 0;
}